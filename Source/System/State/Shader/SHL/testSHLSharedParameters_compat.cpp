// OpenSG example: testSHL
//
// Demonstrates the use of the SHLChunk
// Ok this creates 1 CGChunk with different parameter sets for each geometry.

// Headers
#include "OSGGLUT.h"
#include "OSGConfig.h"

#ifdef OSG_1_COMPAT

#include "OSGSimpleGeometry.h"
#include "OSGGLUT.h"
#include "OSGGLUTWindow.h"
#include "OSGSimpleSceneManager.h"
#include "OSGAction.h"
#include "OSGSceneFileHandler.h"
#include "OSGBaseFunctions.h"

#include "OSGGradientBackground.h"
#include "OSGNode.h"
#include "OSGGroup.h"
#include "OSGTransform.h"
#include "OSGPointLight.h"
#include "OSGMaterialGroup.h"

#include "OSGImage.h"
#include "OSGChunkMaterial.h"
#include "OSGMaterialChunk.h"
#include "OSGSHLChunk.h"
#include "OSGSHLParameterChunk.h"


// vertex shader program for 
static std::string _vp_program =
"varying vec3 DiffuseColor;\n"
"varying vec3 SpecularColor;\n"
"\n"
"void main(void)\n"
"{\n"
"	vec3 LightColor = vec3(1.0);\n"
"	vec3 Specular	= vec3(1.0);\n"
"	vec3 Ambient	= vec3(0.2);\n"
"	float Kd		= 0.3;\n"
"\n"
"	vec3 LightPosition = gl_LightSource[0].position.xyz;\n"
"\n"
"	vec3 ecPosition	= vec3(gl_ModelViewMatrix * gl_Vertex);\n"
"\n"
"	vec3 tnorm		= normalize(gl_NormalMatrix * gl_Normal);\n"
"\n"
"	vec3 lightVec	= normalize(LightPosition - ecPosition);\n"
"\n"
"	vec3 hvec		= normalize(lightVec - ecPosition);\n"
"\n"
"	float spec		= clamp(dot(hvec, tnorm), 0.0, 1.0);\n"
"	spec			= pow(spec, 16.0);\n"
"\n"
"	DiffuseColor	= LightColor * vec3(Kd * dot(lightVec, tnorm));\n"
"	DiffuseColor	= clamp(Ambient + DiffuseColor, 0.0, 1.0);\n"
"	SpecularColor	= clamp((LightColor * Specular * spec), 0.0 ,1.0);\n"
"\n"
"	gl_TexCoord[0]	= gl_MultiTexCoord0;\n"
"	gl_Position		= ftransform();\n"
"}\n";


// fragment shader program for
static std::string _fp_program =
"varying vec3 DiffuseColor;\n"
"varying vec3 SpecularColor;\n"
"\n"
"uniform vec2 Scale;\n"
"uniform vec2 Threshold;\n"
"uniform vec3 SurfaceColor;\n"
"\n"
"void main (void)\n"
"{\n"
"	float ss = fract(gl_TexCoord[0].s * Scale.s);\n"
"	float tt = fract(gl_TexCoord[0].t * Scale.t);\n"
"\n"
"	if ((ss > Threshold.s) && (tt > Threshold.t))\n"
"		discard;\n"
"\n"
"	vec3 finalColor = SurfaceColor * DiffuseColor + SpecularColor;\n"
"	gl_FragColor = vec4(finalColor, 1.0);\n"
"}\n";



// ------------------- global vars ----------------------
//
// The SimpleSceneManager to manage simple applications
static OSG::SimpleSceneManagerRefPtr _mgr;
// The scene
static OSG::NodeRecPtr               _scene;

static OSG::Int32                    _animation    = 1;
static OSG::SHLParameterChunkRecPtr  _shlparameter = NULL;


// forward declaration so we can have the interesting stuff upfront
int setupGLUT( int *argc, char *argv[] );

// Initialize GLUT & OpenSG and set up the scene
int doMain(int argc, char **argv)
{
    // OSG init
    OSG::osgInit(argc,argv);

    // GLUT init
    int winid = setupGLUT(&argc, argv);

    // the connection between GLUT and OpenSG
    OSG::GLUTWindowUnrecPtr gwin = OSG::GLUTWindow::create();

    gwin->setGlutId(winid);
    gwin->setSize( 800, 800 );
    gwin->init();

    // create root node
    _scene = OSG::makeCoredNode<OSG::Group>();

    OSG::GeometryUnrecPtr geo = OSG::makeBoxGeo(0.5, 0.5, 0.5, 1, 1, 1);

    // share the chunk
    OSG::SHLChunkUnrecPtr shl = OSG::SHLChunk::create();

    shl->setVertexProgram(_vp_program);
    shl->setFragmentProgram(_fp_program);
    // These parameters are the same for all geometries so we
    // keep them in here.
    shl->setUniformParameter("Scale", OSG::Vec2f(20.0f, 20.0f));
    shl->setUniformParameter("Threshold", OSG::Vec2f(0.7f, 0.7f));

    OSG::Int32 size = 4;
    
    // start color
    OSG::Vec3f sc(0.0, 0.0, 0.0);
    
    // end color
    OSG::Vec3f ec(1.0, 1.0, 1.0);

    OSG::Real32 sr = (ec[0] - sc[0]) / OSG::Real32((size*2));
    OSG::Real32 sg = (ec[1] - sc[1]) / OSG::Real32((size*2));
    OSG::Real32 sb = (ec[2] - sc[2]) / OSG::Real32((size*2));
    
    OSG::Vec3f color(sc);

    OSG::Int32 x = - size;
    OSG::Int32 y = - size;
    OSG::Int32 z = - size;

    OSG::UInt32 iterations = size*2 * size*2 * size*2;

    printf("Creating %u cubes ...\n", iterations);
    for(OSG::UInt32 i=0;i<iterations;++i)
    {
        OSG::ChunkMaterialUnrecPtr cmat = OSG::ChunkMaterial::create();

        // ok use one SHLChunk and n SHLParameterChunks
        // Assing a different "SurfaceColor" parameter to each geometry.
        OSG::SHLParameterChunkUnrecPtr shlparameter = 
            OSG::SHLParameterChunk::create();

        shlparameter->setSHLChunk(shl);
        shlparameter->setUniformParameter("SurfaceColor", color);

        _shlparameter = shlparameter;

        cmat->addChunk(shl);
        cmat->addChunk(shlparameter);
    
        OSG::TransformUnrecPtr trans;
        OSG::NodeUnrecPtr trans_node = 
            OSG::makeCoredNode<OSG::Transform>(&trans);

        trans->editMatrix().setTranslate(OSG::Real32(x), 
                                         OSG::Real32(y), 
                                         OSG::Real32(z));

        OSG::MaterialGroupUnrecPtr mg;

        OSG::NodeUnrecPtr mg_node = OSG::makeCoredNode<OSG::MaterialGroup>(&mg);

        mg->setMaterial(cmat);

        OSG::NodeUnrecPtr geonode = OSG::Node::create();

        geonode->setCore(geo);
        
        mg_node->addChild(geonode);

        trans_node->addChild(mg_node);
    
        // add to scene
        _scene->addChild(trans_node);
        
        // ----
        ++x;
        color[0] += sr;

        if(x == size)
        {
            x = - size;
            ++y;
            color[0] = sc[0];
            color[1] += sg;
            if(y == size)
            {
                y = - size;
                ++z;
                color[1] = sc[1];
                color[2] += sb;
            }
        }
    }


    // create the SimpleSceneManager helper
    _mgr = OSG::SimpleSceneManager::create();

    // tell the manager what to manage
    _mgr->setWindow(gwin );
    _mgr->setRoot(_scene);

    // show the whole scene
    _mgr->showAll();

    // create a gradient background.
    OSG::GradientBackgroundUnrecPtr gback = OSG::GradientBackground::create();

    gback->clearLines();
    gback->addLine(OSG::Color3f(0.7, 0.7, 0.8), 0);
    gback->addLine(OSG::Color3f(0.0, 0.1, 0.3), 1);

    OSG::Window *win = _mgr->getWindow();

    for(OSG::UInt32 i=0;i<win->getMFPort()->size();++i)
    {
        OSG::Viewport *vp = win->getPort(i);

        vp->setBackground(gback);
    }
        
    return 0;
}

// Initialize GLUT & OpenSG and set up the scene
int main(int argc, char **argv)
{
    if(doMain(argc, argv) != 0)
        return 1;
    
    // GLUT main loop
    glutMainLoop();

    return 0;
}

//
// GLUT callback functions
//

// redraw the window
void display(void)
{
    OSG::Real64 t = OSG::getSystemTime();
    // render scene
    _mgr->redraw();
    t = OSG::getSystemTime() - t;
    if(t > 0.0)
        printf("fps: %f\r", 1.0f / OSG::Real32(t));
    else
        printf("fps: very fast ...\r");
}

// react to size changes
void reshape(int w, int h)
{
    _mgr->resize(w, h);
    glutPostRedisplay();
}

// react to mouse button presses
void mouse(int button, int state, int x, int y)
{
    if (state)
        _mgr->mouseButtonRelease(button, x, y);
    else
        _mgr->mouseButtonPress(button, x, y);

    glutPostRedisplay();
}

// react to mouse motions with pressed buttons
void motion(int x, int y)
{
    _mgr->mouseMove(x, y);
    glutPostRedisplay();
}

// react to keys
void keyboard(unsigned char k, int x, int y)
{
    switch(k)
    {
        case 27:
        case 'q':

            _scene        = NULL;
            _shlparameter = NULL;
            _mgr          = NULL;

            exit(1);
        break;
        case 'w':
            OSG::SceneFileHandler::the()->write(_scene, "scene.osb.gz", true);
            printf("wrote scene.osb.gz\n");
        break;
        case 'a':
            _animation = 1 - _animation;
        break;
        case 'c':
            if(_shlparameter != NULL)
            {
                _shlparameter->setUniformParameter("SurfaceColor", 
                                                   OSG::Vec3f(1.0f, 
                                                              1.0f, 
                                                              1.0f));
            }
        break;
    }

    glutPostRedisplay();
}

// setup the GLUT library which handles the windows for us
int setupGLUT(int *argc, char *argv[])
{
    glutInit(argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);

    int winid = glutCreateWindow("OpenSG SHL Shader");

    glutReshapeFunc(reshape);
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutKeyboardFunc(keyboard);

    glutIdleFunc(display);

    return winid;
}


#else

int main(int argc, char **argv)
{
    return 0;
}

#endif

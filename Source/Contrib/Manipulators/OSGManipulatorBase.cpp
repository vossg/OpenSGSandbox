/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class Manipulator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEMANIPULATORINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGNode.h> // Target Class
#include <OSGNode.h> // ActiveSubHandle Class
#include <OSGViewport.h> // Viewport Class
#include <OSGNode.h> // HandleXNode Class
#include <OSGNode.h> // HandleYNode Class
#include <OSGNode.h> // HandleZNode Class
#include <OSGNode.h> // TransXNode Class
#include <OSGNode.h> // TransYNode Class
#include <OSGNode.h> // TransZNode Class
#include <OSGMaterial.h> // MaterialX Class
#include <OSGMaterial.h> // MaterialY Class
#include <OSGMaterial.h> // MaterialZ Class
#include <OSGNode.h> // AxisLinesN Class

#include "OSGManipulatorBase.h"
#include "OSGManipulator.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Manipulator
    Baseclass for all Manipulators
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var NodePtr         ManipulatorBase::_sfTarget
    
*/

/*! \var NodePtr         ManipulatorBase::_sfActiveSubHandle
    the active sub handle
*/

/*! \var Pnt2f           ManipulatorBase::_sfLastMousePos
    Last mouse position (in pixel, although 2f is used!)
*/

/*! \var ViewportPtr     ManipulatorBase::_sfViewport
    
*/

/*! \var bool            ManipulatorBase::_sfActive
    
*/

/*! \var Vec3f           ManipulatorBase::_sfLength
    The length of the three axes in one vector
*/

/*! \var NodePtr         ManipulatorBase::_sfHandleXNode
    The node for the x-handle geometry
*/

/*! \var NodePtr         ManipulatorBase::_sfHandleYNode
    The node for the y-handle geometry
*/

/*! \var NodePtr         ManipulatorBase::_sfHandleZNode
    The node for the z-handle geometry
*/

/*! \var NodePtr         ManipulatorBase::_sfTransXNode
    The node for the x-handle transform
*/

/*! \var NodePtr         ManipulatorBase::_sfTransYNode
    The node for the y-handle transform
*/

/*! \var NodePtr         ManipulatorBase::_sfTransZNode
    The node for the z-handle transform
*/

/*! \var MaterialPtr     ManipulatorBase::_sfMaterialX
    material for the x-axis geometry
*/

/*! \var MaterialPtr     ManipulatorBase::_sfMaterialY
    material for the y-axis geometry
*/

/*! \var MaterialPtr     ManipulatorBase::_sfMaterialZ
    material for the z-axis geometry
*/

/*! \var NodePtr         ManipulatorBase::_sfAxisLinesN
    
*/


void ManipulatorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFNodePtr::Description(
        SFNodePtr::getClassType(),
        "target",
        "",
        TargetFieldId, TargetFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ManipulatorBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ManipulatorBase::getSFTarget));

    oType.addInitialDesc(pDesc);

    pDesc = new SFNodePtr::Description(
        SFNodePtr::getClassType(),
        "activeSubHandle",
        "the active sub handle\n",
        ActiveSubHandleFieldId, ActiveSubHandleFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ManipulatorBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ManipulatorBase::getSFActiveSubHandle));

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFPnt2f *(ManipulatorBase::*GetSFLastMousePosF)(void) const;

    GetSFLastMousePosF GetSFLastMousePos = &ManipulatorBase::getSFLastMousePos;
#endif

    pDesc = new SFPnt2f::Description(
        SFPnt2f::getClassType(),
        "lastMousePos",
        "Last mouse position (in pixel, although 2f is used!)\n",
        LastMousePosFieldId, LastMousePosFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ManipulatorBase::editSFLastMousePos),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFLastMousePos));
#else
        reinterpret_cast<FieldGetMethodSig >(&ManipulatorBase::getSFLastMousePos));
#endif

    oType.addInitialDesc(pDesc);

    pDesc = new SFViewportPtr::Description(
        SFViewportPtr::getClassType(),
        "viewport",
        "",
        ViewportFieldId, ViewportFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ManipulatorBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ManipulatorBase::getSFViewport));

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFBool *(ManipulatorBase::*GetSFActiveF)(void) const;

    GetSFActiveF GetSFActive = &ManipulatorBase::getSFActive;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "active",
        "",
        ActiveFieldId, ActiveFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ManipulatorBase::editSFActive),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFActive));
#else
        reinterpret_cast<FieldGetMethodSig >(&ManipulatorBase::getSFActive));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFVec3f *(ManipulatorBase::*GetSFLengthF)(void) const;

    GetSFLengthF GetSFLength = &ManipulatorBase::getSFLength;
#endif

    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "length",
        "The length of the three axes in one vector\n",
        LengthFieldId, LengthFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ManipulatorBase::editSFLength),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFLength));
#else
        reinterpret_cast<FieldGetMethodSig >(&ManipulatorBase::getSFLength));
#endif

    oType.addInitialDesc(pDesc);

    pDesc = new SFNodePtr::Description(
        SFNodePtr::getClassType(),
        "handleXNode",
        "The node for the x-handle geometry\n",
        HandleXNodeFieldId, HandleXNodeFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ManipulatorBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ManipulatorBase::getSFHandleXNode));

    oType.addInitialDesc(pDesc);

    pDesc = new SFNodePtr::Description(
        SFNodePtr::getClassType(),
        "handleYNode",
        "The node for the y-handle geometry\n",
        HandleYNodeFieldId, HandleYNodeFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ManipulatorBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ManipulatorBase::getSFHandleYNode));

    oType.addInitialDesc(pDesc);

    pDesc = new SFNodePtr::Description(
        SFNodePtr::getClassType(),
        "handleZNode",
        "The node for the z-handle geometry\n",
        HandleZNodeFieldId, HandleZNodeFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ManipulatorBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ManipulatorBase::getSFHandleZNode));

    oType.addInitialDesc(pDesc);

    pDesc = new SFNodePtr::Description(
        SFNodePtr::getClassType(),
        "transXNode",
        "The node for the x-handle transform\n",
        TransXNodeFieldId, TransXNodeFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ManipulatorBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ManipulatorBase::getSFTransXNode));

    oType.addInitialDesc(pDesc);

    pDesc = new SFNodePtr::Description(
        SFNodePtr::getClassType(),
        "transYNode",
        "The node for the y-handle transform\n",
        TransYNodeFieldId, TransYNodeFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ManipulatorBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ManipulatorBase::getSFTransYNode));

    oType.addInitialDesc(pDesc);

    pDesc = new SFNodePtr::Description(
        SFNodePtr::getClassType(),
        "transZNode",
        "The node for the z-handle transform\n",
        TransZNodeFieldId, TransZNodeFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ManipulatorBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ManipulatorBase::getSFTransZNode));

    oType.addInitialDesc(pDesc);

    pDesc = new SFMaterialPtr::Description(
        SFMaterialPtr::getClassType(),
        "materialX",
        "material for the x-axis geometry\n",
        MaterialXFieldId, MaterialXFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ManipulatorBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ManipulatorBase::getSFMaterialX));

    oType.addInitialDesc(pDesc);

    pDesc = new SFMaterialPtr::Description(
        SFMaterialPtr::getClassType(),
        "materialY",
        "material for the y-axis geometry\n",
        MaterialYFieldId, MaterialYFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ManipulatorBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ManipulatorBase::getSFMaterialY));

    oType.addInitialDesc(pDesc);

    pDesc = new SFMaterialPtr::Description(
        SFMaterialPtr::getClassType(),
        "materialZ",
        "material for the z-axis geometry\n",
        MaterialZFieldId, MaterialZFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ManipulatorBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ManipulatorBase::getSFMaterialZ));

    oType.addInitialDesc(pDesc);

    pDesc = new SFNodePtr::Description(
        SFNodePtr::getClassType(),
        "axisLinesN",
        "",
        AxisLinesNFieldId, AxisLinesNFieldMask,
        true,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ManipulatorBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ManipulatorBase::getSFAxisLinesN));

    oType.addInitialDesc(pDesc);
}


ManipulatorBase::TypeObject ManipulatorBase::_type(
    ManipulatorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    Manipulator::initMethod,
    (InitalInsertDescFunc) &ManipulatorBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"Manipulator\"\n"
    "\tparent=\"Transform\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "Baseclass for all Manipulators\n"
    "\t<Field\n"
    "\t\tname=\"target\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"activeSubHandle\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tthe active sub handle\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"lastMousePos\"\n"
    "\t\ttype=\"Pnt2f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\tLast mouse position (in pixel, although 2f is used!)\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"viewport\"\n"
    "\t\ttype=\"ViewportPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"NullFC\"\n"
    "\t\theader=\"OSGViewport.h\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"active\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"length\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1,1,1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe length of the three axes in one vector\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"handleXNode\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe node for the x-handle geometry\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"handleYNode\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe node for the y-handle geometry\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"handleZNode\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe node for the z-handle geometry\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"transXNode\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe node for the x-handle transform\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"transYNode\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe node for the y-handle transform\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"transZNode\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe node for the z-handle transform\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"materialX\"\n"
    "\t\ttype=\"MaterialPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\theader=\"OSGMaterial.h\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tmaterial for the x-axis geometry\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"materialY\"\n"
    "\t\ttype=\"MaterialPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\theader=\"OSGMaterial.h\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tmaterial for the y-axis geometry\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"materialZ\"\n"
    "\t\ttype=\"MaterialPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\theader=\"OSGMaterial.h\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tmaterial for the z-axis geometry\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"axisLinesN\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "Baseclass for all Manipulators\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ManipulatorBase::getType(void)
{
    return _type;
}

const FieldContainerType &ManipulatorBase::getType(void) const
{
    return _type;
}

UInt32 ManipulatorBase::getContainerSize(void) const
{
    return sizeof(Manipulator);
}

/*------------------------- decorator get ------------------------------*/


//! Get the Manipulator::_sfTarget field.
const SFNodePtr *ManipulatorBase::getSFTarget(void) const
{
    return &_sfTarget;
}

//! Get the Manipulator::_sfActiveSubHandle field.
const SFNodePtr *ManipulatorBase::getSFActiveSubHandle(void) const
{
    return &_sfActiveSubHandle;
}

SFPnt2f *ManipulatorBase::editSFLastMousePos(void)
{
    editSField(LastMousePosFieldMask);

    return &_sfLastMousePos;
}

const SFPnt2f *ManipulatorBase::getSFLastMousePos(void) const
{
    return &_sfLastMousePos;
}

#ifdef OSG_1_COMPAT
SFPnt2f             *ManipulatorBase::getSFLastMousePos   (void)
{
    return this->editSFLastMousePos   ();
}
#endif

//! Get the Manipulator::_sfViewport field.
const SFViewportPtr *ManipulatorBase::getSFViewport(void) const
{
    return &_sfViewport;
}

SFBool *ManipulatorBase::editSFActive(void)
{
    editSField(ActiveFieldMask);

    return &_sfActive;
}

const SFBool *ManipulatorBase::getSFActive(void) const
{
    return &_sfActive;
}

#ifdef OSG_1_COMPAT
SFBool              *ManipulatorBase::getSFActive         (void)
{
    return this->editSFActive         ();
}
#endif

SFVec3f *ManipulatorBase::editSFLength(void)
{
    editSField(LengthFieldMask);

    return &_sfLength;
}

const SFVec3f *ManipulatorBase::getSFLength(void) const
{
    return &_sfLength;
}

#ifdef OSG_1_COMPAT
SFVec3f             *ManipulatorBase::getSFLength         (void)
{
    return this->editSFLength         ();
}
#endif

//! Get the Manipulator::_sfHandleXNode field.
const SFNodePtr *ManipulatorBase::getSFHandleXNode(void) const
{
    return &_sfHandleXNode;
}

//! Get the Manipulator::_sfHandleYNode field.
const SFNodePtr *ManipulatorBase::getSFHandleYNode(void) const
{
    return &_sfHandleYNode;
}

//! Get the Manipulator::_sfHandleZNode field.
const SFNodePtr *ManipulatorBase::getSFHandleZNode(void) const
{
    return &_sfHandleZNode;
}

//! Get the Manipulator::_sfTransXNode field.
const SFNodePtr *ManipulatorBase::getSFTransXNode(void) const
{
    return &_sfTransXNode;
}

//! Get the Manipulator::_sfTransYNode field.
const SFNodePtr *ManipulatorBase::getSFTransYNode(void) const
{
    return &_sfTransYNode;
}

//! Get the Manipulator::_sfTransZNode field.
const SFNodePtr *ManipulatorBase::getSFTransZNode(void) const
{
    return &_sfTransZNode;
}

//! Get the Manipulator::_sfMaterialX field.
const SFMaterialPtr *ManipulatorBase::getSFMaterialX(void) const
{
    return &_sfMaterialX;
}

//! Get the Manipulator::_sfMaterialY field.
const SFMaterialPtr *ManipulatorBase::getSFMaterialY(void) const
{
    return &_sfMaterialY;
}

//! Get the Manipulator::_sfMaterialZ field.
const SFMaterialPtr *ManipulatorBase::getSFMaterialZ(void) const
{
    return &_sfMaterialZ;
}

//! Get the Manipulator::_sfAxisLinesN field.
const SFNodePtr *ManipulatorBase::getSFAxisLinesN(void) const
{
    return &_sfAxisLinesN;
}


void ManipulatorBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == TargetFieldId)
    {
        static_cast<Manipulator *>(this)->setTarget(
            cast_dynamic<NodePtr>(pNewElement));
    }
    if(uiFieldId == ActiveSubHandleFieldId)
    {
        static_cast<Manipulator *>(this)->setActiveSubHandle(
            cast_dynamic<NodePtr>(pNewElement));
    }
    if(uiFieldId == ViewportFieldId)
    {
        static_cast<Manipulator *>(this)->setViewport(
            cast_dynamic<ViewportPtr>(pNewElement));
    }
    if(uiFieldId == HandleXNodeFieldId)
    {
        static_cast<Manipulator *>(this)->setHandleXNode(
            cast_dynamic<NodePtr>(pNewElement));
    }
    if(uiFieldId == HandleYNodeFieldId)
    {
        static_cast<Manipulator *>(this)->setHandleYNode(
            cast_dynamic<NodePtr>(pNewElement));
    }
    if(uiFieldId == HandleZNodeFieldId)
    {
        static_cast<Manipulator *>(this)->setHandleZNode(
            cast_dynamic<NodePtr>(pNewElement));
    }
    if(uiFieldId == TransXNodeFieldId)
    {
        static_cast<Manipulator *>(this)->setTransXNode(
            cast_dynamic<NodePtr>(pNewElement));
    }
    if(uiFieldId == TransYNodeFieldId)
    {
        static_cast<Manipulator *>(this)->setTransYNode(
            cast_dynamic<NodePtr>(pNewElement));
    }
    if(uiFieldId == TransZNodeFieldId)
    {
        static_cast<Manipulator *>(this)->setTransZNode(
            cast_dynamic<NodePtr>(pNewElement));
    }
    if(uiFieldId == MaterialXFieldId)
    {
        static_cast<Manipulator *>(this)->setMaterialX(
            cast_dynamic<MaterialPtr>(pNewElement));
    }
    if(uiFieldId == MaterialYFieldId)
    {
        static_cast<Manipulator *>(this)->setMaterialY(
            cast_dynamic<MaterialPtr>(pNewElement));
    }
    if(uiFieldId == MaterialZFieldId)
    {
        static_cast<Manipulator *>(this)->setMaterialZ(
            cast_dynamic<MaterialPtr>(pNewElement));
    }
    if(uiFieldId == AxisLinesNFieldId)
    {
        static_cast<Manipulator *>(this)->setAxisLinesN(
            cast_dynamic<NodePtr>(pNewElement));
    }
}

void ManipulatorBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

}

void ManipulatorBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

}

void ManipulatorBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

}

void ManipulatorBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

}

void ManipulatorBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

}

void ManipulatorBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == TargetFieldId)
    {
        static_cast<Manipulator *>(this)->setTarget(NullFC);
    }
    if(uiFieldId == ActiveSubHandleFieldId)
    {
        static_cast<Manipulator *>(this)->setActiveSubHandle(NullFC);
    }
    if(uiFieldId == ViewportFieldId)
    {
        static_cast<Manipulator *>(this)->setViewport(NullFC);
    }
    if(uiFieldId == HandleXNodeFieldId)
    {
        static_cast<Manipulator *>(this)->setHandleXNode(NullFC);
    }
    if(uiFieldId == HandleYNodeFieldId)
    {
        static_cast<Manipulator *>(this)->setHandleYNode(NullFC);
    }
    if(uiFieldId == HandleZNodeFieldId)
    {
        static_cast<Manipulator *>(this)->setHandleZNode(NullFC);
    }
    if(uiFieldId == TransXNodeFieldId)
    {
        static_cast<Manipulator *>(this)->setTransXNode(NullFC);
    }
    if(uiFieldId == TransYNodeFieldId)
    {
        static_cast<Manipulator *>(this)->setTransYNode(NullFC);
    }
    if(uiFieldId == TransZNodeFieldId)
    {
        static_cast<Manipulator *>(this)->setTransZNode(NullFC);
    }
    if(uiFieldId == MaterialXFieldId)
    {
        static_cast<Manipulator *>(this)->setMaterialX(NullFC);
    }
    if(uiFieldId == MaterialYFieldId)
    {
        static_cast<Manipulator *>(this)->setMaterialY(NullFC);
    }
    if(uiFieldId == MaterialZFieldId)
    {
        static_cast<Manipulator *>(this)->setMaterialZ(NullFC);
    }
    if(uiFieldId == AxisLinesNFieldId)
    {
        static_cast<Manipulator *>(this)->setAxisLinesN(NullFC);
    }
}



/*------------------------------ access -----------------------------------*/

UInt32 ManipulatorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (TargetFieldMask & whichField))
    {
        returnValue += _sfTarget.getBinSize();
    }
    if(FieldBits::NoField != (ActiveSubHandleFieldMask & whichField))
    {
        returnValue += _sfActiveSubHandle.getBinSize();
    }
    if(FieldBits::NoField != (LastMousePosFieldMask & whichField))
    {
        returnValue += _sfLastMousePos.getBinSize();
    }
    if(FieldBits::NoField != (ViewportFieldMask & whichField))
    {
        returnValue += _sfViewport.getBinSize();
    }
    if(FieldBits::NoField != (ActiveFieldMask & whichField))
    {
        returnValue += _sfActive.getBinSize();
    }
    if(FieldBits::NoField != (LengthFieldMask & whichField))
    {
        returnValue += _sfLength.getBinSize();
    }
    if(FieldBits::NoField != (HandleXNodeFieldMask & whichField))
    {
        returnValue += _sfHandleXNode.getBinSize();
    }
    if(FieldBits::NoField != (HandleYNodeFieldMask & whichField))
    {
        returnValue += _sfHandleYNode.getBinSize();
    }
    if(FieldBits::NoField != (HandleZNodeFieldMask & whichField))
    {
        returnValue += _sfHandleZNode.getBinSize();
    }
    if(FieldBits::NoField != (TransXNodeFieldMask & whichField))
    {
        returnValue += _sfTransXNode.getBinSize();
    }
    if(FieldBits::NoField != (TransYNodeFieldMask & whichField))
    {
        returnValue += _sfTransYNode.getBinSize();
    }
    if(FieldBits::NoField != (TransZNodeFieldMask & whichField))
    {
        returnValue += _sfTransZNode.getBinSize();
    }
    if(FieldBits::NoField != (MaterialXFieldMask & whichField))
    {
        returnValue += _sfMaterialX.getBinSize();
    }
    if(FieldBits::NoField != (MaterialYFieldMask & whichField))
    {
        returnValue += _sfMaterialY.getBinSize();
    }
    if(FieldBits::NoField != (MaterialZFieldMask & whichField))
    {
        returnValue += _sfMaterialZ.getBinSize();
    }
    if(FieldBits::NoField != (AxisLinesNFieldMask & whichField))
    {
        returnValue += _sfAxisLinesN.getBinSize();
    }

    return returnValue;
}

void ManipulatorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (TargetFieldMask & whichField))
    {
        _sfTarget.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ActiveSubHandleFieldMask & whichField))
    {
        _sfActiveSubHandle.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LastMousePosFieldMask & whichField))
    {
        _sfLastMousePos.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ViewportFieldMask & whichField))
    {
        _sfViewport.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ActiveFieldMask & whichField))
    {
        _sfActive.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LengthFieldMask & whichField))
    {
        _sfLength.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HandleXNodeFieldMask & whichField))
    {
        _sfHandleXNode.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HandleYNodeFieldMask & whichField))
    {
        _sfHandleYNode.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HandleZNodeFieldMask & whichField))
    {
        _sfHandleZNode.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TransXNodeFieldMask & whichField))
    {
        _sfTransXNode.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TransYNodeFieldMask & whichField))
    {
        _sfTransYNode.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TransZNodeFieldMask & whichField))
    {
        _sfTransZNode.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MaterialXFieldMask & whichField))
    {
        _sfMaterialX.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MaterialYFieldMask & whichField))
    {
        _sfMaterialY.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MaterialZFieldMask & whichField))
    {
        _sfMaterialZ.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AxisLinesNFieldMask & whichField))
    {
        _sfAxisLinesN.copyToBin(pMem);
    }
}

void ManipulatorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (TargetFieldMask & whichField))
    {
        _sfTarget.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ActiveSubHandleFieldMask & whichField))
    {
        _sfActiveSubHandle.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LastMousePosFieldMask & whichField))
    {
        _sfLastMousePos.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ViewportFieldMask & whichField))
    {
        _sfViewport.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ActiveFieldMask & whichField))
    {
        _sfActive.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LengthFieldMask & whichField))
    {
        _sfLength.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HandleXNodeFieldMask & whichField))
    {
        _sfHandleXNode.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HandleYNodeFieldMask & whichField))
    {
        _sfHandleYNode.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HandleZNodeFieldMask & whichField))
    {
        _sfHandleZNode.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TransXNodeFieldMask & whichField))
    {
        _sfTransXNode.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TransYNodeFieldMask & whichField))
    {
        _sfTransYNode.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TransZNodeFieldMask & whichField))
    {
        _sfTransZNode.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MaterialXFieldMask & whichField))
    {
        _sfMaterialX.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MaterialYFieldMask & whichField))
    {
        _sfMaterialY.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MaterialZFieldMask & whichField))
    {
        _sfMaterialZ.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AxisLinesNFieldMask & whichField))
    {
        _sfAxisLinesN.copyFromBin(pMem);
    }
}



/*------------------------- constructors ----------------------------------*/

ManipulatorBase::ManipulatorBase(void) :
    Inherited(),
    _sfTarget                 (),
    _sfActiveSubHandle        (),
    _sfLastMousePos           (),
    _sfViewport               (ViewportPtr(NullFC)),
    _sfActive                 (),
    _sfLength                 (Vec3f(1,1,1)),
    _sfHandleXNode            (),
    _sfHandleYNode            (),
    _sfHandleZNode            (),
    _sfTransXNode             (),
    _sfTransYNode             (),
    _sfTransZNode             (),
    _sfMaterialX              (),
    _sfMaterialY              (),
    _sfMaterialZ              (),
    _sfAxisLinesN             ()
{
}

ManipulatorBase::ManipulatorBase(const ManipulatorBase &source) :
    Inherited(source),
    _sfTarget                 (),
    _sfActiveSubHandle        (),
    _sfLastMousePos           (source._sfLastMousePos           ),
    _sfViewport               (),
    _sfActive                 (source._sfActive                 ),
    _sfLength                 (source._sfLength                 ),
    _sfHandleXNode            (),
    _sfHandleYNode            (),
    _sfHandleZNode            (),
    _sfTransXNode             (),
    _sfTransYNode             (),
    _sfTransZNode             (),
    _sfMaterialX              (),
    _sfMaterialY              (),
    _sfMaterialZ              (),
    _sfAxisLinesN             ()
{
}

/*-------------------------- destructors ----------------------------------*/

ManipulatorBase::~ManipulatorBase(void)
{
}

void ManipulatorBase::onCreate(const Manipulator *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setTarget(source->getTarget());

        this->setActiveSubHandle(source->getActiveSubHandle());

        this->setViewport(source->getViewport());

        this->setHandleXNode(source->getHandleXNode());

        this->setHandleYNode(source->getHandleYNode());

        this->setHandleZNode(source->getHandleZNode());

        this->setTransXNode(source->getTransXNode());

        this->setTransYNode(source->getTransYNode());

        this->setTransZNode(source->getTransZNode());

        this->setMaterialX(source->getMaterialX());

        this->setMaterialY(source->getMaterialY());

        this->setMaterialZ(source->getMaterialZ());

        this->setAxisLinesN(source->getAxisLinesN());
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void ManipulatorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<ManipulatorBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void ManipulatorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ManipulatorBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void ManipulatorBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


void ManipulatorBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<Manipulator *>(this)->setTarget(NullFC);

    static_cast<Manipulator *>(this)->setActiveSubHandle(NullFC);

    static_cast<Manipulator *>(this)->setViewport(NullFC);

    static_cast<Manipulator *>(this)->setHandleXNode(NullFC);

    static_cast<Manipulator *>(this)->setHandleYNode(NullFC);

    static_cast<Manipulator *>(this)->setHandleZNode(NullFC);

    static_cast<Manipulator *>(this)->setTransXNode(NullFC);

    static_cast<Manipulator *>(this)->setTransYNode(NullFC);

    static_cast<Manipulator *>(this)->setTransZNode(NullFC);

    static_cast<Manipulator *>(this)->setMaterialX(NullFC);

    static_cast<Manipulator *>(this)->setMaterialY(NullFC);

    static_cast<Manipulator *>(this)->setMaterialZ(NullFC);

    static_cast<Manipulator *>(this)->setAxisLinesN(NullFC);
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ManipulatorPtr>::_type("ManipulatorPtr", "TransformPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ManipulatorPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, ManipulatorPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, ManipulatorPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE

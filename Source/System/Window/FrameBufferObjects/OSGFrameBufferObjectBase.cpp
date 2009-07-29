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
 **     class FrameBufferObject!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include "OSGFrameBufferAttachment.h"   // ColorAttachments Class

#include "OSGFrameBufferObjectBase.h"
#include "OSGFrameBufferObject.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FrameBufferObject
    Framebuffer object. Encapsulates FBOs as defined by the EXT_framebuffer_object
    OpenGL extension.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var GLenum          FrameBufferObjectBase::_sfGLId
    The OpenGL texture id for this frame buffer object.
*/

/*! \var FrameBufferAttachment * FrameBufferObjectBase::_mfColorAttachments
    GL_COLOR_ATTACHMENTX_EXT slots, position defines X. 
    This defines the target buffers for color attachments.
*/

/*! \var GLenum          FrameBufferObjectBase::_mfDrawBuffers
    The target draw buffers.  ex: GL_COLOR_ATTACHMENT0_EXT.
    These are used to call DrawBuffers to tell OpenGL what targets
    to render into.
*/

/*! \var FrameBufferAttachment * FrameBufferObjectBase::_sfDepthAttachment
    GL_DEPTH_ATTACHMENT_EXT slot. The target for depth values.
*/

/*! \var FrameBufferAttachment * FrameBufferObjectBase::_sfStencilAttachment
    GL_STENCIL_ATTACHMENT_EXT slot.
*/

/*! \var UInt16          FrameBufferObjectBase::_sfWidth
    
*/

/*! \var UInt16          FrameBufferObjectBase::_sfHeight
    
*/

/*! \var bool            FrameBufferObjectBase::_sfPostProcessOnDeactivate
    Enable to check and generate mipmap level or copy the texture buffer
    result back to the image
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<FrameBufferObject *>::_type("FrameBufferObjectPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(FrameBufferObject *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           FrameBufferObject *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           FrameBufferObject *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void FrameBufferObjectBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "GLId",
        "The OpenGL texture id for this frame buffer object.\n",
        GLIdFieldId, GLIdFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&FrameBufferObject::editHandleGLId),
        static_cast<FieldGetMethodSig >(&FrameBufferObject::getHandleGLId));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecFrameBufferAttachmentPtr::Description(
        MFUnrecFrameBufferAttachmentPtr::getClassType(),
        "colorAttachments",
        "GL_COLOR_ATTACHMENTX_EXT slots, position defines X. \n"
        "This defines the target buffers for color attachments.\n",
        ColorAttachmentsFieldId, ColorAttachmentsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FrameBufferObject::editHandleColorAttachments),
        static_cast<FieldGetMethodSig >(&FrameBufferObject::getHandleColorAttachments));

    oType.addInitialDesc(pDesc);

    pDesc = new MFGLenum::Description(
        MFGLenum::getClassType(),
        "drawBuffers",
        "The target draw buffers.  ex: GL_COLOR_ATTACHMENT0_EXT.\n"
        "These are used to call DrawBuffers to tell OpenGL what targets\n"
        "to render into.\n",
        DrawBuffersFieldId, DrawBuffersFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FrameBufferObject::editHandleDrawBuffers),
        static_cast<FieldGetMethodSig >(&FrameBufferObject::getHandleDrawBuffers));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecFrameBufferAttachmentPtr::Description(
        SFUnrecFrameBufferAttachmentPtr::getClassType(),
        "depthAttachment",
        "GL_DEPTH_ATTACHMENT_EXT slot. The target for depth values.\n",
        DepthAttachmentFieldId, DepthAttachmentFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FrameBufferObject::editHandleDepthAttachment),
        static_cast<FieldGetMethodSig >(&FrameBufferObject::getHandleDepthAttachment));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecFrameBufferAttachmentPtr::Description(
        SFUnrecFrameBufferAttachmentPtr::getClassType(),
        "stencilAttachment",
        "GL_STENCIL_ATTACHMENT_EXT slot.\n",
        StencilAttachmentFieldId, StencilAttachmentFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FrameBufferObject::editHandleStencilAttachment),
        static_cast<FieldGetMethodSig >(&FrameBufferObject::getHandleStencilAttachment));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "width",
        "",
        WidthFieldId, WidthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FrameBufferObject::editHandleWidth),
        static_cast<FieldGetMethodSig >(&FrameBufferObject::getHandleWidth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "height",
        "",
        HeightFieldId, HeightFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FrameBufferObject::editHandleHeight),
        static_cast<FieldGetMethodSig >(&FrameBufferObject::getHandleHeight));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "postProcessOnDeactivate",
        "Enable to check and generate mipmap level or copy the texture buffer\n"
        "result back to the image\n",
        PostProcessOnDeactivateFieldId, PostProcessOnDeactivateFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FrameBufferObject::editHandlePostProcessOnDeactivate),
        static_cast<FieldGetMethodSig >(&FrameBufferObject::getHandlePostProcessOnDeactivate));

    oType.addInitialDesc(pDesc);
}


FrameBufferObjectBase::TypeObject FrameBufferObjectBase::_type(
    FrameBufferObjectBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&FrameBufferObjectBase::createEmptyLocal),
    FrameBufferObject::initMethod,
    FrameBufferObject::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&FrameBufferObject::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "        name=\"FrameBufferObject\"\n"
    "        parent=\"AttachmentContainer\"\n"
    "        library=\"System\"\n"
    "        pointerfieldtypes=\"both\"\n"
    "        structure=\"concrete\"\n"
    "        systemcomponent=\"true\"\n"
    "        parentsystemcomponent=\"true\"\n"
    "        decoratable=\"false\"\n"
    ">\n"
    "Framebuffer object. Encapsulates FBOs as defined by the EXT_framebuffer_object\n"
    "OpenGL extension.\n"
    "        <Field\n"
    "                name=\"GLId\"\n"
    "                type=\"GLenum\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"internal\"\n"
    "                access=\"public\"\n"
    "                defaultValue=\"0\"\n"
    "                fieldFlags=\"FClusterLocal\"\n"
    "        >\n"
    "        The OpenGL texture id for this frame buffer object.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"colorAttachments\"\n"
    "                type=\"FrameBufferAttachmentPtr\"\n"
    "                cardinality=\"multi\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "        >\n"
    "        GL_COLOR_ATTACHMENTX_EXT slots, position defines X. \n"
    "        This defines the target buffers for color attachments.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"drawBuffers\"\n"
    "                type=\"GLenum\"\n"
    "                cardinality=\"multi\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "                defaultValue=\"0\"\n"
    "        >\n"
    "        The target draw buffers.  ex: GL_COLOR_ATTACHMENT0_EXT.\n"
    "        These are used to call DrawBuffers to tell OpenGL what targets\n"
    "        to render into.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"depthAttachment\"\n"
    "                type=\"FrameBufferAttachmentPtr\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "        >\n"
    "        GL_DEPTH_ATTACHMENT_EXT slot. The target for depth values.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"stencilAttachment\"\n"
    "                type=\"FrameBufferAttachmentPtr\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "        >\n"
    "        GL_STENCIL_ATTACHMENT_EXT slot.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"width\"\n"
    "                type=\"UInt16\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "                defaultValue=\"0\"\n"
    "        >\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"height\"\n"
    "                type=\"UInt16\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "                defaultValue=\"0\"\n"
    "        >\n"
    "        </Field>\n"
    "\n"
    "        <Field\n"
    "                name=\"postProcessOnDeactivate\"\n"
    "                type=\"bool\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "                defaultValue=\"false\"\n"
    "        >\n"
    "        Enable to check and generate mipmap level or copy the texture buffer\n"
    "        result back to the image\n"
    "        </Field>\n"
    "</FieldContainer>\n",
    "Framebuffer object. Encapsulates FBOs as defined by the EXT_framebuffer_object\n"
    "OpenGL extension.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &FrameBufferObjectBase::getType(void)
{
    return _type;
}

const FieldContainerType &FrameBufferObjectBase::getType(void) const
{
    return _type;
}

UInt32 FrameBufferObjectBase::getContainerSize(void) const
{
    return sizeof(FrameBufferObject);
}

/*------------------------- decorator get ------------------------------*/


SFGLenum *FrameBufferObjectBase::editSFGLId(void)
{
    editSField(GLIdFieldMask);

    return &_sfGLId;
}

const SFGLenum *FrameBufferObjectBase::getSFGLId(void) const
{
    return &_sfGLId;
}


//! Get the FrameBufferObject::_mfColorAttachments field.
const MFUnrecFrameBufferAttachmentPtr *FrameBufferObjectBase::getMFColorAttachments(void) const
{
    return &_mfColorAttachments;
}

MFUnrecFrameBufferAttachmentPtr *FrameBufferObjectBase::editMFColorAttachments(void)
{
    editMField(ColorAttachmentsFieldMask, _mfColorAttachments);

    return &_mfColorAttachments;
}

MFGLenum *FrameBufferObjectBase::editMFDrawBuffers(void)
{
    editMField(DrawBuffersFieldMask, _mfDrawBuffers);

    return &_mfDrawBuffers;
}

const MFGLenum *FrameBufferObjectBase::getMFDrawBuffers(void) const
{
    return &_mfDrawBuffers;
}


//! Get the FrameBufferObject::_sfDepthAttachment field.
const SFUnrecFrameBufferAttachmentPtr *FrameBufferObjectBase::getSFDepthAttachment(void) const
{
    return &_sfDepthAttachment;
}

SFUnrecFrameBufferAttachmentPtr *FrameBufferObjectBase::editSFDepthAttachment(void)
{
    editSField(DepthAttachmentFieldMask);

    return &_sfDepthAttachment;
}

//! Get the FrameBufferObject::_sfStencilAttachment field.
const SFUnrecFrameBufferAttachmentPtr *FrameBufferObjectBase::getSFStencilAttachment(void) const
{
    return &_sfStencilAttachment;
}

SFUnrecFrameBufferAttachmentPtr *FrameBufferObjectBase::editSFStencilAttachment(void)
{
    editSField(StencilAttachmentFieldMask);

    return &_sfStencilAttachment;
}

SFUInt16 *FrameBufferObjectBase::editSFWidth(void)
{
    editSField(WidthFieldMask);

    return &_sfWidth;
}

const SFUInt16 *FrameBufferObjectBase::getSFWidth(void) const
{
    return &_sfWidth;
}


SFUInt16 *FrameBufferObjectBase::editSFHeight(void)
{
    editSField(HeightFieldMask);

    return &_sfHeight;
}

const SFUInt16 *FrameBufferObjectBase::getSFHeight(void) const
{
    return &_sfHeight;
}


SFBool *FrameBufferObjectBase::editSFPostProcessOnDeactivate(void)
{
    editSField(PostProcessOnDeactivateFieldMask);

    return &_sfPostProcessOnDeactivate;
}

const SFBool *FrameBufferObjectBase::getSFPostProcessOnDeactivate(void) const
{
    return &_sfPostProcessOnDeactivate;
}




void FrameBufferObjectBase::pushToColorAttachments(FrameBufferAttachment * const value)
{
    editMField(ColorAttachmentsFieldMask, _mfColorAttachments);

    _mfColorAttachments.push_back(value);
}

void FrameBufferObjectBase::assignColorAttachments(const MFUnrecFrameBufferAttachmentPtr &value)
{
    MFUnrecFrameBufferAttachmentPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecFrameBufferAttachmentPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<FrameBufferObject *>(this)->clearColorAttachments();

    while(elemIt != elemEnd)
    {
        this->pushToColorAttachments(*elemIt);

        ++elemIt;
    }
}

void FrameBufferObjectBase::removeFromColorAttachments(UInt32 uiIndex)
{
    if(uiIndex < _mfColorAttachments.size())
    {
        editMField(ColorAttachmentsFieldMask, _mfColorAttachments);

        _mfColorAttachments.erase(uiIndex);
    }
}

void FrameBufferObjectBase::removeObjFromColorAttachments(FrameBufferAttachment * const value)
{
    Int32 iElemIdx = _mfColorAttachments.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ColorAttachmentsFieldMask, _mfColorAttachments);

        _mfColorAttachments.erase(iElemIdx);
    }
}
void FrameBufferObjectBase::clearColorAttachments(void)
{
    editMField(ColorAttachmentsFieldMask, _mfColorAttachments);


    _mfColorAttachments.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 FrameBufferObjectBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        returnValue += _sfGLId.getBinSize();
    }
    if(FieldBits::NoField != (ColorAttachmentsFieldMask & whichField))
    {
        returnValue += _mfColorAttachments.getBinSize();
    }
    if(FieldBits::NoField != (DrawBuffersFieldMask & whichField))
    {
        returnValue += _mfDrawBuffers.getBinSize();
    }
    if(FieldBits::NoField != (DepthAttachmentFieldMask & whichField))
    {
        returnValue += _sfDepthAttachment.getBinSize();
    }
    if(FieldBits::NoField != (StencilAttachmentFieldMask & whichField))
    {
        returnValue += _sfStencilAttachment.getBinSize();
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        returnValue += _sfWidth.getBinSize();
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        returnValue += _sfHeight.getBinSize();
    }
    if(FieldBits::NoField != (PostProcessOnDeactivateFieldMask & whichField))
    {
        returnValue += _sfPostProcessOnDeactivate.getBinSize();
    }

    return returnValue;
}

void FrameBufferObjectBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ColorAttachmentsFieldMask & whichField))
    {
        _mfColorAttachments.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DrawBuffersFieldMask & whichField))
    {
        _mfDrawBuffers.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DepthAttachmentFieldMask & whichField))
    {
        _sfDepthAttachment.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StencilAttachmentFieldMask & whichField))
    {
        _sfStencilAttachment.copyToBin(pMem);
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PostProcessOnDeactivateFieldMask & whichField))
    {
        _sfPostProcessOnDeactivate.copyToBin(pMem);
    }
}

void FrameBufferObjectBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ColorAttachmentsFieldMask & whichField))
    {
        _mfColorAttachments.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DrawBuffersFieldMask & whichField))
    {
        _mfDrawBuffers.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DepthAttachmentFieldMask & whichField))
    {
        _sfDepthAttachment.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StencilAttachmentFieldMask & whichField))
    {
        _sfStencilAttachment.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PostProcessOnDeactivateFieldMask & whichField))
    {
        _sfPostProcessOnDeactivate.copyFromBin(pMem);
    }
}

//! create a new instance of the class
FrameBufferObjectTransitPtr FrameBufferObjectBase::createLocal(BitVector bFlags)
{
    FrameBufferObjectTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<FrameBufferObject>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
FrameBufferObjectTransitPtr FrameBufferObjectBase::createDependent(BitVector bFlags)
{
    FrameBufferObjectTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<FrameBufferObject>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
FrameBufferObjectTransitPtr FrameBufferObjectBase::create(void)
{
    FrameBufferObjectTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<FrameBufferObject>(tmpPtr);
    }

    return fc;
}

FrameBufferObject *FrameBufferObjectBase::createEmptyLocal(BitVector bFlags)
{
    FrameBufferObject *returnValue;

    newPtr<FrameBufferObject>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
FrameBufferObject *FrameBufferObjectBase::createEmpty(void)
{
    FrameBufferObject *returnValue;

    newPtr<FrameBufferObject>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr FrameBufferObjectBase::shallowCopyLocal(
    BitVector bFlags) const
{
    FrameBufferObject *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FrameBufferObject *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr FrameBufferObjectBase::shallowCopyDependent(
    BitVector bFlags) const
{
    FrameBufferObject *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FrameBufferObject *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr FrameBufferObjectBase::shallowCopy(void) const
{
    FrameBufferObject *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const FrameBufferObject *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

FrameBufferObjectBase::FrameBufferObjectBase(void) :
    Inherited(),
    _sfGLId                   (GLenum(0)),
    _mfColorAttachments       (),
    _mfDrawBuffers            (GLenum(0)),
    _sfDepthAttachment        (NULL),
    _sfStencilAttachment      (NULL),
    _sfWidth                  (UInt16(0)),
    _sfHeight                 (UInt16(0)),
    _sfPostProcessOnDeactivate(bool(false))
{
}

FrameBufferObjectBase::FrameBufferObjectBase(const FrameBufferObjectBase &source) :
    Inherited(source),
    _sfGLId                   (source._sfGLId                   ),
    _mfColorAttachments       (),
    _mfDrawBuffers            (source._mfDrawBuffers            ),
    _sfDepthAttachment        (NULL),
    _sfStencilAttachment      (NULL),
    _sfWidth                  (source._sfWidth                  ),
    _sfHeight                 (source._sfHeight                 ),
    _sfPostProcessOnDeactivate(source._sfPostProcessOnDeactivate)
{
}


/*-------------------------- destructors ----------------------------------*/

FrameBufferObjectBase::~FrameBufferObjectBase(void)
{
}

void FrameBufferObjectBase::onCreate(const FrameBufferObject *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        FrameBufferObject *pThis = static_cast<FrameBufferObject *>(this);

        MFUnrecFrameBufferAttachmentPtr::const_iterator ColorAttachmentsIt  =
            source->_mfColorAttachments.begin();
        MFUnrecFrameBufferAttachmentPtr::const_iterator ColorAttachmentsEnd =
            source->_mfColorAttachments.end  ();

        while(ColorAttachmentsIt != ColorAttachmentsEnd)
        {
            pThis->pushToColorAttachments(*ColorAttachmentsIt);

            ++ColorAttachmentsIt;
        }

        pThis->setDepthAttachment(source->getDepthAttachment());

        pThis->setStencilAttachment(source->getStencilAttachment());
    }
}

GetFieldHandlePtr FrameBufferObjectBase::getHandleGLId            (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfGLId,
             this->getType().getFieldDesc(GLIdFieldId),
             const_cast<FrameBufferObjectBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FrameBufferObjectBase::editHandleGLId           (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfGLId,
             this->getType().getFieldDesc(GLIdFieldId),
             this));


    editSField(GLIdFieldMask);

    return returnValue;
}

GetFieldHandlePtr FrameBufferObjectBase::getHandleColorAttachments (void) const
{
    MFUnrecFrameBufferAttachmentPtr::GetHandlePtr returnValue(
        new  MFUnrecFrameBufferAttachmentPtr::GetHandle(
             &_mfColorAttachments,
             this->getType().getFieldDesc(ColorAttachmentsFieldId),
             const_cast<FrameBufferObjectBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FrameBufferObjectBase::editHandleColorAttachments(void)
{
    MFUnrecFrameBufferAttachmentPtr::EditHandlePtr returnValue(
        new  MFUnrecFrameBufferAttachmentPtr::EditHandle(
             &_mfColorAttachments,
             this->getType().getFieldDesc(ColorAttachmentsFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&FrameBufferObject::pushToColorAttachments,
                    static_cast<FrameBufferObject *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&FrameBufferObject::removeFromColorAttachments,
                    static_cast<FrameBufferObject *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&FrameBufferObject::removeObjFromColorAttachments,
                    static_cast<FrameBufferObject *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&FrameBufferObject::clearColorAttachments,
                    static_cast<FrameBufferObject *>(this)));

    editMField(ColorAttachmentsFieldMask, _mfColorAttachments);

    return returnValue;
}

GetFieldHandlePtr FrameBufferObjectBase::getHandleDrawBuffers     (void) const
{
    MFGLenum::GetHandlePtr returnValue(
        new  MFGLenum::GetHandle(
             &_mfDrawBuffers,
             this->getType().getFieldDesc(DrawBuffersFieldId),
             const_cast<FrameBufferObjectBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FrameBufferObjectBase::editHandleDrawBuffers    (void)
{
    MFGLenum::EditHandlePtr returnValue(
        new  MFGLenum::EditHandle(
             &_mfDrawBuffers,
             this->getType().getFieldDesc(DrawBuffersFieldId),
             this));


    editMField(DrawBuffersFieldMask, _mfDrawBuffers);

    return returnValue;
}

GetFieldHandlePtr FrameBufferObjectBase::getHandleDepthAttachment (void) const
{
    SFUnrecFrameBufferAttachmentPtr::GetHandlePtr returnValue(
        new  SFUnrecFrameBufferAttachmentPtr::GetHandle(
             &_sfDepthAttachment,
             this->getType().getFieldDesc(DepthAttachmentFieldId),
             const_cast<FrameBufferObjectBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FrameBufferObjectBase::editHandleDepthAttachment(void)
{
    SFUnrecFrameBufferAttachmentPtr::EditHandlePtr returnValue(
        new  SFUnrecFrameBufferAttachmentPtr::EditHandle(
             &_sfDepthAttachment,
             this->getType().getFieldDesc(DepthAttachmentFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&FrameBufferObject::setDepthAttachment,
                    static_cast<FrameBufferObject *>(this), _1));

    editSField(DepthAttachmentFieldMask);

    return returnValue;
}

GetFieldHandlePtr FrameBufferObjectBase::getHandleStencilAttachment (void) const
{
    SFUnrecFrameBufferAttachmentPtr::GetHandlePtr returnValue(
        new  SFUnrecFrameBufferAttachmentPtr::GetHandle(
             &_sfStencilAttachment,
             this->getType().getFieldDesc(StencilAttachmentFieldId),
             const_cast<FrameBufferObjectBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FrameBufferObjectBase::editHandleStencilAttachment(void)
{
    SFUnrecFrameBufferAttachmentPtr::EditHandlePtr returnValue(
        new  SFUnrecFrameBufferAttachmentPtr::EditHandle(
             &_sfStencilAttachment,
             this->getType().getFieldDesc(StencilAttachmentFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&FrameBufferObject::setStencilAttachment,
                    static_cast<FrameBufferObject *>(this), _1));

    editSField(StencilAttachmentFieldMask);

    return returnValue;
}

GetFieldHandlePtr FrameBufferObjectBase::getHandleWidth           (void) const
{
    SFUInt16::GetHandlePtr returnValue(
        new  SFUInt16::GetHandle(
             &_sfWidth,
             this->getType().getFieldDesc(WidthFieldId),
             const_cast<FrameBufferObjectBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FrameBufferObjectBase::editHandleWidth          (void)
{
    SFUInt16::EditHandlePtr returnValue(
        new  SFUInt16::EditHandle(
             &_sfWidth,
             this->getType().getFieldDesc(WidthFieldId),
             this));


    editSField(WidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr FrameBufferObjectBase::getHandleHeight          (void) const
{
    SFUInt16::GetHandlePtr returnValue(
        new  SFUInt16::GetHandle(
             &_sfHeight,
             this->getType().getFieldDesc(HeightFieldId),
             const_cast<FrameBufferObjectBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FrameBufferObjectBase::editHandleHeight         (void)
{
    SFUInt16::EditHandlePtr returnValue(
        new  SFUInt16::EditHandle(
             &_sfHeight,
             this->getType().getFieldDesc(HeightFieldId),
             this));


    editSField(HeightFieldMask);

    return returnValue;
}

GetFieldHandlePtr FrameBufferObjectBase::getHandlePostProcessOnDeactivate (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfPostProcessOnDeactivate,
             this->getType().getFieldDesc(PostProcessOnDeactivateFieldId),
             const_cast<FrameBufferObjectBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FrameBufferObjectBase::editHandlePostProcessOnDeactivate(void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfPostProcessOnDeactivate,
             this->getType().getFieldDesc(PostProcessOnDeactivateFieldId),
             this));


    editSField(PostProcessOnDeactivateFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void FrameBufferObjectBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    FrameBufferObject *pThis = static_cast<FrameBufferObject *>(this);

    pThis->execSync(static_cast<FrameBufferObject *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *FrameBufferObjectBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    FrameBufferObject *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const FrameBufferObject *>(pRefAspect),
                  dynamic_cast<const FrameBufferObject *>(this));

    return returnValue;
}
#endif

void FrameBufferObjectBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<FrameBufferObject *>(this)->clearColorAttachments();

    static_cast<FrameBufferObject *>(this)->setDepthAttachment(NULL);

    static_cast<FrameBufferObject *>(this)->setStencilAttachment(NULL);

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfDrawBuffers.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE

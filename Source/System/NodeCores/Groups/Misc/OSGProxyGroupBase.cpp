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
 **     class ProxyGroup!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include "OSGNode.h"                    // Root Class

#include "OSGProxyGroupBase.h"
#include "OSGProxyGroup.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ProxyGroup
    This group is used for delayed loading. If enabled the child
    nodes are loaded in a second thread. Until the load is finished
    the child nodes of this group are rendered. This could be used
    to show a proxy object. If concurrentLoad is false, then loading
    is done during the first frame. This is the behaviour of a simple
    inline.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var bool            ProxyGroupBase::_sfEnabled
    
*/

/*! \var std::string     ProxyGroupBase::_sfUrl
    
*/

/*! \var Node *          ProxyGroupBase::_sfRoot
    
*/

/*! \var UInt32          ProxyGroupBase::_sfState
    
*/

/*! \var bool            ProxyGroupBase::_sfConcurrentLoad
    
*/

/*! \var BoxVolume       ProxyGroupBase::_sfVolume
    
*/

/*! \var UInt32          ProxyGroupBase::_sfIndices
    
*/

/*! \var UInt32          ProxyGroupBase::_sfTriangles
    
*/

/*! \var UInt32          ProxyGroupBase::_sfPositions
    
*/

/*! \var UInt32          ProxyGroupBase::_sfGeometries
    
*/

/*! \var std::string     ProxyGroupBase::_sfAbsoluteUrl
    
*/

/*! \var UInt8           ProxyGroupBase::_mfInline
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ProxyGroup *>::_type("ProxyGroupPtr", "GroupPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ProxyGroup *)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ProxyGroupBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "enabled",
        "",
        EnabledFieldId, EnabledFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ProxyGroup::editHandleEnabled),
        static_cast<FieldGetMethodSig >(&ProxyGroup::getHandleEnabled));

    oType.addInitialDesc(pDesc);

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "url",
        "",
        UrlFieldId, UrlFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ProxyGroup::editHandleUrl),
        static_cast<FieldGetMethodSig >(&ProxyGroup::getHandleUrl));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecNodePtr::Description(
        SFUnrecNodePtr::getClassType(),
        "root",
        "",
        RootFieldId, RootFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ProxyGroup::editHandleRoot),
        static_cast<FieldGetMethodSig >(&ProxyGroup::getHandleRoot));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "state",
        "",
        StateFieldId, StateFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ProxyGroup::editHandleState),
        static_cast<FieldGetMethodSig >(&ProxyGroup::getHandleState));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "concurrentLoad",
        "",
        ConcurrentLoadFieldId, ConcurrentLoadFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ProxyGroup::editHandleConcurrentLoad),
        static_cast<FieldGetMethodSig >(&ProxyGroup::getHandleConcurrentLoad));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBoxVolume::Description(
        SFBoxVolume::getClassType(),
        "volume",
        "",
        VolumeFieldId, VolumeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ProxyGroup::editHandleVolume),
        static_cast<FieldGetMethodSig >(&ProxyGroup::getHandleVolume));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "indices",
        "",
        IndicesFieldId, IndicesFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ProxyGroup::editHandleIndices),
        static_cast<FieldGetMethodSig >(&ProxyGroup::getHandleIndices));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "triangles",
        "",
        TrianglesFieldId, TrianglesFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ProxyGroup::editHandleTriangles),
        static_cast<FieldGetMethodSig >(&ProxyGroup::getHandleTriangles));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "positions",
        "",
        PositionsFieldId, PositionsFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ProxyGroup::editHandlePositions),
        static_cast<FieldGetMethodSig >(&ProxyGroup::getHandlePositions));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "geometries",
        "",
        GeometriesFieldId, GeometriesFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ProxyGroup::editHandleGeometries),
        static_cast<FieldGetMethodSig >(&ProxyGroup::getHandleGeometries));

    oType.addInitialDesc(pDesc);

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "absoluteUrl",
        "",
        AbsoluteUrlFieldId, AbsoluteUrlFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ProxyGroup::editHandleAbsoluteUrl),
        static_cast<FieldGetMethodSig >(&ProxyGroup::getHandleAbsoluteUrl));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUInt8::Description(
        MFUInt8::getClassType(),
        "inline",
        "",
        InlineFieldId, InlineFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ProxyGroup::editHandleInline),
        static_cast<FieldGetMethodSig >(&ProxyGroup::getHandleInline));

    oType.addInitialDesc(pDesc);
}


ProxyGroupBase::TypeObject ProxyGroupBase::_type(
    ProxyGroupBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ProxyGroupBase::createEmptyLocal),
    ProxyGroup::initMethod,
    ProxyGroup::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ProxyGroup::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ProxyGroup\"\n"
    "\tparent=\"Group\"\n"
    "\tlibrary=\"Group\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "This group is used for delayed loading. If enabled the child\n"
    "nodes are loaded in a second thread. Until the load is finished\n"
    "the child nodes of this group are rendered. This could be used\n"
    "to show a proxy object. If concurrentLoad is false, then loading\n"
    "is done during the first frame. This is the behaviour of a simple\n"
    "inline.\n"
    "\t<Field\n"
    "\t\tname=\"enabled\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"url\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"root\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"state\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"concurrentLoad\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"volume\"\n"
    "\t\ttype=\"BoxVolume\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"indices\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"triangles\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"positions\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"geometries\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"absoluteUrl\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"inline\"\n"
    "\t\ttype=\"UInt8\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "This group is used for delayed loading. If enabled the child\n"
    "nodes are loaded in a second thread. Until the load is finished\n"
    "the child nodes of this group are rendered. This could be used\n"
    "to show a proxy object. If concurrentLoad is false, then loading\n"
    "is done during the first frame. This is the behaviour of a simple\n"
    "inline.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ProxyGroupBase::getType(void)
{
    return _type;
}

const FieldContainerType &ProxyGroupBase::getType(void) const
{
    return _type;
}

UInt32 ProxyGroupBase::getContainerSize(void) const
{
    return sizeof(ProxyGroup);
}

/*------------------------- decorator get ------------------------------*/


SFBool *ProxyGroupBase::editSFEnabled(void)
{
    editSField(EnabledFieldMask);

    return &_sfEnabled;
}

const SFBool *ProxyGroupBase::getSFEnabled(void) const
{
    return &_sfEnabled;
}


SFString *ProxyGroupBase::editSFUrl(void)
{
    editSField(UrlFieldMask);

    return &_sfUrl;
}

const SFString *ProxyGroupBase::getSFUrl(void) const
{
    return &_sfUrl;
}


//! Get the ProxyGroup::_sfRoot field.
const SFUnrecNodePtr *ProxyGroupBase::getSFRoot(void) const
{
    return &_sfRoot;
}

SFUnrecNodePtr      *ProxyGroupBase::editSFRoot           (void)
{
    editSField(RootFieldMask);

    return &_sfRoot;
}

SFUInt32 *ProxyGroupBase::editSFState(void)
{
    editSField(StateFieldMask);

    return &_sfState;
}

const SFUInt32 *ProxyGroupBase::getSFState(void) const
{
    return &_sfState;
}


SFBool *ProxyGroupBase::editSFConcurrentLoad(void)
{
    editSField(ConcurrentLoadFieldMask);

    return &_sfConcurrentLoad;
}

const SFBool *ProxyGroupBase::getSFConcurrentLoad(void) const
{
    return &_sfConcurrentLoad;
}


SFBoxVolume *ProxyGroupBase::editSFVolume(void)
{
    editSField(VolumeFieldMask);

    return &_sfVolume;
}

const SFBoxVolume *ProxyGroupBase::getSFVolume(void) const
{
    return &_sfVolume;
}


SFUInt32 *ProxyGroupBase::editSFIndices(void)
{
    editSField(IndicesFieldMask);

    return &_sfIndices;
}

const SFUInt32 *ProxyGroupBase::getSFIndices(void) const
{
    return &_sfIndices;
}


SFUInt32 *ProxyGroupBase::editSFTriangles(void)
{
    editSField(TrianglesFieldMask);

    return &_sfTriangles;
}

const SFUInt32 *ProxyGroupBase::getSFTriangles(void) const
{
    return &_sfTriangles;
}


SFUInt32 *ProxyGroupBase::editSFPositions(void)
{
    editSField(PositionsFieldMask);

    return &_sfPositions;
}

const SFUInt32 *ProxyGroupBase::getSFPositions(void) const
{
    return &_sfPositions;
}


SFUInt32 *ProxyGroupBase::editSFGeometries(void)
{
    editSField(GeometriesFieldMask);

    return &_sfGeometries;
}

const SFUInt32 *ProxyGroupBase::getSFGeometries(void) const
{
    return &_sfGeometries;
}


SFString *ProxyGroupBase::editSFAbsoluteUrl(void)
{
    editSField(AbsoluteUrlFieldMask);

    return &_sfAbsoluteUrl;
}

const SFString *ProxyGroupBase::getSFAbsoluteUrl(void) const
{
    return &_sfAbsoluteUrl;
}


MFUInt8 *ProxyGroupBase::editMFInline(void)
{
    editMField(InlineFieldMask, _mfInline);

    return &_mfInline;
}

const MFUInt8 *ProxyGroupBase::getMFInline(void) const
{
    return &_mfInline;
}






/*------------------------------ access -----------------------------------*/

UInt32 ProxyGroupBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
    {
        returnValue += _sfEnabled.getBinSize();
    }
    if(FieldBits::NoField != (UrlFieldMask & whichField))
    {
        returnValue += _sfUrl.getBinSize();
    }
    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        returnValue += _sfRoot.getBinSize();
    }
    if(FieldBits::NoField != (StateFieldMask & whichField))
    {
        returnValue += _sfState.getBinSize();
    }
    if(FieldBits::NoField != (ConcurrentLoadFieldMask & whichField))
    {
        returnValue += _sfConcurrentLoad.getBinSize();
    }
    if(FieldBits::NoField != (VolumeFieldMask & whichField))
    {
        returnValue += _sfVolume.getBinSize();
    }
    if(FieldBits::NoField != (IndicesFieldMask & whichField))
    {
        returnValue += _sfIndices.getBinSize();
    }
    if(FieldBits::NoField != (TrianglesFieldMask & whichField))
    {
        returnValue += _sfTriangles.getBinSize();
    }
    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        returnValue += _sfPositions.getBinSize();
    }
    if(FieldBits::NoField != (GeometriesFieldMask & whichField))
    {
        returnValue += _sfGeometries.getBinSize();
    }
    if(FieldBits::NoField != (AbsoluteUrlFieldMask & whichField))
    {
        returnValue += _sfAbsoluteUrl.getBinSize();
    }
    if(FieldBits::NoField != (InlineFieldMask & whichField))
    {
        returnValue += _mfInline.getBinSize();
    }

    return returnValue;
}

void ProxyGroupBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
    {
        _sfEnabled.copyToBin(pMem);
    }
    if(FieldBits::NoField != (UrlFieldMask & whichField))
    {
        _sfUrl.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        _sfRoot.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StateFieldMask & whichField))
    {
        _sfState.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ConcurrentLoadFieldMask & whichField))
    {
        _sfConcurrentLoad.copyToBin(pMem);
    }
    if(FieldBits::NoField != (VolumeFieldMask & whichField))
    {
        _sfVolume.copyToBin(pMem);
    }
    if(FieldBits::NoField != (IndicesFieldMask & whichField))
    {
        _sfIndices.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TrianglesFieldMask & whichField))
    {
        _sfTriangles.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        _sfPositions.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GeometriesFieldMask & whichField))
    {
        _sfGeometries.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AbsoluteUrlFieldMask & whichField))
    {
        _sfAbsoluteUrl.copyToBin(pMem);
    }
    if(FieldBits::NoField != (InlineFieldMask & whichField))
    {
        _mfInline.copyToBin(pMem);
    }
}

void ProxyGroupBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
    {
        _sfEnabled.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (UrlFieldMask & whichField))
    {
        _sfUrl.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        _sfRoot.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StateFieldMask & whichField))
    {
        _sfState.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ConcurrentLoadFieldMask & whichField))
    {
        _sfConcurrentLoad.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (VolumeFieldMask & whichField))
    {
        _sfVolume.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (IndicesFieldMask & whichField))
    {
        _sfIndices.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TrianglesFieldMask & whichField))
    {
        _sfTriangles.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        _sfPositions.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GeometriesFieldMask & whichField))
    {
        _sfGeometries.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AbsoluteUrlFieldMask & whichField))
    {
        _sfAbsoluteUrl.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (InlineFieldMask & whichField))
    {
        _mfInline.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ProxyGroupTransitPtr ProxyGroupBase::createLocal(BitVector bFlags)
{
    ProxyGroupTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ProxyGroup>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ProxyGroupTransitPtr ProxyGroupBase::createDependent(BitVector bFlags)
{
    ProxyGroupTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ProxyGroup>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ProxyGroupTransitPtr ProxyGroupBase::create(void)
{
    ProxyGroupTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ProxyGroup>(tmpPtr);
    }

    return fc;
}

ProxyGroup *ProxyGroupBase::createEmptyLocal(BitVector bFlags)
{
    ProxyGroup *returnValue;

    newPtr<ProxyGroup>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ProxyGroup *ProxyGroupBase::createEmpty(void)
{
    ProxyGroup *returnValue;

    newPtr<ProxyGroup>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ProxyGroupBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ProxyGroup *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ProxyGroup *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ProxyGroupBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ProxyGroup *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ProxyGroup *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ProxyGroupBase::shallowCopy(void) const
{
    ProxyGroup *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ProxyGroup *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ProxyGroupBase::ProxyGroupBase(void) :
    Inherited(),
    _sfEnabled                (bool(true)),
    _sfUrl                    (),
    _sfRoot                   (NULL),
    _sfState                  (UInt32(0)),
    _sfConcurrentLoad         (bool(true)),
    _sfVolume                 (),
    _sfIndices                (UInt32(0)),
    _sfTriangles              (UInt32(0)),
    _sfPositions              (),
    _sfGeometries             (),
    _sfAbsoluteUrl            (),
    _mfInline                 ()
{
}

ProxyGroupBase::ProxyGroupBase(const ProxyGroupBase &source) :
    Inherited(source),
    _sfEnabled                (source._sfEnabled                ),
    _sfUrl                    (source._sfUrl                    ),
    _sfRoot                   (NULL),
    _sfState                  (source._sfState                  ),
    _sfConcurrentLoad         (source._sfConcurrentLoad         ),
    _sfVolume                 (source._sfVolume                 ),
    _sfIndices                (source._sfIndices                ),
    _sfTriangles              (source._sfTriangles              ),
    _sfPositions              (source._sfPositions              ),
    _sfGeometries             (source._sfGeometries             ),
    _sfAbsoluteUrl            (source._sfAbsoluteUrl            ),
    _mfInline                 (source._mfInline                 )
{
}


/*-------------------------- destructors ----------------------------------*/

ProxyGroupBase::~ProxyGroupBase(void)
{
}

void ProxyGroupBase::onCreate(const ProxyGroup *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ProxyGroup *pThis = static_cast<ProxyGroup *>(this);

        pThis->setRoot(source->getRoot());
    }
}

GetFieldHandlePtr ProxyGroupBase::getHandleEnabled         (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfEnabled,
             this->getType().getFieldDesc(EnabledFieldId),
             const_cast<ProxyGroupBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ProxyGroupBase::editHandleEnabled        (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfEnabled,
             this->getType().getFieldDesc(EnabledFieldId),
             this));


    editSField(EnabledFieldMask);

    return returnValue;
}

GetFieldHandlePtr ProxyGroupBase::getHandleUrl             (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfUrl,
             this->getType().getFieldDesc(UrlFieldId),
             const_cast<ProxyGroupBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ProxyGroupBase::editHandleUrl            (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfUrl,
             this->getType().getFieldDesc(UrlFieldId),
             this));


    editSField(UrlFieldMask);

    return returnValue;
}

GetFieldHandlePtr ProxyGroupBase::getHandleRoot            (void) const
{
    SFUnrecNodePtr::GetHandlePtr returnValue(
        new  SFUnrecNodePtr::GetHandle(
             &_sfRoot,
             this->getType().getFieldDesc(RootFieldId),
             const_cast<ProxyGroupBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ProxyGroupBase::editHandleRoot           (void)
{
    SFUnrecNodePtr::EditHandlePtr returnValue(
        new  SFUnrecNodePtr::EditHandle(
             &_sfRoot,
             this->getType().getFieldDesc(RootFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&ProxyGroup::setRoot,
                    static_cast<ProxyGroup *>(this), _1));

    editSField(RootFieldMask);

    return returnValue;
}

GetFieldHandlePtr ProxyGroupBase::getHandleState           (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfState,
             this->getType().getFieldDesc(StateFieldId),
             const_cast<ProxyGroupBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ProxyGroupBase::editHandleState          (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfState,
             this->getType().getFieldDesc(StateFieldId),
             this));


    editSField(StateFieldMask);

    return returnValue;
}

GetFieldHandlePtr ProxyGroupBase::getHandleConcurrentLoad  (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfConcurrentLoad,
             this->getType().getFieldDesc(ConcurrentLoadFieldId),
             const_cast<ProxyGroupBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ProxyGroupBase::editHandleConcurrentLoad (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfConcurrentLoad,
             this->getType().getFieldDesc(ConcurrentLoadFieldId),
             this));


    editSField(ConcurrentLoadFieldMask);

    return returnValue;
}

GetFieldHandlePtr ProxyGroupBase::getHandleVolume          (void) const
{
    SFBoxVolume::GetHandlePtr returnValue(
        new  SFBoxVolume::GetHandle(
             &_sfVolume,
             this->getType().getFieldDesc(VolumeFieldId),
             const_cast<ProxyGroupBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ProxyGroupBase::editHandleVolume         (void)
{
    SFBoxVolume::EditHandlePtr returnValue(
        new  SFBoxVolume::EditHandle(
             &_sfVolume,
             this->getType().getFieldDesc(VolumeFieldId),
             this));


    editSField(VolumeFieldMask);

    return returnValue;
}

GetFieldHandlePtr ProxyGroupBase::getHandleIndices         (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfIndices,
             this->getType().getFieldDesc(IndicesFieldId),
             const_cast<ProxyGroupBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ProxyGroupBase::editHandleIndices        (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfIndices,
             this->getType().getFieldDesc(IndicesFieldId),
             this));


    editSField(IndicesFieldMask);

    return returnValue;
}

GetFieldHandlePtr ProxyGroupBase::getHandleTriangles       (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfTriangles,
             this->getType().getFieldDesc(TrianglesFieldId),
             const_cast<ProxyGroupBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ProxyGroupBase::editHandleTriangles      (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfTriangles,
             this->getType().getFieldDesc(TrianglesFieldId),
             this));


    editSField(TrianglesFieldMask);

    return returnValue;
}

GetFieldHandlePtr ProxyGroupBase::getHandlePositions       (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfPositions,
             this->getType().getFieldDesc(PositionsFieldId),
             const_cast<ProxyGroupBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ProxyGroupBase::editHandlePositions      (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfPositions,
             this->getType().getFieldDesc(PositionsFieldId),
             this));


    editSField(PositionsFieldMask);

    return returnValue;
}

GetFieldHandlePtr ProxyGroupBase::getHandleGeometries      (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfGeometries,
             this->getType().getFieldDesc(GeometriesFieldId),
             const_cast<ProxyGroupBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ProxyGroupBase::editHandleGeometries     (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfGeometries,
             this->getType().getFieldDesc(GeometriesFieldId),
             this));


    editSField(GeometriesFieldMask);

    return returnValue;
}

GetFieldHandlePtr ProxyGroupBase::getHandleAbsoluteUrl     (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfAbsoluteUrl,
             this->getType().getFieldDesc(AbsoluteUrlFieldId),
             const_cast<ProxyGroupBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ProxyGroupBase::editHandleAbsoluteUrl    (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfAbsoluteUrl,
             this->getType().getFieldDesc(AbsoluteUrlFieldId),
             this));


    editSField(AbsoluteUrlFieldMask);

    return returnValue;
}

GetFieldHandlePtr ProxyGroupBase::getHandleInline          (void) const
{
    MFUInt8::GetHandlePtr returnValue(
        new  MFUInt8::GetHandle(
             &_mfInline,
             this->getType().getFieldDesc(InlineFieldId),
             const_cast<ProxyGroupBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ProxyGroupBase::editHandleInline         (void)
{
    MFUInt8::EditHandlePtr returnValue(
        new  MFUInt8::EditHandle(
             &_mfInline,
             this->getType().getFieldDesc(InlineFieldId),
             this));


    editMField(InlineFieldMask, _mfInline);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ProxyGroupBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ProxyGroup *pThis = static_cast<ProxyGroup *>(this);

    pThis->execSync(static_cast<ProxyGroup *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ProxyGroupBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ProxyGroup *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ProxyGroup *>(pRefAspect),
                  dynamic_cast<const ProxyGroup *>(this));

    return returnValue;
}
#endif

void ProxyGroupBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ProxyGroup *>(this)->setRoot(NULL);

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfInline.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE

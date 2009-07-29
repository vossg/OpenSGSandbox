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
 **     class SHLParameterChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include "OSGSHLChunk.h"                // SHLChunk Class

#include "OSGSHLParameterChunkBase.h"
#include "OSGSHLParameterChunk.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SHLParameterChunk
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var SHLChunk *      SHLParameterChunkBase::_sfSHLChunk
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SHLParameterChunk *>::_type("SHLParameterChunkPtr", "ShaderParameterChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(SHLParameterChunk *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           SHLParameterChunk *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           SHLParameterChunk *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void SHLParameterChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecSHLChunkPtr::Description(
        SFUnrecSHLChunkPtr::getClassType(),
        "SHLChunk",
        "",
        SHLChunkFieldId, SHLChunkFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SHLParameterChunk::editHandleSHLChunk),
        static_cast<FieldGetMethodSig >(&SHLParameterChunk::getHandleSHLChunk));

    oType.addInitialDesc(pDesc);
}


SHLParameterChunkBase::TypeObject SHLParameterChunkBase::_type(
    SHLParameterChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&SHLParameterChunkBase::createEmptyLocal),
    SHLParameterChunk::initMethod,
    SHLParameterChunk::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&SHLParameterChunk::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"SHLParameterChunk\"\n"
    "\tparent=\"ShaderParameterChunk\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"SHLChunk\"\n"
    "\t\ttype=\"SHLChunkPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SHLParameterChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &SHLParameterChunkBase::getType(void) const
{
    return _type;
}

UInt32 SHLParameterChunkBase::getContainerSize(void) const
{
    return sizeof(SHLParameterChunk);
}

/*------------------------- decorator get ------------------------------*/


//! Get the SHLParameterChunk::_sfSHLChunk field.
const SFUnrecSHLChunkPtr *SHLParameterChunkBase::getSFSHLChunk(void) const
{
    return &_sfSHLChunk;
}

SFUnrecSHLChunkPtr  *SHLParameterChunkBase::editSFSHLChunk       (void)
{
    editSField(SHLChunkFieldMask);

    return &_sfSHLChunk;
}





/*------------------------------ access -----------------------------------*/

UInt32 SHLParameterChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SHLChunkFieldMask & whichField))
    {
        returnValue += _sfSHLChunk.getBinSize();
    }

    return returnValue;
}

void SHLParameterChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SHLChunkFieldMask & whichField))
    {
        _sfSHLChunk.copyToBin(pMem);
    }
}

void SHLParameterChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SHLChunkFieldMask & whichField))
    {
        _sfSHLChunk.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SHLParameterChunkTransitPtr SHLParameterChunkBase::createLocal(BitVector bFlags)
{
    SHLParameterChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SHLParameterChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
SHLParameterChunkTransitPtr SHLParameterChunkBase::createDependent(BitVector bFlags)
{
    SHLParameterChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<SHLParameterChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SHLParameterChunkTransitPtr SHLParameterChunkBase::create(void)
{
    SHLParameterChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<SHLParameterChunk>(tmpPtr);
    }

    return fc;
}

SHLParameterChunk *SHLParameterChunkBase::createEmptyLocal(BitVector bFlags)
{
    SHLParameterChunk *returnValue;

    newPtr<SHLParameterChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
SHLParameterChunk *SHLParameterChunkBase::createEmpty(void)
{
    SHLParameterChunk *returnValue;

    newPtr<SHLParameterChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SHLParameterChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SHLParameterChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SHLParameterChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SHLParameterChunkBase::shallowCopyDependent(
    BitVector bFlags) const
{
    SHLParameterChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SHLParameterChunk *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr SHLParameterChunkBase::shallowCopy(void) const
{
    SHLParameterChunk *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const SHLParameterChunk *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SHLParameterChunkBase::SHLParameterChunkBase(void) :
    Inherited(),
    _sfSHLChunk               (NULL)
{
}

SHLParameterChunkBase::SHLParameterChunkBase(const SHLParameterChunkBase &source) :
    Inherited(source),
    _sfSHLChunk               (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

SHLParameterChunkBase::~SHLParameterChunkBase(void)
{
}

void SHLParameterChunkBase::onCreate(const SHLParameterChunk *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        SHLParameterChunk *pThis = static_cast<SHLParameterChunk *>(this);

        pThis->setSHLChunk(source->getSHLChunk());
    }
}

GetFieldHandlePtr SHLParameterChunkBase::getHandleSHLChunk        (void) const
{
    SFUnrecSHLChunkPtr::GetHandlePtr returnValue(
        new  SFUnrecSHLChunkPtr::GetHandle(
             &_sfSHLChunk,
             this->getType().getFieldDesc(SHLChunkFieldId),
             const_cast<SHLParameterChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SHLParameterChunkBase::editHandleSHLChunk       (void)
{
    SFUnrecSHLChunkPtr::EditHandlePtr returnValue(
        new  SFUnrecSHLChunkPtr::EditHandle(
             &_sfSHLChunk,
             this->getType().getFieldDesc(SHLChunkFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&SHLParameterChunk::setSHLChunk,
                    static_cast<SHLParameterChunk *>(this), _1));

    editSField(SHLChunkFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SHLParameterChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    SHLParameterChunk *pThis = static_cast<SHLParameterChunk *>(this);

    pThis->execSync(static_cast<SHLParameterChunk *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SHLParameterChunkBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    SHLParameterChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SHLParameterChunk *>(pRefAspect),
                  dynamic_cast<const SHLParameterChunk *>(this));

    return returnValue;
}
#endif

void SHLParameterChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<SHLParameterChunk *>(this)->setSHLChunk(NULL);


}


OSG_END_NAMESPACE

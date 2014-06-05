/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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
 **     class GeoInstancer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGGeometry.h"                // BaseGeometry Class

#include "OSGGeoInstancerBase.h"
#include "OSGGeoInstancer.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::GeoInstancer
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var UInt32          GeoInstancerBase::_sfNumInstances
    
*/

/*! \var Geometry *      GeoInstancerBase::_sfBaseGeometry
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<GeoInstancer *, nsOSG>::_type(
    "GeoInstancerPtr", 
    "MaterialDrawablePtr", 
    GeoInstancer::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(GeoInstancer *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           GeoInstancer *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           GeoInstancer *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void GeoInstancerBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "numInstances",
        "",
        NumInstancesFieldId, NumInstancesFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&GeoInstancer::editHandleNumInstances),
        static_cast<FieldGetMethodSig >(&GeoInstancer::getHandleNumInstances));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecChildGeometryPtr::Description(
        SFUnrecChildGeometryPtr::getClassType(),
        "baseGeometry",
        "",
        BaseGeometryFieldId, BaseGeometryFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&GeoInstancer::editHandleBaseGeometry),
        static_cast<FieldGetMethodSig >(&GeoInstancer::getHandleBaseGeometry));

    oType.addInitialDesc(pDesc);
}


GeoInstancerBase::TypeObject GeoInstancerBase::_type(
    GeoInstancerBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&GeoInstancerBase::createEmptyLocal),
    GeoInstancer::initMethod,
    GeoInstancer::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&GeoInstancer::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"GeoInstancer\"\n"
    "    parent=\"MaterialDrawable\"\n"
    "    library=\"Drawable\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    docGroupBase=\"GrpDrawablesGeometry\"\n"
    "    >\n"
    "    <Field\n"
    "        name=\"numInstances\"\n"
    "        type=\"UInt32\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"1\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"baseGeometry\"\n"
    "        type=\"Geometry\"\n"
    "        category=\"childpointer\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"NULL\"\n"
    "        access=\"public\"\n"
    "        linkParentField=\"Parents\"\n"
    "        >\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GeoInstancerBase::getType(void)
{
    return _type;
}

const FieldContainerType &GeoInstancerBase::getType(void) const
{
    return _type;
}

UInt32 GeoInstancerBase::getContainerSize(void) const
{
    return sizeof(GeoInstancer);
}

/*------------------------- decorator get ------------------------------*/


SFUInt32 *GeoInstancerBase::editSFNumInstances(void)
{
    editSField(NumInstancesFieldMask);

    return &_sfNumInstances;
}

const SFUInt32 *GeoInstancerBase::getSFNumInstances(void) const
{
    return &_sfNumInstances;
}


//! Get the GeoInstancer::_sfBaseGeometry field.
const SFUnrecChildGeometryPtr *GeoInstancerBase::getSFBaseGeometry(void) const
{
    return &_sfBaseGeometry;
}

SFUnrecChildGeometryPtr *GeoInstancerBase::editSFBaseGeometry   (void)
{
    editSField(BaseGeometryFieldMask);

    return &_sfBaseGeometry;
}

//! Get the value of the GeoInstancer::_sfBaseGeometry field.
Geometry * GeoInstancerBase::getBaseGeometry(void) const
{
    return _sfBaseGeometry.getValue();
}

//! Set the value of the GeoInstancer::_sfBaseGeometry field.
void GeoInstancerBase::setBaseGeometry(Geometry * const value)
{
    editSField(BaseGeometryFieldMask);

    _sfBaseGeometry.setValue(value);
}






/*------------------------------ access -----------------------------------*/

SizeT GeoInstancerBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (NumInstancesFieldMask & whichField))
    {
        returnValue += _sfNumInstances.getBinSize();
    }
    if(FieldBits::NoField != (BaseGeometryFieldMask & whichField))
    {
        returnValue += _sfBaseGeometry.getBinSize();
    }

    return returnValue;
}

void GeoInstancerBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (NumInstancesFieldMask & whichField))
    {
        _sfNumInstances.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BaseGeometryFieldMask & whichField))
    {
        _sfBaseGeometry.copyToBin(pMem);
    }
}

void GeoInstancerBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (NumInstancesFieldMask & whichField))
    {
        editSField(NumInstancesFieldMask);
        _sfNumInstances.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BaseGeometryFieldMask & whichField))
    {
        editSField(BaseGeometryFieldMask);
        _sfBaseGeometry.copyFromBin(pMem);
    }
}

//! create a new instance of the class
GeoInstancerTransitPtr GeoInstancerBase::createLocal(BitVector bFlags)
{
    GeoInstancerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<GeoInstancer>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
GeoInstancerTransitPtr GeoInstancerBase::createDependent(BitVector bFlags)
{
    GeoInstancerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<GeoInstancer>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
GeoInstancerTransitPtr GeoInstancerBase::create(void)
{
    GeoInstancerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<GeoInstancer>(tmpPtr);
    }

    return fc;
}

GeoInstancer *GeoInstancerBase::createEmptyLocal(BitVector bFlags)
{
    GeoInstancer *returnValue;

    newPtr<GeoInstancer>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
GeoInstancer *GeoInstancerBase::createEmpty(void)
{
    GeoInstancer *returnValue;

    newPtr<GeoInstancer>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr GeoInstancerBase::shallowCopyLocal(
    BitVector bFlags) const
{
    GeoInstancer *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GeoInstancer *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr GeoInstancerBase::shallowCopyDependent(
    BitVector bFlags) const
{
    GeoInstancer *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GeoInstancer *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr GeoInstancerBase::shallowCopy(void) const
{
    GeoInstancer *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const GeoInstancer *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

GeoInstancerBase::GeoInstancerBase(void) :
    Inherited(),
    _sfNumInstances           (UInt32(1)),
    _sfBaseGeometry           (this,
                          BaseGeometryFieldId,
                          Geometry::ParentsFieldId)
{
}

GeoInstancerBase::GeoInstancerBase(const GeoInstancerBase &source) :
    Inherited(source),
    _sfNumInstances           (source._sfNumInstances           ),
    _sfBaseGeometry           (this,
                          BaseGeometryFieldId,
                          Geometry::ParentsFieldId)
{
}


/*-------------------------- destructors ----------------------------------*/

GeoInstancerBase::~GeoInstancerBase(void)
{
}

/*-------------------------------------------------------------------------*/
/* Child linking                                                           */

bool GeoInstancerBase::unlinkChild(
    FieldContainer * const pChild,
    UInt16           const childFieldId)
{
    if(childFieldId == BaseGeometryFieldId)
    {
        Geometry * pTypedChild =
            dynamic_cast<Geometry *>(pChild);

        if(pTypedChild != NULL)
        {
            if(_sfBaseGeometry.getValue() == pTypedChild)
            {
                editSField(BaseGeometryFieldMask);

                _sfBaseGeometry.setValue(NULL);

                return true;
            }

            SWARNING << "Parent (["        << this
                     << "] id ["           << this->getId()
                     << "] type ["         << this->getType().getCName()
                     << "] childFieldId [" << childFieldId
                     << "]) - Child (["    << pChild
                     << "] id ["           << pChild->getId()
                     << "] type ["         << pChild->getType().getCName()
                     << "]): link inconsistent!"
                     << std::endl;

            return false;
        }

        return false;
    }


    return Inherited::unlinkChild(pChild, childFieldId);
}

void GeoInstancerBase::onCreate(const GeoInstancer *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        GeoInstancer *pThis = static_cast<GeoInstancer *>(this);

        pThis->setBaseGeometry(source->getBaseGeometry());
    }
}

GetFieldHandlePtr GeoInstancerBase::getHandleNumInstances    (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfNumInstances,
             this->getType().getFieldDesc(NumInstancesFieldId),
             const_cast<GeoInstancerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr GeoInstancerBase::editHandleNumInstances   (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfNumInstances,
             this->getType().getFieldDesc(NumInstancesFieldId),
             this));


    editSField(NumInstancesFieldMask);

    return returnValue;
}

GetFieldHandlePtr GeoInstancerBase::getHandleBaseGeometry    (void) const
{
    SFUnrecChildGeometryPtr::GetHandlePtr returnValue(
        new  SFUnrecChildGeometryPtr::GetHandle(
             &_sfBaseGeometry,
             this->getType().getFieldDesc(BaseGeometryFieldId),
             const_cast<GeoInstancerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr GeoInstancerBase::editHandleBaseGeometry   (void)
{
    SFUnrecChildGeometryPtr::EditHandlePtr returnValue(
        new  SFUnrecChildGeometryPtr::EditHandle(
             &_sfBaseGeometry,
             this->getType().getFieldDesc(BaseGeometryFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&GeoInstancer::setBaseGeometry,
                    static_cast<GeoInstancer *>(this), _1));

    editSField(BaseGeometryFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void GeoInstancerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    GeoInstancer *pThis = static_cast<GeoInstancer *>(this);

    pThis->execSync(static_cast<GeoInstancer *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *GeoInstancerBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    GeoInstancer *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const GeoInstancer *>(pRefAspect),
                  dynamic_cast<const GeoInstancer *>(this));

    return returnValue;
}
#endif

void GeoInstancerBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<GeoInstancer *>(this)->setBaseGeometry(NULL);


}


OSG_END_NAMESPACE

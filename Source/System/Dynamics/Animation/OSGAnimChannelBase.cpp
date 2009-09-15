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
 **     class AnimChannel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include "OSGAnimation.h"               // Animation Class

#include "OSGAnimChannelBase.h"
#include "OSGAnimChannel.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::AnimChannel
    Base for animation data sinks.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Animation *     AnimChannelBase::_sfAnimation
    
*/

/*! \var Real32          AnimChannelBase::_sfWeight
    
*/

/*! \var Real32          AnimChannelBase::_sfInValue
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<AnimChannel *>::_type("AnimChannelPtr", "NodeCorePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(AnimChannel *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           AnimChannel *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           AnimChannel *,
                           0);

DataType &FieldTraits< AnimChannel *, 1 >::getType(void)
{
    return FieldTraits<AnimChannel *, 0>::getType();
}


OSG_EXPORT_PTR_SFIELD(ChildPointerSField,
                      AnimChannel *,
                      UnrecordedRefCountPolicy,
                      1);


OSG_EXPORT_PTR_MFIELD(ChildPointerMField,
                      AnimChannel *,
                      UnrecordedRefCountPolicy,
                      1);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void AnimChannelBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFParentAnimationPtr::Description(
        SFParentAnimationPtr::getClassType(),
        "animation",
        "",
        AnimationFieldId, AnimationFieldMask,
        false,
        (Field::FThreadLocal),
        static_cast     <FieldEditMethodSig>(&AnimChannel::invalidEditField),
        static_cast     <FieldGetMethodSig >(&AnimChannel::invalidGetField));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "weight",
        "",
        WeightFieldId, WeightFieldMask,
        false,
        (Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&AnimChannel::editHandleWeight),
        static_cast<FieldGetMethodSig >(&AnimChannel::getHandleWeight));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "inValue",
        "",
        InValueFieldId, InValueFieldMask,
        false,
        (Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&AnimChannel::editHandleInValue),
        static_cast<FieldGetMethodSig >(&AnimChannel::getHandleInValue));

    oType.addInitialDesc(pDesc);
}


AnimChannelBase::TypeObject AnimChannelBase::_type(
    AnimChannelBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    AnimChannel::initMethod,
    AnimChannel::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&AnimChannel::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"AnimChannel\"\n"
    "    parent=\"NodeCore\"\n"
    "    library=\"Dynamics\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"abstract\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"true\"\n"
    "    isBundle=\"false\"\n"
    "    childFields=\"both\"\n"
    "    parentFields=\"none\"\n"
    ">\n"
    "  Base for animation data sinks.\n"
    " \n"
    "  <Field\n"
    "     name=\"animation\"\n"
    "     category=\"parentpointer\"\n"
    "     type=\"Animation\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"none\"\n"
    "     fieldFlags=\"FThreadLocal\"\n"
    "     >\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"weight\"\n"
    "     category=\"data\"\n"
    "     type=\"Real32\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"1.f\"\n"
    "     fieldFlags=\"FThreadLocal\"\n"
    "     >\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"inValue\"\n"
    "     category=\"data\"\n"
    "     type=\"Real32\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"0.0\"\n"
    "     fieldFlags=\"FThreadLocal\"\n"
    "     >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "Base for animation data sinks.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &AnimChannelBase::getType(void)
{
    return _type;
}

const FieldContainerType &AnimChannelBase::getType(void) const
{
    return _type;
}

UInt32 AnimChannelBase::getContainerSize(void) const
{
    return sizeof(AnimChannel);
}

/*------------------------- decorator get ------------------------------*/



SFReal32 *AnimChannelBase::editSFWeight(void)
{
    editSField(WeightFieldMask);

    return &_sfWeight;
}

const SFReal32 *AnimChannelBase::getSFWeight(void) const
{
    return &_sfWeight;
}


SFReal32 *AnimChannelBase::editSFInValue(void)
{
    editSField(InValueFieldMask);

    return &_sfInValue;
}

const SFReal32 *AnimChannelBase::getSFInValue(void) const
{
    return &_sfInValue;
}






/*------------------------------ access -----------------------------------*/

UInt32 AnimChannelBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (AnimationFieldMask & whichField))
    {
        returnValue += _sfAnimation.getBinSize();
    }
    if(FieldBits::NoField != (WeightFieldMask & whichField))
    {
        returnValue += _sfWeight.getBinSize();
    }
    if(FieldBits::NoField != (InValueFieldMask & whichField))
    {
        returnValue += _sfInValue.getBinSize();
    }

    return returnValue;
}

void AnimChannelBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (AnimationFieldMask & whichField))
    {
        _sfAnimation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (WeightFieldMask & whichField))
    {
        _sfWeight.copyToBin(pMem);
    }
    if(FieldBits::NoField != (InValueFieldMask & whichField))
    {
        _sfInValue.copyToBin(pMem);
    }
}

void AnimChannelBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (AnimationFieldMask & whichField))
    {
        _sfAnimation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (WeightFieldMask & whichField))
    {
        _sfWeight.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (InValueFieldMask & whichField))
    {
        _sfInValue.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

AnimChannelBase::AnimChannelBase(void) :
    Inherited(),
    _sfAnimation              (NULL),
    _sfWeight                 (Real32(1.f)),
    _sfInValue                (Real32(0.0))
{
}

AnimChannelBase::AnimChannelBase(const AnimChannelBase &source) :
    Inherited(source),
    _sfAnimation              (NULL),
    _sfWeight                 (source._sfWeight                 ),
    _sfInValue                (source._sfInValue                )
{
}


/*-------------------------- destructors ----------------------------------*/

AnimChannelBase::~AnimChannelBase(void)
{
}
/*-------------------------------------------------------------------------*/
/* Parent linking                                                          */

bool AnimChannelBase::linkParent(
    FieldContainer * const pParent,
    UInt16           const childFieldId,
    UInt16           const parentFieldId )
{
    if(parentFieldId == AnimationFieldId)
    {
        Animation * pTypedParent =
            dynamic_cast< Animation * >(pParent);

        if(pTypedParent != NULL)
        {
            FieldContainer *pOldParent =
                _sfAnimation.getValue         ();

            UInt16 oldChildFieldId =
                _sfAnimation.getParentFieldPos();

            if(pOldParent != NULL)
            {
                pOldParent->unlinkChild(this, oldChildFieldId);
            }

            editSField(AnimationFieldMask);

            _sfAnimation.setValue(static_cast<Animation *>(pParent), childFieldId);

            return true;
        }

        return false;
    }

    return Inherited::linkParent(pParent, childFieldId, parentFieldId);
}

bool AnimChannelBase::unlinkParent(
    FieldContainer * const pParent,
    UInt16           const parentFieldId)
{
    if(parentFieldId == AnimationFieldId)
    {
        Animation * pTypedParent =
            dynamic_cast< Animation * >(pParent);

        if(pTypedParent != NULL)
        {
            if(_sfAnimation.getValue() == pParent)
            {
                editSField(AnimationFieldMask);

                _sfAnimation.setValue(NULL, 0xFFFF);

                return true;
            }

            FWARNING(("AnimChannelBase::unlinkParent: "
                      "Child <-> Parent link inconsistent.\n"));

            return false;
        }

        return false;
    }

    return Inherited::unlinkParent(pParent, parentFieldId);
}


void AnimChannelBase::onCreate(const AnimChannel *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        AnimChannel *pThis = static_cast<AnimChannel *>(this);
    }
}

GetFieldHandlePtr AnimChannelBase::getHandleAnimation       (void) const
{
    SFParentAnimationPtr::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr AnimChannelBase::editHandleAnimation      (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}

GetFieldHandlePtr AnimChannelBase::getHandleWeight          (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfWeight,
             this->getType().getFieldDesc(WeightFieldId),
             const_cast<AnimChannelBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AnimChannelBase::editHandleWeight         (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfWeight,
             this->getType().getFieldDesc(WeightFieldId),
             this));


    editSField(WeightFieldMask);

    return returnValue;
}

GetFieldHandlePtr AnimChannelBase::getHandleInValue         (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfInValue,
             this->getType().getFieldDesc(InValueFieldId),
             const_cast<AnimChannelBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AnimChannelBase::editHandleInValue        (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfInValue,
             this->getType().getFieldDesc(InValueFieldId),
             this));


    editSField(InValueFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void AnimChannelBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    AnimChannel *pThis = static_cast<AnimChannel *>(this);

    pThis->execSync(static_cast<AnimChannel *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void AnimChannelBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE

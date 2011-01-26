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
 **     class LightChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGNode.h"                    // Beacon Class

#include "OSGLightChunkBase.h"
#include "OSGLightChunk.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::LightChunk
    See \ref PageSystemLightChunk for a description.

    The light chunk contains the parameter set for a single light source. It's taken
    straight from the glLight() manpage.

    This chunk wraps glLight() (OSG::LightChunk::_sfAmbient,
    OSG::LightChunk::_sfDiffuse, OSG::LightChunk::_sfSpecular,
    OSG::LightChunk::_sfEmission, OSG::LightChunk::_sfPosition,
    OSG::LightChunk::_sfDirection, OSG::LightChunk::_sfExponent,
    OSG::LightChunk::_sfCutoff, OSG::LightChunk::_sfConstantAttenuation,
    OSG::LightChunk::_sfLinearAttenuation,
    OSG::LightChunk::_sfQuadraticAttenuation).
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Color4f         LightChunkBase::_sfDiffuse
    The light's diffuse color.
*/

/*! \var Color4f         LightChunkBase::_sfAmbient
    The light's ambient color.
*/

/*! \var Color4f         LightChunkBase::_sfSpecular
    The light's specular color.
*/

/*! \var Vec4f           LightChunkBase::_sfPosition
    The light's position.
*/

/*! \var Vec3f           LightChunkBase::_sfDirection
    The light's direction (only for spotlights).
*/

/*! \var Real32          LightChunkBase::_sfExponent
    The light's spotlight exponent.
*/

/*! \var Real32          LightChunkBase::_sfCutoff
    The light's spotlight cutoff. As this chunk follows OpenGL conventions, this is the only angle in the system given in degrees.
*/

/*! \var Real32          LightChunkBase::_sfConstantAttenuation
    The light's constant attenuation.
*/

/*! \var Real32          LightChunkBase::_sfLinearAttenuation
    The light's linear attenuation.
*/

/*! \var Real32          LightChunkBase::_sfQuadraticAttenuation
    The light's quadratic attenuation.
*/

/*! \var Node *          LightChunkBase::_sfBeacon
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<LightChunk *>::_type("LightChunkPtr", "StateChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(LightChunk *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           LightChunk *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           LightChunk *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void LightChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "diffuse",
        "The light's diffuse color.\n",
        DiffuseFieldId, DiffuseFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&LightChunk::editHandleDiffuse),
        static_cast<FieldGetMethodSig >(&LightChunk::getHandleDiffuse));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "ambient",
        "The light's ambient color.\n",
        AmbientFieldId, AmbientFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&LightChunk::editHandleAmbient),
        static_cast<FieldGetMethodSig >(&LightChunk::getHandleAmbient));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "specular",
        "The light's specular color.\n",
        SpecularFieldId, SpecularFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&LightChunk::editHandleSpecular),
        static_cast<FieldGetMethodSig >(&LightChunk::getHandleSpecular));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec4f::Description(
        SFVec4f::getClassType(),
        "position",
        "The light's position.\n",
        PositionFieldId, PositionFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&LightChunk::editHandlePosition),
        static_cast<FieldGetMethodSig >(&LightChunk::getHandlePosition));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "direction",
        "The light's direction (only for spotlights).\n",
        DirectionFieldId, DirectionFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&LightChunk::editHandleDirection),
        static_cast<FieldGetMethodSig >(&LightChunk::getHandleDirection));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "exponent",
        "The light's spotlight exponent.\n",
        ExponentFieldId, ExponentFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&LightChunk::editHandleExponent),
        static_cast<FieldGetMethodSig >(&LightChunk::getHandleExponent));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "cutoff",
        "The light's spotlight cutoff. As this chunk follows OpenGL conventions, this is the only angle in the system given in degrees.\n",
        CutoffFieldId, CutoffFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&LightChunk::editHandleCutoff),
        static_cast<FieldGetMethodSig >(&LightChunk::getHandleCutoff));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "constantAttenuation",
        "The light's constant attenuation.\n",
        ConstantAttenuationFieldId, ConstantAttenuationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&LightChunk::editHandleConstantAttenuation),
        static_cast<FieldGetMethodSig >(&LightChunk::getHandleConstantAttenuation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "linearAttenuation",
        "The light's linear attenuation.\n",
        LinearAttenuationFieldId, LinearAttenuationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&LightChunk::editHandleLinearAttenuation),
        static_cast<FieldGetMethodSig >(&LightChunk::getHandleLinearAttenuation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "quadraticAttenuation",
        "The light's quadratic attenuation.\n",
        QuadraticAttenuationFieldId, QuadraticAttenuationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&LightChunk::editHandleQuadraticAttenuation),
        static_cast<FieldGetMethodSig >(&LightChunk::getHandleQuadraticAttenuation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFWeakNodePtr::Description(
        SFWeakNodePtr::getClassType(),
        "beacon",
        "",
        BeaconFieldId, BeaconFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&LightChunk::editHandleBeacon),
        static_cast<FieldGetMethodSig >(&LightChunk::getHandleBeacon));

    oType.addInitialDesc(pDesc);
}


LightChunkBase::TypeObject LightChunkBase::_type(
    LightChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&LightChunkBase::createEmptyLocal),
    LightChunk::initMethod,
    LightChunk::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&LightChunk::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"LightChunk\"\n"
    "   parent=\"StateChunk\"\n"
    "   library=\"System\"\n"
    "   structure=\"concrete\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   docGroupBase=\"GrpSystemState\"\n"
    ">\n"
    "See \\ref PageSystemLightChunk for a description.\n"
    "\n"
    "The light chunk contains the parameter set for a single light source. It's taken\n"
    "straight from the glLight() manpage.\n"
    "\n"
    "This chunk wraps glLight() (OSG::LightChunk::_sfAmbient,\n"
    "OSG::LightChunk::_sfDiffuse, OSG::LightChunk::_sfSpecular,\n"
    "OSG::LightChunk::_sfEmission, OSG::LightChunk::_sfPosition,\n"
    "OSG::LightChunk::_sfDirection, OSG::LightChunk::_sfExponent,\n"
    "OSG::LightChunk::_sfCutoff, OSG::LightChunk::_sfConstantAttenuation,\n"
    "OSG::LightChunk::_sfLinearAttenuation,\n"
    "OSG::LightChunk::_sfQuadraticAttenuation).\n"
    "\t<Field\n"
    "\t\tname=\"diffuse\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.f,1.f,1.f,0.f\"\n"
    "\t>\n"
    "\tThe light's diffuse color.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ambient\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\".1f,.1f,.1f,0.f\"\n"
    "\t>\n"
    "\tThe light's ambient color.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"specular\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.f,1.f,1.f,0.f\"\n"
    "\t>\n"
    "\tThe light's specular color.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"position\"\n"
    "\t\ttype=\"Vec4f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.f,-1.f,0.f,0.f\"\n"
    "\t>\n"
    "\tThe light's position.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"direction\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.f,0.f,1.f\"\n"
    "\t>\n"
    "\tThe light's direction (only for spotlights).\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"exponent\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"2.f\"\n"
    "\t>\n"
    "\tThe light's spotlight exponent.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"cutoff\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"180.f\"\n"
    "\t>\n"
    "\tThe light's spotlight cutoff. As this chunk follows OpenGL conventions, this is the only angle in the system given in degrees.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"constantAttenuation\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.f\"\n"
    "\t>\n"
    "\tThe light's constant attenuation.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"linearAttenuation\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.f\"\n"
    "\t>\n"
    "\tThe light's linear attenuation.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"quadraticAttenuation\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.f\"\n"
    "\t>\n"
    "\tThe light's quadratic attenuation.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"beacon\"\n"
    "\t\ttype=\"Node\"\n"
    "        category=\"weakpointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "See \\ref PageSystemLightChunk for a description.\n"
    "\n"
    "The light chunk contains the parameter set for a single light source. It's taken\n"
    "straight from the glLight() manpage.\n"
    "\n"
    "This chunk wraps glLight() (OSG::LightChunk::_sfAmbient,\n"
    "OSG::LightChunk::_sfDiffuse, OSG::LightChunk::_sfSpecular,\n"
    "OSG::LightChunk::_sfEmission, OSG::LightChunk::_sfPosition,\n"
    "OSG::LightChunk::_sfDirection, OSG::LightChunk::_sfExponent,\n"
    "OSG::LightChunk::_sfCutoff, OSG::LightChunk::_sfConstantAttenuation,\n"
    "OSG::LightChunk::_sfLinearAttenuation,\n"
    "OSG::LightChunk::_sfQuadraticAttenuation).\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &LightChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &LightChunkBase::getType(void) const
{
    return _type;
}

UInt32 LightChunkBase::getContainerSize(void) const
{
    return sizeof(LightChunk);
}

/*------------------------- decorator get ------------------------------*/


SFColor4f *LightChunkBase::editSFDiffuse(void)
{
    editSField(DiffuseFieldMask);

    return &_sfDiffuse;
}

const SFColor4f *LightChunkBase::getSFDiffuse(void) const
{
    return &_sfDiffuse;
}


SFColor4f *LightChunkBase::editSFAmbient(void)
{
    editSField(AmbientFieldMask);

    return &_sfAmbient;
}

const SFColor4f *LightChunkBase::getSFAmbient(void) const
{
    return &_sfAmbient;
}


SFColor4f *LightChunkBase::editSFSpecular(void)
{
    editSField(SpecularFieldMask);

    return &_sfSpecular;
}

const SFColor4f *LightChunkBase::getSFSpecular(void) const
{
    return &_sfSpecular;
}


SFVec4f *LightChunkBase::editSFPosition(void)
{
    editSField(PositionFieldMask);

    return &_sfPosition;
}

const SFVec4f *LightChunkBase::getSFPosition(void) const
{
    return &_sfPosition;
}


SFVec3f *LightChunkBase::editSFDirection(void)
{
    editSField(DirectionFieldMask);

    return &_sfDirection;
}

const SFVec3f *LightChunkBase::getSFDirection(void) const
{
    return &_sfDirection;
}


SFReal32 *LightChunkBase::editSFExponent(void)
{
    editSField(ExponentFieldMask);

    return &_sfExponent;
}

const SFReal32 *LightChunkBase::getSFExponent(void) const
{
    return &_sfExponent;
}


SFReal32 *LightChunkBase::editSFCutoff(void)
{
    editSField(CutoffFieldMask);

    return &_sfCutoff;
}

const SFReal32 *LightChunkBase::getSFCutoff(void) const
{
    return &_sfCutoff;
}


SFReal32 *LightChunkBase::editSFConstantAttenuation(void)
{
    editSField(ConstantAttenuationFieldMask);

    return &_sfConstantAttenuation;
}

const SFReal32 *LightChunkBase::getSFConstantAttenuation(void) const
{
    return &_sfConstantAttenuation;
}


SFReal32 *LightChunkBase::editSFLinearAttenuation(void)
{
    editSField(LinearAttenuationFieldMask);

    return &_sfLinearAttenuation;
}

const SFReal32 *LightChunkBase::getSFLinearAttenuation(void) const
{
    return &_sfLinearAttenuation;
}


SFReal32 *LightChunkBase::editSFQuadraticAttenuation(void)
{
    editSField(QuadraticAttenuationFieldMask);

    return &_sfQuadraticAttenuation;
}

const SFReal32 *LightChunkBase::getSFQuadraticAttenuation(void) const
{
    return &_sfQuadraticAttenuation;
}


//! Get the LightChunk::_sfBeacon field.
const SFWeakNodePtr *LightChunkBase::getSFBeacon(void) const
{
    return &_sfBeacon;
}

SFWeakNodePtr       *LightChunkBase::editSFBeacon         (void)
{
    editSField(BeaconFieldMask);

    return &_sfBeacon;
}





/*------------------------------ access -----------------------------------*/

UInt32 LightChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        returnValue += _sfDiffuse.getBinSize();
    }
    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        returnValue += _sfAmbient.getBinSize();
    }
    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        returnValue += _sfSpecular.getBinSize();
    }
    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        returnValue += _sfPosition.getBinSize();
    }
    if(FieldBits::NoField != (DirectionFieldMask & whichField))
    {
        returnValue += _sfDirection.getBinSize();
    }
    if(FieldBits::NoField != (ExponentFieldMask & whichField))
    {
        returnValue += _sfExponent.getBinSize();
    }
    if(FieldBits::NoField != (CutoffFieldMask & whichField))
    {
        returnValue += _sfCutoff.getBinSize();
    }
    if(FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
    {
        returnValue += _sfConstantAttenuation.getBinSize();
    }
    if(FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
    {
        returnValue += _sfLinearAttenuation.getBinSize();
    }
    if(FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
    {
        returnValue += _sfQuadraticAttenuation.getBinSize();
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        returnValue += _sfBeacon.getBinSize();
    }

    return returnValue;
}

void LightChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        _sfDiffuse.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        _sfAmbient.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        _sfSpecular.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _sfPosition.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DirectionFieldMask & whichField))
    {
        _sfDirection.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ExponentFieldMask & whichField))
    {
        _sfExponent.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CutoffFieldMask & whichField))
    {
        _sfCutoff.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
    {
        _sfConstantAttenuation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
    {
        _sfLinearAttenuation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
    {
        _sfQuadraticAttenuation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyToBin(pMem);
    }
}

void LightChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        editSField(DiffuseFieldMask);
        _sfDiffuse.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        editSField(AmbientFieldMask);
        _sfAmbient.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        editSField(SpecularFieldMask);
        _sfSpecular.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        editSField(PositionFieldMask);
        _sfPosition.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DirectionFieldMask & whichField))
    {
        editSField(DirectionFieldMask);
        _sfDirection.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ExponentFieldMask & whichField))
    {
        editSField(ExponentFieldMask);
        _sfExponent.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CutoffFieldMask & whichField))
    {
        editSField(CutoffFieldMask);
        _sfCutoff.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
    {
        editSField(ConstantAttenuationFieldMask);
        _sfConstantAttenuation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
    {
        editSField(LinearAttenuationFieldMask);
        _sfLinearAttenuation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
    {
        editSField(QuadraticAttenuationFieldMask);
        _sfQuadraticAttenuation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        editSField(BeaconFieldMask);
        _sfBeacon.copyFromBin(pMem);
    }
}

//! create a new instance of the class
LightChunkTransitPtr LightChunkBase::createLocal(BitVector bFlags)
{
    LightChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<LightChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
LightChunkTransitPtr LightChunkBase::createDependent(BitVector bFlags)
{
    LightChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<LightChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
LightChunkTransitPtr LightChunkBase::create(void)
{
    LightChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<LightChunk>(tmpPtr);
    }

    return fc;
}

LightChunk *LightChunkBase::createEmptyLocal(BitVector bFlags)
{
    LightChunk *returnValue;

    newPtr<LightChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
LightChunk *LightChunkBase::createEmpty(void)
{
    LightChunk *returnValue;

    newPtr<LightChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr LightChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    LightChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const LightChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr LightChunkBase::shallowCopyDependent(
    BitVector bFlags) const
{
    LightChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const LightChunk *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr LightChunkBase::shallowCopy(void) const
{
    LightChunk *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const LightChunk *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

LightChunkBase::LightChunkBase(void) :
    Inherited(),
    _sfDiffuse                (Color4f(1.f,1.f,1.f,0.f)),
    _sfAmbient                (Color4f(.1f,.1f,.1f,0.f)),
    _sfSpecular               (Color4f(1.f,1.f,1.f,0.f)),
    _sfPosition               (Vec4f(0.f,-1.f,0.f,0.f)),
    _sfDirection              (Vec3f(0.f,0.f,1.f)),
    _sfExponent               (Real32(2.f)),
    _sfCutoff                 (Real32(180.f)),
    _sfConstantAttenuation    (Real32(1.f)),
    _sfLinearAttenuation      (Real32(0.f)),
    _sfQuadraticAttenuation   (Real32(0.f)),
    _sfBeacon                 (NULL)
{
}

LightChunkBase::LightChunkBase(const LightChunkBase &source) :
    Inherited(source),
    _sfDiffuse                (source._sfDiffuse                ),
    _sfAmbient                (source._sfAmbient                ),
    _sfSpecular               (source._sfSpecular               ),
    _sfPosition               (source._sfPosition               ),
    _sfDirection              (source._sfDirection              ),
    _sfExponent               (source._sfExponent               ),
    _sfCutoff                 (source._sfCutoff                 ),
    _sfConstantAttenuation    (source._sfConstantAttenuation    ),
    _sfLinearAttenuation      (source._sfLinearAttenuation      ),
    _sfQuadraticAttenuation   (source._sfQuadraticAttenuation   ),
    _sfBeacon                 (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

LightChunkBase::~LightChunkBase(void)
{
}

void LightChunkBase::onCreate(const LightChunk *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        LightChunk *pThis = static_cast<LightChunk *>(this);

        pThis->setBeacon(source->getBeacon());
    }
}

GetFieldHandlePtr LightChunkBase::getHandleDiffuse         (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfDiffuse,
             this->getType().getFieldDesc(DiffuseFieldId),
             const_cast<LightChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LightChunkBase::editHandleDiffuse        (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfDiffuse,
             this->getType().getFieldDesc(DiffuseFieldId),
             this));


    editSField(DiffuseFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightChunkBase::getHandleAmbient         (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfAmbient,
             this->getType().getFieldDesc(AmbientFieldId),
             const_cast<LightChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LightChunkBase::editHandleAmbient        (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfAmbient,
             this->getType().getFieldDesc(AmbientFieldId),
             this));


    editSField(AmbientFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightChunkBase::getHandleSpecular        (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfSpecular,
             this->getType().getFieldDesc(SpecularFieldId),
             const_cast<LightChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LightChunkBase::editHandleSpecular       (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfSpecular,
             this->getType().getFieldDesc(SpecularFieldId),
             this));


    editSField(SpecularFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightChunkBase::getHandlePosition        (void) const
{
    SFVec4f::GetHandlePtr returnValue(
        new  SFVec4f::GetHandle(
             &_sfPosition,
             this->getType().getFieldDesc(PositionFieldId),
             const_cast<LightChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LightChunkBase::editHandlePosition       (void)
{
    SFVec4f::EditHandlePtr returnValue(
        new  SFVec4f::EditHandle(
             &_sfPosition,
             this->getType().getFieldDesc(PositionFieldId),
             this));


    editSField(PositionFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightChunkBase::getHandleDirection       (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfDirection,
             this->getType().getFieldDesc(DirectionFieldId),
             const_cast<LightChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LightChunkBase::editHandleDirection      (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfDirection,
             this->getType().getFieldDesc(DirectionFieldId),
             this));


    editSField(DirectionFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightChunkBase::getHandleExponent        (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfExponent,
             this->getType().getFieldDesc(ExponentFieldId),
             const_cast<LightChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LightChunkBase::editHandleExponent       (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfExponent,
             this->getType().getFieldDesc(ExponentFieldId),
             this));


    editSField(ExponentFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightChunkBase::getHandleCutoff          (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfCutoff,
             this->getType().getFieldDesc(CutoffFieldId),
             const_cast<LightChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LightChunkBase::editHandleCutoff         (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfCutoff,
             this->getType().getFieldDesc(CutoffFieldId),
             this));


    editSField(CutoffFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightChunkBase::getHandleConstantAttenuation (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfConstantAttenuation,
             this->getType().getFieldDesc(ConstantAttenuationFieldId),
             const_cast<LightChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LightChunkBase::editHandleConstantAttenuation(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfConstantAttenuation,
             this->getType().getFieldDesc(ConstantAttenuationFieldId),
             this));


    editSField(ConstantAttenuationFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightChunkBase::getHandleLinearAttenuation (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfLinearAttenuation,
             this->getType().getFieldDesc(LinearAttenuationFieldId),
             const_cast<LightChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LightChunkBase::editHandleLinearAttenuation(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfLinearAttenuation,
             this->getType().getFieldDesc(LinearAttenuationFieldId),
             this));


    editSField(LinearAttenuationFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightChunkBase::getHandleQuadraticAttenuation (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfQuadraticAttenuation,
             this->getType().getFieldDesc(QuadraticAttenuationFieldId),
             const_cast<LightChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LightChunkBase::editHandleQuadraticAttenuation(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfQuadraticAttenuation,
             this->getType().getFieldDesc(QuadraticAttenuationFieldId),
             this));


    editSField(QuadraticAttenuationFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightChunkBase::getHandleBeacon          (void) const
{
    SFWeakNodePtr::GetHandlePtr returnValue(
        new  SFWeakNodePtr::GetHandle(
             &_sfBeacon,
             this->getType().getFieldDesc(BeaconFieldId),
             const_cast<LightChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LightChunkBase::editHandleBeacon         (void)
{
    SFWeakNodePtr::EditHandlePtr returnValue(
        new  SFWeakNodePtr::EditHandle(
             &_sfBeacon,
             this->getType().getFieldDesc(BeaconFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&LightChunk::setBeacon,
                    static_cast<LightChunk *>(this), _1));

    editSField(BeaconFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void LightChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    LightChunk *pThis = static_cast<LightChunk *>(this);

    pThis->execSync(static_cast<LightChunk *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *LightChunkBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    LightChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const LightChunk *>(pRefAspect),
                  dynamic_cast<const LightChunk *>(this));

    return returnValue;
}
#endif

void LightChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<LightChunk *>(this)->setBeacon(NULL);


}


OSG_END_NAMESPACE

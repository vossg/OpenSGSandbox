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
 **     class PolygonForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include "OSGPrimeMaterial.h"           // Material Class

#include "OSGPolygonForegroundBase.h"
#include "OSGPolygonForeground.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PolygonForeground
    \ingroup GrpSystemWindowForegrounds

    A foreground that renders a single polygon used the specified material, 
    see \ref PageSystemPolygonForeground for a
    description.

    The polygon material is defined by _sfMaterial, the positions by _mfPositions,
    the texture coordinates by _mfTexCoords (there must be as many texture
    coordinates as positions). The interpretation of the positions is
    controlled by _sfNormalizedX and _sfNormalizedY.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var PrimeMaterial * PolygonForegroundBase::_sfMaterial
    The material used to display.
*/

/*! \var Pnt2f           PolygonForegroundBase::_mfPositions
    The vertices of the geometry to display.
*/

/*! \var Vec3f           PolygonForegroundBase::_mfTexCoords
    The texture coordinates of the geometry to display.
*/

/*! \var bool            PolygonForegroundBase::_sfNormalizedX
    Define whether the x coordinates are normalized (0-1) or pixel-based.
*/

/*! \var bool            PolygonForegroundBase::_sfNormalizedY
    Define whether the y coordinates are normalized (0-1) or pixel-based.
*/

/*! \var UInt16          PolygonForegroundBase::_sfAspectHeight
    Useful for keeping aspect ratio when rendering things like images.
*/

/*! \var UInt16          PolygonForegroundBase::_sfAspectWidth
    Useful for keeping aspect ratio when rendering things like images.
*/

/*! \var Real32          PolygonForegroundBase::_sfScale
    Scale factor for zooming.
*/

/*! \var bool            PolygonForegroundBase::_sfTile
    If true the image tiles in multi window settings.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<PolygonForeground *>::_type("PolygonForegroundPtr", "ForegroundPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(PolygonForeground *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           PolygonForeground *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           PolygonForeground *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void PolygonForegroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecPrimeMaterialPtr::Description(
        SFUnrecPrimeMaterialPtr::getClassType(),
        "material",
        "The material used to display.\n",
        MaterialFieldId, MaterialFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonForeground::editHandleMaterial),
        static_cast<FieldGetMethodSig >(&PolygonForeground::getHandleMaterial));

    oType.addInitialDesc(pDesc);

    pDesc = new MFPnt2f::Description(
        MFPnt2f::getClassType(),
        "positions",
        "The vertices of the geometry to display.\n",
        PositionsFieldId, PositionsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonForeground::editHandlePositions),
        static_cast<FieldGetMethodSig >(&PolygonForeground::getHandlePositions));

    oType.addInitialDesc(pDesc);

    pDesc = new MFVec3f::Description(
        MFVec3f::getClassType(),
        "texCoords",
        "The texture coordinates of the geometry to display.\n",
        TexCoordsFieldId, TexCoordsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonForeground::editHandleTexCoords),
        static_cast<FieldGetMethodSig >(&PolygonForeground::getHandleTexCoords));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "normalizedX",
        "Define whether the x coordinates are normalized (0-1) or pixel-based.\n",
        NormalizedXFieldId, NormalizedXFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonForeground::editHandleNormalizedX),
        static_cast<FieldGetMethodSig >(&PolygonForeground::getHandleNormalizedX));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "normalizedY",
        "Define whether the y coordinates are normalized (0-1) or pixel-based.\n",
        NormalizedYFieldId, NormalizedYFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonForeground::editHandleNormalizedY),
        static_cast<FieldGetMethodSig >(&PolygonForeground::getHandleNormalizedY));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "aspectHeight",
        "Useful for keeping aspect ratio when rendering things like images.\n",
        AspectHeightFieldId, AspectHeightFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonForeground::editHandleAspectHeight),
        static_cast<FieldGetMethodSig >(&PolygonForeground::getHandleAspectHeight));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "aspectWidth",
        "Useful for keeping aspect ratio when rendering things like images.\n",
        AspectWidthFieldId, AspectWidthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonForeground::editHandleAspectWidth),
        static_cast<FieldGetMethodSig >(&PolygonForeground::getHandleAspectWidth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "scale",
        "Scale factor for zooming.\n",
        ScaleFieldId, ScaleFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonForeground::editHandleScale),
        static_cast<FieldGetMethodSig >(&PolygonForeground::getHandleScale));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "tile",
        "If true the image tiles in multi window settings.\n",
        TileFieldId, TileFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PolygonForeground::editHandleTile),
        static_cast<FieldGetMethodSig >(&PolygonForeground::getHandleTile));

    oType.addInitialDesc(pDesc);
}


PolygonForegroundBase::TypeObject PolygonForegroundBase::_type(
    PolygonForegroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&PolygonForegroundBase::createEmptyLocal),
    PolygonForeground::initMethod,
    PolygonForeground::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&PolygonForeground::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"PolygonForeground\"\n"
    "\tparent=\"Foreground\"\n"
    "\tlibrary=\"Window\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowForegrounds\n"
    "\n"
    "A foreground that renders a single polygon used the specified material, \n"
    "see \\ref PageSystemPolygonForeground for a\n"
    "description.\n"
    "\n"
    "The polygon material is defined by _sfMaterial, the positions by _mfPositions,\n"
    "the texture coordinates by _mfTexCoords (there must be as many texture\n"
    "coordinates as positions). The interpretation of the positions is\n"
    "controlled by _sfNormalizedX and _sfNormalizedY.\n"
    "\t<Field\n"
    "\t\tname=\"material\"\n"
    "\t\ttype=\"PrimeMaterialPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe material used to display.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"positions\"\n"
    "\t\ttype=\"Pnt2f\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe vertices of the geometry to display.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"texCoords\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe texture coordinates of the geometry to display.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"normalizedX\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tDefine whether the x coordinates are normalized (0-1) or pixel-based.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"normalizedY\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tDefine whether the y coordinates are normalized (0-1) or pixel-based.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"aspectHeight\"\n"
    "\t\ttype=\"UInt16\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tUseful for keeping aspect ratio when rendering things like images.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"aspectWidth\"\n"
    "\t\ttype=\"UInt16\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tUseful for keeping aspect ratio when rendering things like images.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"scale\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tScale factor for zooming.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"tile\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tIf true the image tiles in multi window settings.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowForegrounds\n"
    "\n"
    "A foreground that renders a single polygon used the specified material, \n"
    "see \\ref PageSystemPolygonForeground for a\n"
    "description.\n"
    "\n"
    "The polygon material is defined by _sfMaterial, the positions by _mfPositions,\n"
    "the texture coordinates by _mfTexCoords (there must be as many texture\n"
    "coordinates as positions). The interpretation of the positions is\n"
    "controlled by _sfNormalizedX and _sfNormalizedY.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PolygonForegroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &PolygonForegroundBase::getType(void) const
{
    return _type;
}

UInt32 PolygonForegroundBase::getContainerSize(void) const
{
    return sizeof(PolygonForeground);
}

/*------------------------- decorator get ------------------------------*/


//! Get the PolygonForeground::_sfMaterial field.
const SFUnrecPrimeMaterialPtr *PolygonForegroundBase::getSFMaterial(void) const
{
    return &_sfMaterial;
}

SFUnrecPrimeMaterialPtr *PolygonForegroundBase::editSFMaterial       (void)
{
    editSField(MaterialFieldMask);

    return &_sfMaterial;
}

MFPnt2f *PolygonForegroundBase::editMFPositions(void)
{
    editMField(PositionsFieldMask, _mfPositions);

    return &_mfPositions;
}

const MFPnt2f *PolygonForegroundBase::getMFPositions(void) const
{
    return &_mfPositions;
}


MFVec3f *PolygonForegroundBase::editMFTexCoords(void)
{
    editMField(TexCoordsFieldMask, _mfTexCoords);

    return &_mfTexCoords;
}

const MFVec3f *PolygonForegroundBase::getMFTexCoords(void) const
{
    return &_mfTexCoords;
}


SFBool *PolygonForegroundBase::editSFNormalizedX(void)
{
    editSField(NormalizedXFieldMask);

    return &_sfNormalizedX;
}

const SFBool *PolygonForegroundBase::getSFNormalizedX(void) const
{
    return &_sfNormalizedX;
}


SFBool *PolygonForegroundBase::editSFNormalizedY(void)
{
    editSField(NormalizedYFieldMask);

    return &_sfNormalizedY;
}

const SFBool *PolygonForegroundBase::getSFNormalizedY(void) const
{
    return &_sfNormalizedY;
}


SFUInt16 *PolygonForegroundBase::editSFAspectHeight(void)
{
    editSField(AspectHeightFieldMask);

    return &_sfAspectHeight;
}

const SFUInt16 *PolygonForegroundBase::getSFAspectHeight(void) const
{
    return &_sfAspectHeight;
}


SFUInt16 *PolygonForegroundBase::editSFAspectWidth(void)
{
    editSField(AspectWidthFieldMask);

    return &_sfAspectWidth;
}

const SFUInt16 *PolygonForegroundBase::getSFAspectWidth(void) const
{
    return &_sfAspectWidth;
}


SFReal32 *PolygonForegroundBase::editSFScale(void)
{
    editSField(ScaleFieldMask);

    return &_sfScale;
}

const SFReal32 *PolygonForegroundBase::getSFScale(void) const
{
    return &_sfScale;
}


SFBool *PolygonForegroundBase::editSFTile(void)
{
    editSField(TileFieldMask);

    return &_sfTile;
}

const SFBool *PolygonForegroundBase::getSFTile(void) const
{
    return &_sfTile;
}






/*------------------------------ access -----------------------------------*/

UInt32 PolygonForegroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        returnValue += _sfMaterial.getBinSize();
    }
    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        returnValue += _mfPositions.getBinSize();
    }
    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
    {
        returnValue += _mfTexCoords.getBinSize();
    }
    if(FieldBits::NoField != (NormalizedXFieldMask & whichField))
    {
        returnValue += _sfNormalizedX.getBinSize();
    }
    if(FieldBits::NoField != (NormalizedYFieldMask & whichField))
    {
        returnValue += _sfNormalizedY.getBinSize();
    }
    if(FieldBits::NoField != (AspectHeightFieldMask & whichField))
    {
        returnValue += _sfAspectHeight.getBinSize();
    }
    if(FieldBits::NoField != (AspectWidthFieldMask & whichField))
    {
        returnValue += _sfAspectWidth.getBinSize();
    }
    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        returnValue += _sfScale.getBinSize();
    }
    if(FieldBits::NoField != (TileFieldMask & whichField))
    {
        returnValue += _sfTile.getBinSize();
    }

    return returnValue;
}

void PolygonForegroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        _sfMaterial.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        _mfPositions.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
    {
        _mfTexCoords.copyToBin(pMem);
    }
    if(FieldBits::NoField != (NormalizedXFieldMask & whichField))
    {
        _sfNormalizedX.copyToBin(pMem);
    }
    if(FieldBits::NoField != (NormalizedYFieldMask & whichField))
    {
        _sfNormalizedY.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AspectHeightFieldMask & whichField))
    {
        _sfAspectHeight.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AspectWidthFieldMask & whichField))
    {
        _sfAspectWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        _sfScale.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TileFieldMask & whichField))
    {
        _sfTile.copyToBin(pMem);
    }
}

void PolygonForegroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        _sfMaterial.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        _mfPositions.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
    {
        _mfTexCoords.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (NormalizedXFieldMask & whichField))
    {
        _sfNormalizedX.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (NormalizedYFieldMask & whichField))
    {
        _sfNormalizedY.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AspectHeightFieldMask & whichField))
    {
        _sfAspectHeight.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AspectWidthFieldMask & whichField))
    {
        _sfAspectWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        _sfScale.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TileFieldMask & whichField))
    {
        _sfTile.copyFromBin(pMem);
    }
}

//! create a new instance of the class
PolygonForegroundTransitPtr PolygonForegroundBase::createLocal(BitVector bFlags)
{
    PolygonForegroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<PolygonForeground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
PolygonForegroundTransitPtr PolygonForegroundBase::createDependent(BitVector bFlags)
{
    PolygonForegroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<PolygonForeground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
PolygonForegroundTransitPtr PolygonForegroundBase::create(void)
{
    PolygonForegroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<PolygonForeground>(tmpPtr);
    }

    return fc;
}

PolygonForeground *PolygonForegroundBase::createEmptyLocal(BitVector bFlags)
{
    PolygonForeground *returnValue;

    newPtr<PolygonForeground>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
PolygonForeground *PolygonForegroundBase::createEmpty(void)
{
    PolygonForeground *returnValue;

    newPtr<PolygonForeground>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr PolygonForegroundBase::shallowCopyLocal(
    BitVector bFlags) const
{
    PolygonForeground *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PolygonForeground *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr PolygonForegroundBase::shallowCopyDependent(
    BitVector bFlags) const
{
    PolygonForeground *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PolygonForeground *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr PolygonForegroundBase::shallowCopy(void) const
{
    PolygonForeground *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const PolygonForeground *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

PolygonForegroundBase::PolygonForegroundBase(void) :
    Inherited(),
    _sfMaterial               (NULL),
    _mfPositions              (),
    _mfTexCoords              (),
    _sfNormalizedX            (bool(true)),
    _sfNormalizedY            (bool(true)),
    _sfAspectHeight           (UInt16(0)),
    _sfAspectWidth            (UInt16(0)),
    _sfScale                  (Real32(1.0)),
    _sfTile                   (bool(true))
{
}

PolygonForegroundBase::PolygonForegroundBase(const PolygonForegroundBase &source) :
    Inherited(source),
    _sfMaterial               (NULL),
    _mfPositions              (source._mfPositions              ),
    _mfTexCoords              (source._mfTexCoords              ),
    _sfNormalizedX            (source._sfNormalizedX            ),
    _sfNormalizedY            (source._sfNormalizedY            ),
    _sfAspectHeight           (source._sfAspectHeight           ),
    _sfAspectWidth            (source._sfAspectWidth            ),
    _sfScale                  (source._sfScale                  ),
    _sfTile                   (source._sfTile                   )
{
}


/*-------------------------- destructors ----------------------------------*/

PolygonForegroundBase::~PolygonForegroundBase(void)
{
}

void PolygonForegroundBase::onCreate(const PolygonForeground *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        PolygonForeground *pThis = static_cast<PolygonForeground *>(this);

        pThis->setMaterial(source->getMaterial());
    }
}

GetFieldHandlePtr PolygonForegroundBase::getHandleMaterial        (void) const
{
    SFUnrecPrimeMaterialPtr::GetHandlePtr returnValue(
        new  SFUnrecPrimeMaterialPtr::GetHandle(
             &_sfMaterial,
             this->getType().getFieldDesc(MaterialFieldId),
             const_cast<PolygonForegroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonForegroundBase::editHandleMaterial       (void)
{
    SFUnrecPrimeMaterialPtr::EditHandlePtr returnValue(
        new  SFUnrecPrimeMaterialPtr::EditHandle(
             &_sfMaterial,
             this->getType().getFieldDesc(MaterialFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&PolygonForeground::setMaterial,
                    static_cast<PolygonForeground *>(this), _1));

    editSField(MaterialFieldMask);

    return returnValue;
}

GetFieldHandlePtr PolygonForegroundBase::getHandlePositions       (void) const
{
    MFPnt2f::GetHandlePtr returnValue(
        new  MFPnt2f::GetHandle(
             &_mfPositions,
             this->getType().getFieldDesc(PositionsFieldId),
             const_cast<PolygonForegroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonForegroundBase::editHandlePositions      (void)
{
    MFPnt2f::EditHandlePtr returnValue(
        new  MFPnt2f::EditHandle(
             &_mfPositions,
             this->getType().getFieldDesc(PositionsFieldId),
             this));


    editMField(PositionsFieldMask, _mfPositions);

    return returnValue;
}

GetFieldHandlePtr PolygonForegroundBase::getHandleTexCoords       (void) const
{
    MFVec3f::GetHandlePtr returnValue(
        new  MFVec3f::GetHandle(
             &_mfTexCoords,
             this->getType().getFieldDesc(TexCoordsFieldId),
             const_cast<PolygonForegroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonForegroundBase::editHandleTexCoords      (void)
{
    MFVec3f::EditHandlePtr returnValue(
        new  MFVec3f::EditHandle(
             &_mfTexCoords,
             this->getType().getFieldDesc(TexCoordsFieldId),
             this));


    editMField(TexCoordsFieldMask, _mfTexCoords);

    return returnValue;
}

GetFieldHandlePtr PolygonForegroundBase::getHandleNormalizedX     (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfNormalizedX,
             this->getType().getFieldDesc(NormalizedXFieldId),
             const_cast<PolygonForegroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonForegroundBase::editHandleNormalizedX    (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfNormalizedX,
             this->getType().getFieldDesc(NormalizedXFieldId),
             this));


    editSField(NormalizedXFieldMask);

    return returnValue;
}

GetFieldHandlePtr PolygonForegroundBase::getHandleNormalizedY     (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfNormalizedY,
             this->getType().getFieldDesc(NormalizedYFieldId),
             const_cast<PolygonForegroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonForegroundBase::editHandleNormalizedY    (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfNormalizedY,
             this->getType().getFieldDesc(NormalizedYFieldId),
             this));


    editSField(NormalizedYFieldMask);

    return returnValue;
}

GetFieldHandlePtr PolygonForegroundBase::getHandleAspectHeight    (void) const
{
    SFUInt16::GetHandlePtr returnValue(
        new  SFUInt16::GetHandle(
             &_sfAspectHeight,
             this->getType().getFieldDesc(AspectHeightFieldId),
             const_cast<PolygonForegroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonForegroundBase::editHandleAspectHeight   (void)
{
    SFUInt16::EditHandlePtr returnValue(
        new  SFUInt16::EditHandle(
             &_sfAspectHeight,
             this->getType().getFieldDesc(AspectHeightFieldId),
             this));


    editSField(AspectHeightFieldMask);

    return returnValue;
}

GetFieldHandlePtr PolygonForegroundBase::getHandleAspectWidth     (void) const
{
    SFUInt16::GetHandlePtr returnValue(
        new  SFUInt16::GetHandle(
             &_sfAspectWidth,
             this->getType().getFieldDesc(AspectWidthFieldId),
             const_cast<PolygonForegroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonForegroundBase::editHandleAspectWidth    (void)
{
    SFUInt16::EditHandlePtr returnValue(
        new  SFUInt16::EditHandle(
             &_sfAspectWidth,
             this->getType().getFieldDesc(AspectWidthFieldId),
             this));


    editSField(AspectWidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr PolygonForegroundBase::getHandleScale           (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfScale,
             this->getType().getFieldDesc(ScaleFieldId),
             const_cast<PolygonForegroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonForegroundBase::editHandleScale          (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfScale,
             this->getType().getFieldDesc(ScaleFieldId),
             this));


    editSField(ScaleFieldMask);

    return returnValue;
}

GetFieldHandlePtr PolygonForegroundBase::getHandleTile            (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfTile,
             this->getType().getFieldDesc(TileFieldId),
             const_cast<PolygonForegroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PolygonForegroundBase::editHandleTile           (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfTile,
             this->getType().getFieldDesc(TileFieldId),
             this));


    editSField(TileFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void PolygonForegroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    PolygonForeground *pThis = static_cast<PolygonForeground *>(this);

    pThis->execSync(static_cast<PolygonForeground *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *PolygonForegroundBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    PolygonForeground *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PolygonForeground *>(pRefAspect),
                  dynamic_cast<const PolygonForeground *>(this));

    return returnValue;
}
#endif

void PolygonForegroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<PolygonForeground *>(this)->setMaterial(NULL);

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfPositions.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfTexCoords.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE

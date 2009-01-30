/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class TransformationInterfaceSensor!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TransformationInterfaceSensorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 TransformationInterfaceSensorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 TransformationInterfaceSensorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the TransformationInterfaceSensor::_sfTransformation field.

inline
Matrix &TransformationInterfaceSensorBase::editTransformation(void)
{
    editSField(TransformationFieldMask);

    return _sfTransformation.getValue();
}

//! Get the value of the TransformationInterfaceSensor::_sfTransformation field.
inline
const Matrix &TransformationInterfaceSensorBase::getTransformation(void) const
{
    return _sfTransformation.getValue();
}

//! Set the value of the TransformationInterfaceSensor::_sfTransformation field.
inline
void TransformationInterfaceSensorBase::setTransformation(const Matrix &value)
{
    editSField(TransformationFieldMask);

    _sfTransformation.setValue(value);
}
//! Get the value of the TransformationInterfaceSensor::_sfTranslation field.

inline
Vec3f &TransformationInterfaceSensorBase::editTranslation(void)
{
    editSField(TranslationFieldMask);

    return _sfTranslation.getValue();
}

//! Get the value of the TransformationInterfaceSensor::_sfTranslation field.
inline
const Vec3f &TransformationInterfaceSensorBase::getTranslation(void) const
{
    return _sfTranslation.getValue();
}

//! Set the value of the TransformationInterfaceSensor::_sfTranslation field.
inline
void TransformationInterfaceSensorBase::setTranslation(const Vec3f &value)
{
    editSField(TranslationFieldMask);

    _sfTranslation.setValue(value);
}
//! Get the value of the TransformationInterfaceSensor::_sfRotation field.

inline
Quaternion &TransformationInterfaceSensorBase::editRotation(void)
{
    editSField(RotationFieldMask);

    return _sfRotation.getValue();
}

//! Get the value of the TransformationInterfaceSensor::_sfRotation field.
inline
const Quaternion &TransformationInterfaceSensorBase::getRotation(void) const
{
    return _sfRotation.getValue();
}

//! Set the value of the TransformationInterfaceSensor::_sfRotation field.
inline
void TransformationInterfaceSensorBase::setRotation(const Quaternion &value)
{
    editSField(RotationFieldMask);

    _sfRotation.setValue(value);
}
//! Get the value of the TransformationInterfaceSensor::_sfRotationScale field.

inline
Real32 &TransformationInterfaceSensorBase::editRotationScale(void)
{
    editSField(RotationScaleFieldMask);

    return _sfRotationScale.getValue();
}

//! Get the value of the TransformationInterfaceSensor::_sfRotationScale field.
inline
      Real32  TransformationInterfaceSensorBase::getRotationScale(void) const
{
    return _sfRotationScale.getValue();
}

//! Set the value of the TransformationInterfaceSensor::_sfRotationScale field.
inline
void TransformationInterfaceSensorBase::setRotationScale(const Real32 value)
{
    editSField(RotationScaleFieldMask);

    _sfRotationScale.setValue(value);
}
//! Get the value of the TransformationInterfaceSensor::_sfTranslationScale field.

inline
Real32 &TransformationInterfaceSensorBase::editTranslationScale(void)
{
    editSField(TranslationScaleFieldMask);

    return _sfTranslationScale.getValue();
}

//! Get the value of the TransformationInterfaceSensor::_sfTranslationScale field.
inline
      Real32  TransformationInterfaceSensorBase::getTranslationScale(void) const
{
    return _sfTranslationScale.getValue();
}

//! Set the value of the TransformationInterfaceSensor::_sfTranslationScale field.
inline
void TransformationInterfaceSensorBase::setTranslationScale(const Real32 value)
{
    editSField(TranslationScaleFieldMask);

    _sfTranslationScale.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void TransformationInterfaceSensorBase::execSync (      TransformationInterfaceSensorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (TransformationFieldMask & whichField))
        _sfTransformation.syncWith(pFrom->_sfTransformation);

    if(FieldBits::NoField != (TranslationFieldMask & whichField))
        _sfTranslation.syncWith(pFrom->_sfTranslation);

    if(FieldBits::NoField != (RotationFieldMask & whichField))
        _sfRotation.syncWith(pFrom->_sfRotation);

    if(FieldBits::NoField != (RotationScaleFieldMask & whichField))
        _sfRotationScale.syncWith(pFrom->_sfRotationScale);

    if(FieldBits::NoField != (TranslationScaleFieldMask & whichField))
        _sfTranslationScale.syncWith(pFrom->_sfTranslationScale);
}
#endif


inline
const Char8 *TransformationInterfaceSensorBase::getClassname(void)
{
    return "TransformationInterfaceSensor";
}
OSG_GEN_CONTAINERPTR(TransformationInterfaceSensor);

OSG_END_NAMESPACE


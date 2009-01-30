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
 **     class TransformationInterfaceSensor
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTRANSFORMATIONINTERFACESENSORBASE_H_
#define _OSGTRANSFORMATIONINTERFACESENSORBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribCSMDef.h"

#include "OSGBaseTypes.h"

#include "OSGDeviceInterfaceSensor.h" // Parent

#include "OSGMatrixFields.h" // Transformation type
#include "OSGVec3fFields.h" // Translation type
#include "OSGQuaternionFields.h" // Rotation type
#include "OSGReal32Fields.h" // RotationScale type
#include "OSGReal32Fields.h" // TranslationScale type

#include "OSGTransformationInterfaceSensorFields.h"

OSG_BEGIN_NAMESPACE

class TransformationInterfaceSensor;

//! \brief TransformationInterfaceSensor Base Class.

class OSG_CONTRIBCSM_DLLMAPPING TransformationInterfaceSensorBase : public DeviceInterfaceSensor
{
  public:

    typedef DeviceInterfaceSensor Inherited;
    typedef DeviceInterfaceSensor ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(TransformationInterfaceSensor);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        TransformationFieldId = Inherited::NextFieldId,
        TranslationFieldId = TransformationFieldId + 1,
        RotationFieldId = TranslationFieldId + 1,
        RotationScaleFieldId = RotationFieldId + 1,
        TranslationScaleFieldId = RotationScaleFieldId + 1,
        NextFieldId = TranslationScaleFieldId + 1
    };

    static const OSG::BitVector TransformationFieldMask =
        (TypeTraits<BitVector>::One << TransformationFieldId);
    static const OSG::BitVector TranslationFieldMask =
        (TypeTraits<BitVector>::One << TranslationFieldId);
    static const OSG::BitVector RotationFieldMask =
        (TypeTraits<BitVector>::One << RotationFieldId);
    static const OSG::BitVector RotationScaleFieldMask =
        (TypeTraits<BitVector>::One << RotationScaleFieldId);
    static const OSG::BitVector TranslationScaleFieldMask =
        (TypeTraits<BitVector>::One << TranslationScaleFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFMatrix          SFTransformationType;
    typedef SFVec3f           SFTranslationType;
    typedef SFQuaternion      SFRotationType;
    typedef SFReal32          SFRotationScaleType;
    typedef SFReal32          SFTranslationScaleType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFMatrix            *editSFTransformation (void);
            const SFMatrix            *getSFTransformation  (void) const;

                  SFVec3f             *editSFTranslation    (void);
            const SFVec3f             *getSFTranslation     (void) const;

                  SFQuaternion        *editSFRotation       (void);
            const SFQuaternion        *getSFRotation        (void) const;

                  SFReal32            *editSFRotationScale  (void);
            const SFReal32            *getSFRotationScale   (void) const;


                  Matrix              &editTransformation (void);
            const Matrix              &getTransformation  (void) const;

                  Vec3f               &editTranslation    (void);
            const Vec3f               &getTranslation     (void) const;

                  Quaternion          &editRotation       (void);
            const Quaternion          &getRotation        (void) const;

                  Real32              &editRotationScale  (void);
                  Real32               getRotationScale   (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setTransformation (const Matrix &value);
            void setTranslation    (const Vec3f &value);
            void setRotation       (const Quaternion &value);
            void setRotationScale  (const Real32 value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  TransformationInterfaceSensorTransitPtr  create          (void);
    static  TransformationInterfaceSensor           *createEmpty     (void);

    static  TransformationInterfaceSensorTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  TransformationInterfaceSensor            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  TransformationInterfaceSensorTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFMatrix          _sfTransformation;
    SFVec3f           _sfTranslation;
    SFQuaternion      _sfRotation;
    SFReal32          _sfRotationScale;
    SFReal32          _sfTranslationScale;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TransformationInterfaceSensorBase(void);
    TransformationInterfaceSensorBase(const TransformationInterfaceSensorBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TransformationInterfaceSensorBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleTransformation  (void) const;
    EditFieldHandlePtr editHandleTransformation (void);
    GetFieldHandlePtr  getHandleTranslation     (void) const;
    EditFieldHandlePtr editHandleTranslation    (void);
    GetFieldHandlePtr  getHandleRotation        (void) const;
    EditFieldHandlePtr editHandleRotation       (void);
    GetFieldHandlePtr  getHandleRotationScale   (void) const;
    EditFieldHandlePtr editHandleRotationScale  (void);
    GetFieldHandlePtr  getHandleTranslationScale (void) const;
    EditFieldHandlePtr editHandleTranslationScale(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFReal32            *editSFTranslationScale(void);
            const SFReal32            *getSFTranslationScale (void) const;


                  Real32              &editTranslationScale(void);
                  Real32               getTranslationScale (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setTranslationScale(const Real32 value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      TransformationInterfaceSensorBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TransformationInterfaceSensorBase &source);
};

typedef TransformationInterfaceSensorBase *TransformationInterfaceSensorBaseP;

OSG_END_NAMESPACE

#endif /* _OSGTRANSFORMATIONINTERFACESENSORBASE_H_ */

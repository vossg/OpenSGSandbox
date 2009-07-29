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
 **     class AlgorithmStage
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGALGORITHMSTAGEBASE_H_
#define _OSGALGORITHMSTAGEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGGroupDef.h"

//#include "OSGBaseTypes.h"

#include "OSGStage.h" // Parent

#include "OSGAlgorithmFields.h"         // Algorithm type
#include "OSGSysFields.h"               // ProjectionMode type
#include "OSGMathFields.h"              // ProjectionMatrix type

#include "OSGAlgorithmStageFields.h"

OSG_BEGIN_NAMESPACE

class AlgorithmStage;

//! \brief AlgorithmStage Base Class.

class OSG_GROUP_DLLMAPPING AlgorithmStageBase : public Stage
{
  public:

    typedef Stage Inherited;
    typedef Stage ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(AlgorithmStage);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        AlgorithmFieldId = Inherited::NextFieldId,
        ProjectionModeFieldId = AlgorithmFieldId + 1,
        CopyViewingFieldId = ProjectionModeFieldId + 1,
        ProjectionMatrixFieldId = CopyViewingFieldId + 1,
        NextFieldId = ProjectionMatrixFieldId + 1
    };

    static const OSG::BitVector AlgorithmFieldMask =
        (TypeTraits<BitVector>::One << AlgorithmFieldId);
    static const OSG::BitVector ProjectionModeFieldMask =
        (TypeTraits<BitVector>::One << ProjectionModeFieldId);
    static const OSG::BitVector CopyViewingFieldMask =
        (TypeTraits<BitVector>::One << CopyViewingFieldId);
    static const OSG::BitVector ProjectionMatrixFieldMask =
        (TypeTraits<BitVector>::One << ProjectionMatrixFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecAlgorithmPtr SFAlgorithmType;
    typedef SFUInt32          SFProjectionModeType;
    typedef SFBool            SFCopyViewingType;
    typedef SFMatrix          SFProjectionMatrixType;

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

            const SFUnrecAlgorithmPtr *getSFAlgorithm      (void) const;
                  SFUnrecAlgorithmPtr *editSFAlgorithm      (void);

                  SFUInt32            *editSFProjectionMode (void);
            const SFUInt32            *getSFProjectionMode  (void) const;

                  SFBool              *editSFCopyViewing    (void);
            const SFBool              *getSFCopyViewing     (void) const;

                  SFMatrix            *editSFProjectionMatrix(void);
            const SFMatrix            *getSFProjectionMatrix (void) const;


                  Algorithm * getAlgorithm      (void) const;

                  UInt32              &editProjectionMode (void);
                  UInt32               getProjectionMode  (void) const;

                  bool                &editCopyViewing    (void);
                  bool                 getCopyViewing     (void) const;

                  Matrix              &editProjectionMatrix(void);
            const Matrix              &getProjectionMatrix (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setAlgorithm      (Algorithm * const value);
            void setProjectionMode (const UInt32 value);
            void setCopyViewing    (const bool value);
            void setProjectionMatrix(const Matrix &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

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

    static  AlgorithmStageTransitPtr  create          (void);
    static  AlgorithmStage           *createEmpty     (void);

    static  AlgorithmStageTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  AlgorithmStage            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  AlgorithmStageTransitPtr  createDependent  (BitVector bFlags);

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

    SFUnrecAlgorithmPtr _sfAlgorithm;
    SFUInt32          _sfProjectionMode;
    SFBool            _sfCopyViewing;
    SFMatrix          _sfProjectionMatrix;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    AlgorithmStageBase(void);
    AlgorithmStageBase(const AlgorithmStageBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~AlgorithmStageBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const AlgorithmStage *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleAlgorithm       (void) const;
    EditFieldHandlePtr editHandleAlgorithm      (void);
    GetFieldHandlePtr  getHandleProjectionMode  (void) const;
    EditFieldHandlePtr editHandleProjectionMode (void);
    GetFieldHandlePtr  getHandleCopyViewing     (void) const;
    EditFieldHandlePtr editHandleCopyViewing    (void);
    GetFieldHandlePtr  getHandleProjectionMatrix (void) const;
    EditFieldHandlePtr editHandleProjectionMatrix(void);

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

            void execSync (      AlgorithmStageBase *pFrom,
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
    void operator =(const AlgorithmStageBase &source);
};

typedef AlgorithmStageBase *AlgorithmStageBaseP;

typedef CoredNodeRefPtr  <AlgorithmStage> AlgorithmStageNodeRefPtr;
typedef CoredNodeMTRefPtr<AlgorithmStage> AlgorithmStageNodeMTRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGALGORITHMSTAGEBASE_H_ */

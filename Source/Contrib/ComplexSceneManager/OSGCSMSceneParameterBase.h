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
 **     class CSMSceneParameter
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCSMSCENEPARAMETERBASE_H_
#define _OSGCSMSCENEPARAMETERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribCSMDef.h"

//#include "OSGBaseTypes.h"

#include "OSGAttachmentContainer.h" // Parent

#include "OSGNodeFields.h"              // SceneRef type
#include "OSGSysFields.h"               // DistScale type
#include "OSGVecFields.h"               // SceneDiag type

#include "OSGCSMSceneParameterFields.h"

OSG_BEGIN_NAMESPACE

class CSMSceneParameter;

//! \brief CSMSceneParameter Base Class.

class OSG_CONTRIBCSM_DLLMAPPING CSMSceneParameterBase : public AttachmentContainer
{
  public:

    typedef AttachmentContainer Inherited;
    typedef AttachmentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(CSMSceneParameter);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        SceneRefFieldId = Inherited::NextFieldId,
        DistScaleFieldId = SceneRefFieldId + 1,
        SceneDiagFieldId = DistScaleFieldId + 1,
        InitViewPosFieldId = SceneDiagFieldId + 1,
        SceneCenterFieldId = InitViewPosFieldId + 1,
        NextFieldId = SceneCenterFieldId + 1
    };

    static const OSG::BitVector SceneRefFieldMask =
        (TypeTraits<BitVector>::One << SceneRefFieldId);
    static const OSG::BitVector DistScaleFieldMask =
        (TypeTraits<BitVector>::One << DistScaleFieldId);
    static const OSG::BitVector SceneDiagFieldMask =
        (TypeTraits<BitVector>::One << SceneDiagFieldId);
    static const OSG::BitVector InitViewPosFieldMask =
        (TypeTraits<BitVector>::One << InitViewPosFieldId);
    static const OSG::BitVector SceneCenterFieldMask =
        (TypeTraits<BitVector>::One << SceneCenterFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecNodePtr    SFSceneRefType;
    typedef SFReal32          SFDistScaleType;
    typedef SFVec3f           SFSceneDiagType;
    typedef SFPnt3f           SFInitViewPosType;
    typedef SFPnt3f           SFSceneCenterType;

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

            const SFUnrecNodePtr      *getSFSceneRef       (void) const;
                  SFUnrecNodePtr      *editSFSceneRef       (void);

                  SFReal32            *editSFDistScale      (void);
            const SFReal32            *getSFDistScale       (void) const;

                  SFVec3f             *editSFSceneDiag      (void);
            const SFVec3f             *getSFSceneDiag       (void) const;

                  SFPnt3f             *editSFInitViewPos    (void);
            const SFPnt3f             *getSFInitViewPos     (void) const;

                  SFPnt3f             *editSFSceneCenter    (void);
            const SFPnt3f             *getSFSceneCenter     (void) const;


                  Node * getSceneRef       (void) const;

                  Real32              &editDistScale      (void);
                  Real32               getDistScale       (void) const;

                  Vec3f               &editSceneDiag      (void);
            const Vec3f               &getSceneDiag       (void) const;

                  Pnt3f               &editInitViewPos    (void);
            const Pnt3f               &getInitViewPos     (void) const;

                  Pnt3f               &editSceneCenter    (void);
            const Pnt3f               &getSceneCenter     (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setSceneRef       (Node * const value);
            void setDistScale      (const Real32 value);
            void setSceneDiag      (const Vec3f &value);
            void setInitViewPos    (const Pnt3f &value);
            void setSceneCenter    (const Pnt3f &value);

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

    static  CSMSceneParameterTransitPtr  create          (void);
    static  CSMSceneParameter           *createEmpty     (void);

    static  CSMSceneParameterTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  CSMSceneParameter            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  CSMSceneParameterTransitPtr  createDependent  (BitVector bFlags);

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

    SFUnrecNodePtr    _sfSceneRef;
    SFReal32          _sfDistScale;
    SFVec3f           _sfSceneDiag;
    SFPnt3f           _sfInitViewPos;
    SFPnt3f           _sfSceneCenter;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    CSMSceneParameterBase(void);
    CSMSceneParameterBase(const CSMSceneParameterBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~CSMSceneParameterBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const CSMSceneParameter *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleSceneRef        (void) const;
    EditFieldHandlePtr editHandleSceneRef       (void);
    GetFieldHandlePtr  getHandleDistScale       (void) const;
    EditFieldHandlePtr editHandleDistScale      (void);
    GetFieldHandlePtr  getHandleSceneDiag       (void) const;
    EditFieldHandlePtr editHandleSceneDiag      (void);
    GetFieldHandlePtr  getHandleInitViewPos     (void) const;
    EditFieldHandlePtr editHandleInitViewPos    (void);
    GetFieldHandlePtr  getHandleSceneCenter     (void) const;
    EditFieldHandlePtr editHandleSceneCenter    (void);

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

            void execSync (      CSMSceneParameterBase *pFrom,
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
    void operator =(const CSMSceneParameterBase &source);
};

typedef CSMSceneParameterBase *CSMSceneParameterBaseP;

OSG_END_NAMESPACE

#endif /* _OSGCSMSCENEPARAMETERBASE_H_ */

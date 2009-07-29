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
 **     class DisplayFilterGroup
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDISPLAYFILTERGROUPBASE_H_
#define _OSGDISPLAYFILTERGROUPBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGEffectGroupsDef.h"

//#include "OSGBaseTypes.h"

#include "OSGAttachmentContainer.h" // Parent

#include "OSGResolutionDisplayFilterFields.h" // ResolutionFilter type
#include "OSGColorDisplayFilterFields.h" // ColorFilter type
#include "OSGDistortionDisplayFilterFields.h" // DistortionFilter type
#include "OSGSysFields.h"               // DrawerId type

#include "OSGDisplayFilterGroupFields.h"

OSG_BEGIN_NAMESPACE

class DisplayFilterGroup;

//! \brief DisplayFilterGroup Base Class.

class OSG_EFFECTGROUPS_DLLMAPPING DisplayFilterGroupBase : public AttachmentContainer
{
  public:

    typedef AttachmentContainer Inherited;
    typedef AttachmentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(DisplayFilterGroup);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ResolutionFilterFieldId = Inherited::NextFieldId,
        ColorFilterFieldId = ResolutionFilterFieldId + 1,
        DistortionFilterFieldId = ColorFilterFieldId + 1,
        DrawerIdFieldId = DistortionFilterFieldId + 1,
        DrawableIdFieldId = DrawerIdFieldId + 1,
        NextFieldId = DrawableIdFieldId + 1
    };

    static const OSG::BitVector ResolutionFilterFieldMask =
        (TypeTraits<BitVector>::One << ResolutionFilterFieldId);
    static const OSG::BitVector ColorFilterFieldMask =
        (TypeTraits<BitVector>::One << ColorFilterFieldId);
    static const OSG::BitVector DistortionFilterFieldMask =
        (TypeTraits<BitVector>::One << DistortionFilterFieldId);
    static const OSG::BitVector DrawerIdFieldMask =
        (TypeTraits<BitVector>::One << DrawerIdFieldId);
    static const OSG::BitVector DrawableIdFieldMask =
        (TypeTraits<BitVector>::One << DrawableIdFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecResolutionDisplayFilterPtr SFResolutionFilterType;
    typedef SFUnrecColorDisplayFilterPtr SFColorFilterType;
    typedef SFUnrecDistortionDisplayFilterPtr SFDistortionFilterType;
    typedef SFInt32           SFDrawerIdType;
    typedef SFInt32           SFDrawableIdType;

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

            const SFUnrecResolutionDisplayFilterPtr *getSFResolutionFilter(void) const;
                  SFUnrecResolutionDisplayFilterPtr *editSFResolutionFilter(void);
            const SFUnrecColorDisplayFilterPtr *getSFColorFilter    (void) const;
                  SFUnrecColorDisplayFilterPtr *editSFColorFilter    (void);
            const SFUnrecDistortionDisplayFilterPtr *getSFDistortionFilter(void) const;
                  SFUnrecDistortionDisplayFilterPtr *editSFDistortionFilter(void);

                  SFInt32             *editSFDrawerId       (void);
            const SFInt32             *getSFDrawerId        (void) const;

                  SFInt32             *editSFDrawableId     (void);
            const SFInt32             *getSFDrawableId      (void) const;


                  ResolutionDisplayFilter * getResolutionFilter(void) const;

                  ColorDisplayFilter * getColorFilter    (void) const;

                  DistortionDisplayFilter * getDistortionFilter(void) const;

                  Int32               &editDrawerId       (void);
                  Int32                getDrawerId        (void) const;

                  Int32               &editDrawableId     (void);
                  Int32                getDrawableId      (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setResolutionFilter(ResolutionDisplayFilter * const value);
            void setColorFilter    (ColorDisplayFilter * const value);
            void setDistortionFilter(DistortionDisplayFilter * const value);
            void setDrawerId       (const Int32 value);
            void setDrawableId     (const Int32 value);

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

    static  DisplayFilterGroupTransitPtr  create          (void);
    static  DisplayFilterGroup           *createEmpty     (void);

    static  DisplayFilterGroupTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  DisplayFilterGroup            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  DisplayFilterGroupTransitPtr  createDependent  (BitVector bFlags);

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

    SFUnrecResolutionDisplayFilterPtr _sfResolutionFilter;
    SFUnrecColorDisplayFilterPtr _sfColorFilter;
    SFUnrecDistortionDisplayFilterPtr _sfDistortionFilter;
    SFInt32           _sfDrawerId;
    SFInt32           _sfDrawableId;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    DisplayFilterGroupBase(void);
    DisplayFilterGroupBase(const DisplayFilterGroupBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DisplayFilterGroupBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const DisplayFilterGroup *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleResolutionFilter (void) const;
    EditFieldHandlePtr editHandleResolutionFilter(void);
    GetFieldHandlePtr  getHandleColorFilter     (void) const;
    EditFieldHandlePtr editHandleColorFilter    (void);
    GetFieldHandlePtr  getHandleDistortionFilter (void) const;
    EditFieldHandlePtr editHandleDistortionFilter(void);
    GetFieldHandlePtr  getHandleDrawerId        (void) const;
    EditFieldHandlePtr editHandleDrawerId       (void);
    GetFieldHandlePtr  getHandleDrawableId      (void) const;
    EditFieldHandlePtr editHandleDrawableId     (void);

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

            void execSync (      DisplayFilterGroupBase *pFrom,
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
    void operator =(const DisplayFilterGroupBase &source);
};

typedef DisplayFilterGroupBase *DisplayFilterGroupBaseP;

OSG_END_NAMESPACE

#endif /* _OSGDISPLAYFILTERGROUPBASE_H_ */

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
 **     class PerfMonitorForeground
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPERFMONITORFOREGROUNDBASE_H_
#define _OSGPERFMONITORFOREGROUNDBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGUtilDef.h"

//#include "OSGBaseTypes.h"

#include "OSGForeground.h" // Parent

#include "OSGSysFields.h"               // Mode type
#include "OSGBaseFields.h"              // Color type
#include "OSGVecFields.h"               // BorderOffset type

#include "OSGPerfMonitorForegroundFields.h"

OSG_BEGIN_NAMESPACE

class PerfMonitorForeground;

//! \brief PerfMonitorForeground Base Class.

class OSG_UTIL_DLLMAPPING PerfMonitorForegroundBase : public Foreground
{
  public:

    typedef Foreground Inherited;
    typedef Foreground ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(PerfMonitorForeground);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ModeFieldId = Inherited::NextFieldId,
        MaxSizeFieldId = ModeFieldId + 1,
        ColorFieldId = MaxSizeFieldId + 1,
        BgColorFieldId = ColorFieldId + 1,
        FamilyFieldId = BgColorFieldId + 1,
        BorderColorFieldId = FamilyFieldId + 1,
        BorderOffsetFieldId = BorderColorFieldId + 1,
        TextMarginFieldId = BorderOffsetFieldId + 1,
        NextFieldId = TextMarginFieldId + 1
    };

    static const OSG::BitVector ModeFieldMask =
        (TypeTraits<BitVector>::One << ModeFieldId);
    static const OSG::BitVector MaxSizeFieldMask =
        (TypeTraits<BitVector>::One << MaxSizeFieldId);
    static const OSG::BitVector ColorFieldMask =
        (TypeTraits<BitVector>::One << ColorFieldId);
    static const OSG::BitVector BgColorFieldMask =
        (TypeTraits<BitVector>::One << BgColorFieldId);
    static const OSG::BitVector FamilyFieldMask =
        (TypeTraits<BitVector>::One << FamilyFieldId);
    static const OSG::BitVector BorderColorFieldMask =
        (TypeTraits<BitVector>::One << BorderColorFieldId);
    static const OSG::BitVector BorderOffsetFieldMask =
        (TypeTraits<BitVector>::One << BorderOffsetFieldId);
    static const OSG::BitVector TextMarginFieldMask =
        (TypeTraits<BitVector>::One << TextMarginFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUInt32          SFModeType;
    typedef SFReal32          SFMaxSizeType;
    typedef SFColor4f         SFColorType;
    typedef SFColor4f         SFBgColorType;
    typedef SFString          SFFamilyType;
    typedef SFColor4f         SFBorderColorType;
    typedef SFVec2f           SFBorderOffsetType;
    typedef SFVec2f           SFTextMarginType;

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


                  SFUInt32            *editSFMode           (void);
            const SFUInt32            *getSFMode            (void) const;

                  SFReal32            *editSFMaxSize        (void);
            const SFReal32            *getSFMaxSize         (void) const;

                  SFColor4f           *editSFColor          (void);
            const SFColor4f           *getSFColor           (void) const;

                  SFColor4f           *editSFBgColor        (void);
            const SFColor4f           *getSFBgColor         (void) const;

                  SFString            *editSFFamily         (void);
            const SFString            *getSFFamily          (void) const;

                  SFColor4f           *editSFBorderColor    (void);
            const SFColor4f           *getSFBorderColor     (void) const;

                  SFVec2f             *editSFBorderOffset   (void);
            const SFVec2f             *getSFBorderOffset    (void) const;

                  SFVec2f             *editSFTextMargin     (void);
            const SFVec2f             *getSFTextMargin      (void) const;


                  UInt32              &editMode           (void);
                  UInt32               getMode            (void) const;

                  Real32              &editMaxSize        (void);
                  Real32               getMaxSize         (void) const;

                  Color4f             &editColor          (void);
            const Color4f             &getColor           (void) const;

                  Color4f             &editBgColor        (void);
            const Color4f             &getBgColor         (void) const;

                  std::string         &editFamily         (void);
            const std::string         &getFamily          (void) const;

                  Color4f             &editBorderColor    (void);
            const Color4f             &getBorderColor     (void) const;

                  Vec2f               &editBorderOffset   (void);
            const Vec2f               &getBorderOffset    (void) const;

                  Vec2f               &editTextMargin     (void);
            const Vec2f               &getTextMargin      (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setMode           (const UInt32 value);
            void setMaxSize        (const Real32 value);
            void setColor          (const Color4f &value);
            void setBgColor        (const Color4f &value);
            void setFamily         (const std::string &value);
            void setBorderColor    (const Color4f &value);
            void setBorderOffset   (const Vec2f &value);
            void setTextMargin     (const Vec2f &value);

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

    static  PerfMonitorForegroundTransitPtr  create          (void);
    static  PerfMonitorForeground           *createEmpty     (void);

    static  PerfMonitorForegroundTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  PerfMonitorForeground            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  PerfMonitorForegroundTransitPtr  createDependent  (BitVector bFlags);

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

    SFUInt32          _sfMode;
    SFReal32          _sfMaxSize;
    SFColor4f         _sfColor;
    SFColor4f         _sfBgColor;
    SFString          _sfFamily;
    SFColor4f         _sfBorderColor;
    SFVec2f           _sfBorderOffset;
    SFVec2f           _sfTextMargin;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    PerfMonitorForegroundBase(void);
    PerfMonitorForegroundBase(const PerfMonitorForegroundBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~PerfMonitorForegroundBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleMode            (void) const;
    EditFieldHandlePtr editHandleMode           (void);
    GetFieldHandlePtr  getHandleMaxSize         (void) const;
    EditFieldHandlePtr editHandleMaxSize        (void);
    GetFieldHandlePtr  getHandleColor           (void) const;
    EditFieldHandlePtr editHandleColor          (void);
    GetFieldHandlePtr  getHandleBgColor         (void) const;
    EditFieldHandlePtr editHandleBgColor        (void);
    GetFieldHandlePtr  getHandleFamily          (void) const;
    EditFieldHandlePtr editHandleFamily         (void);
    GetFieldHandlePtr  getHandleBorderColor     (void) const;
    EditFieldHandlePtr editHandleBorderColor    (void);
    GetFieldHandlePtr  getHandleBorderOffset    (void) const;
    EditFieldHandlePtr editHandleBorderOffset   (void);
    GetFieldHandlePtr  getHandleTextMargin      (void) const;
    EditFieldHandlePtr editHandleTextMargin     (void);

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

            void execSync (      PerfMonitorForegroundBase *pFrom,
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
    void operator =(const PerfMonitorForegroundBase &source);
};

typedef PerfMonitorForegroundBase *PerfMonitorForegroundBaseP;

OSG_END_NAMESPACE

#endif /* _OSGPERFMONITORFOREGROUNDBASE_H_ */

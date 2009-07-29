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
 **     class ShearedStereoCameraDecorator
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSHEAREDSTEREOCAMERADECORATORBASE_H_
#define _OSGSHEAREDSTEREOCAMERADECORATORBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGWindowDef.h"

//#include "OSGBaseTypes.h"

#include "OSGStereoCameraDecorator.h" // Parent

#include "OSGSysFields.h"               // ZeroParallaxDistance type

#include "OSGShearedStereoCameraDecoratorFields.h"

OSG_BEGIN_NAMESPACE

class ShearedStereoCameraDecorator;

//! \brief ShearedStereoCameraDecorator Base Class.

class OSG_WINDOW_DLLMAPPING ShearedStereoCameraDecoratorBase : public StereoCameraDecorator
{
  public:

    typedef StereoCameraDecorator Inherited;
    typedef StereoCameraDecorator ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(ShearedStereoCameraDecorator);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ZeroParallaxDistanceFieldId = Inherited::NextFieldId,
        OverlapFieldId = ZeroParallaxDistanceFieldId + 1,
        NextFieldId = OverlapFieldId + 1
    };

    static const OSG::BitVector ZeroParallaxDistanceFieldMask =
        (TypeTraits<BitVector>::One << ZeroParallaxDistanceFieldId);
    static const OSG::BitVector OverlapFieldMask =
        (TypeTraits<BitVector>::One << OverlapFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFReal32          SFZeroParallaxDistanceType;
    typedef SFReal32          SFOverlapType;

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


                  SFReal32            *editSFZeroParallaxDistance(void);
            const SFReal32            *getSFZeroParallaxDistance (void) const;

                  SFReal32            *editSFOverlap        (void);
            const SFReal32            *getSFOverlap         (void) const;


                  Real32              &editZeroParallaxDistance(void);
                  Real32               getZeroParallaxDistance (void) const;

                  Real32              &editOverlap        (void);
                  Real32               getOverlap         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setZeroParallaxDistance(const Real32 value);
            void setOverlap        (const Real32 value);

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

    static  ShearedStereoCameraDecoratorTransitPtr  create          (void);
    static  ShearedStereoCameraDecorator           *createEmpty     (void);

    static  ShearedStereoCameraDecoratorTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  ShearedStereoCameraDecorator            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  ShearedStereoCameraDecoratorTransitPtr  createDependent  (BitVector bFlags);

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

    SFReal32          _sfZeroParallaxDistance;
    SFReal32          _sfOverlap;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ShearedStereoCameraDecoratorBase(void);
    ShearedStereoCameraDecoratorBase(const ShearedStereoCameraDecoratorBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ShearedStereoCameraDecoratorBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleZeroParallaxDistance (void) const;
    EditFieldHandlePtr editHandleZeroParallaxDistance(void);
    GetFieldHandlePtr  getHandleOverlap         (void) const;
    EditFieldHandlePtr editHandleOverlap        (void);

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

            void execSync (      ShearedStereoCameraDecoratorBase *pFrom,
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
    void operator =(const ShearedStereoCameraDecoratorBase &source);
};

typedef ShearedStereoCameraDecoratorBase *ShearedStereoCameraDecoratorBaseP;

OSG_END_NAMESPACE

#endif /* _OSGSHEAREDSTEREOCAMERADECORATORBASE_H_ */

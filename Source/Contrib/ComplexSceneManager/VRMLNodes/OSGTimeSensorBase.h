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
 **     class TimeSensor
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTIMESENSORBASE_H_
#define _OSGTIMESENSORBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribCSMDef.h"

//#include "OSGBaseTypes.h"

#include "OSGSensor.h" // Parent

#include "OSGSysFields.h"               // Enabled type
#include "OSGBaseFields.h"              // StartTime type

#include "OSGTimeSensorFields.h"

OSG_BEGIN_NAMESPACE

class TimeSensor;

//! \brief TimeSensor Base Class.

class OSG_CONTRIBCSM_DLLMAPPING TimeSensorBase : public Sensor
{
  public:

    typedef Sensor Inherited;
    typedef Sensor ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(TimeSensor);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        EnabledFieldId = Inherited::NextFieldId,
        IsActiveFieldId = EnabledFieldId + 1,
        LoopFieldId = IsActiveFieldId + 1,
        FractionFieldId = LoopFieldId + 1,
        StartTimeFieldId = FractionFieldId + 1,
        StopTimeFieldId = StartTimeFieldId + 1,
        CycleTimeFieldId = StopTimeFieldId + 1,
        TimeFieldId = CycleTimeFieldId + 1,
        CycleIntervalFieldId = TimeFieldId + 1,
        NextFieldId = CycleIntervalFieldId + 1
    };

    static const OSG::BitVector EnabledFieldMask =
        (TypeTraits<BitVector>::One << EnabledFieldId);
    static const OSG::BitVector IsActiveFieldMask =
        (TypeTraits<BitVector>::One << IsActiveFieldId);
    static const OSG::BitVector LoopFieldMask =
        (TypeTraits<BitVector>::One << LoopFieldId);
    static const OSG::BitVector FractionFieldMask =
        (TypeTraits<BitVector>::One << FractionFieldId);
    static const OSG::BitVector StartTimeFieldMask =
        (TypeTraits<BitVector>::One << StartTimeFieldId);
    static const OSG::BitVector StopTimeFieldMask =
        (TypeTraits<BitVector>::One << StopTimeFieldId);
    static const OSG::BitVector CycleTimeFieldMask =
        (TypeTraits<BitVector>::One << CycleTimeFieldId);
    static const OSG::BitVector TimeFieldMask =
        (TypeTraits<BitVector>::One << TimeFieldId);
    static const OSG::BitVector CycleIntervalFieldMask =
        (TypeTraits<BitVector>::One << CycleIntervalFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFBool            SFEnabledType;
    typedef SFBool            SFIsActiveType;
    typedef SFBool            SFLoopType;
    typedef SFReal32          SFFractionType;
    typedef SFTime            SFStartTimeType;
    typedef SFTime            SFStopTimeType;
    typedef SFTime            SFCycleTimeType;
    typedef SFTime            SFTimeType;
    typedef SFTime            SFCycleIntervalType;

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


                  SFBool              *editSFEnabled        (void);
            const SFBool              *getSFEnabled         (void) const;

                  SFBool              *editSFIsActive       (void);
            const SFBool              *getSFIsActive        (void) const;

                  SFBool              *editSFLoop           (void);
            const SFBool              *getSFLoop            (void) const;

                  SFReal32            *editSFFraction       (void);
            const SFReal32            *getSFFraction        (void) const;

                  SFTime              *editSFStartTime      (void);
            const SFTime              *getSFStartTime       (void) const;

                  SFTime              *editSFStopTime       (void);
            const SFTime              *getSFStopTime        (void) const;

                  SFTime              *editSFCycleTime      (void);
            const SFTime              *getSFCycleTime       (void) const;

                  SFTime              *editSFTime           (void);
            const SFTime              *getSFTime            (void) const;

                  SFTime              *editSFCycleInterval  (void);
            const SFTime              *getSFCycleInterval   (void) const;


                  bool                &editEnabled        (void);
                  bool                 getEnabled         (void) const;

                  bool                &editIsActive       (void);
                  bool                 getIsActive        (void) const;

                  bool                &editLoop           (void);
                  bool                 getLoop            (void) const;

                  Real32              &editFraction       (void);
                  Real32               getFraction        (void) const;

                  Time                &editStartTime      (void);
            const Time                &getStartTime       (void) const;

                  Time                &editStopTime       (void);
            const Time                &getStopTime        (void) const;

                  Time                &editCycleTime      (void);
            const Time                &getCycleTime       (void) const;

                  Time                &editTime           (void);
            const Time                &getTime            (void) const;

                  Time                &editCycleInterval  (void);
            const Time                &getCycleInterval   (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setEnabled        (const bool value);
            void setIsActive       (const bool value);
            void setLoop           (const bool value);
            void setFraction       (const Real32 value);
            void setStartTime      (const Time &value);
            void setStopTime       (const Time &value);
            void setCycleTime      (const Time &value);
            void setTime           (const Time &value);
            void setCycleInterval  (const Time &value);

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

    static  TimeSensorTransitPtr  create          (void);
    static  TimeSensor           *createEmpty     (void);

    static  TimeSensorTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  TimeSensor            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  TimeSensorTransitPtr  createDependent  (BitVector bFlags);

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

    SFBool            _sfEnabled;
    SFBool            _sfIsActive;
    SFBool            _sfLoop;
    SFReal32          _sfFraction;
    SFTime            _sfStartTime;
    SFTime            _sfStopTime;
    SFTime            _sfCycleTime;
    SFTime            _sfTime;
    SFTime            _sfCycleInterval;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TimeSensorBase(void);
    TimeSensorBase(const TimeSensorBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TimeSensorBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleEnabled         (void) const;
    EditFieldHandlePtr editHandleEnabled        (void);
    GetFieldHandlePtr  getHandleIsActive        (void) const;
    EditFieldHandlePtr editHandleIsActive       (void);
    GetFieldHandlePtr  getHandleLoop            (void) const;
    EditFieldHandlePtr editHandleLoop           (void);
    GetFieldHandlePtr  getHandleFraction        (void) const;
    EditFieldHandlePtr editHandleFraction       (void);
    GetFieldHandlePtr  getHandleStartTime       (void) const;
    EditFieldHandlePtr editHandleStartTime      (void);
    GetFieldHandlePtr  getHandleStopTime        (void) const;
    EditFieldHandlePtr editHandleStopTime       (void);
    GetFieldHandlePtr  getHandleCycleTime       (void) const;
    EditFieldHandlePtr editHandleCycleTime      (void);
    GetFieldHandlePtr  getHandleTime            (void) const;
    EditFieldHandlePtr editHandleTime           (void);
    GetFieldHandlePtr  getHandleCycleInterval   (void) const;
    EditFieldHandlePtr editHandleCycleInterval  (void);

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

            void execSync (      TimeSensorBase *pFrom,
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
    void operator =(const TimeSensorBase &source);
};

typedef TimeSensorBase *TimeSensorBaseP;

OSG_END_NAMESPACE

#endif /* _OSGTIMESENSORBASE_H_ */

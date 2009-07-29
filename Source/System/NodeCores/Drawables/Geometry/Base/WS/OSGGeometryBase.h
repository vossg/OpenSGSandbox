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
 **     class Geometry
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGGEOMETRYBASE_H_
#define _OSGGEOMETRYBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGDrawableDef.h"

//#include "OSGBaseTypes.h"

#include "OSGMaterialDrawable.h" // Parent

#include "OSGGeoIntegralPropertyFields.h" // Types type
#include "OSGGeoVectorPropertyFields.h" // Properties type
#include "OSGSysFields.h"               // DlistCache type

#include "OSGGeometryFields.h"

OSG_BEGIN_NAMESPACE

class Geometry;

//! \brief Geometry Base Class.

class OSG_DRAWABLE_DLLMAPPING GeometryBase : public MaterialDrawable
{
  public:

    typedef MaterialDrawable Inherited;
    typedef MaterialDrawable ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(Geometry);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        TypesFieldId = Inherited::NextFieldId,
        LengthsFieldId = TypesFieldId + 1,
        PropertiesFieldId = LengthsFieldId + 1,
        PropIndicesFieldId = PropertiesFieldId + 1,
        DlistCacheFieldId = PropIndicesFieldId + 1,
        ClassicGLIdFieldId = DlistCacheFieldId + 1,
        AttGLIdFieldId = ClassicGLIdFieldId + 1,
        NextFieldId = AttGLIdFieldId + 1
    };

    static const OSG::BitVector TypesFieldMask =
        (TypeTraits<BitVector>::One << TypesFieldId);
    static const OSG::BitVector LengthsFieldMask =
        (TypeTraits<BitVector>::One << LengthsFieldId);
    static const OSG::BitVector PropertiesFieldMask =
        (TypeTraits<BitVector>::One << PropertiesFieldId);
    static const OSG::BitVector PropIndicesFieldMask =
        (TypeTraits<BitVector>::One << PropIndicesFieldId);
    static const OSG::BitVector DlistCacheFieldMask =
        (TypeTraits<BitVector>::One << DlistCacheFieldId);
    static const OSG::BitVector ClassicGLIdFieldMask =
        (TypeTraits<BitVector>::One << ClassicGLIdFieldId);
    static const OSG::BitVector AttGLIdFieldMask =
        (TypeTraits<BitVector>::One << AttGLIdFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecChildGeoIntegralPropertyPtr SFTypesType;
    typedef SFUnrecChildGeoIntegralPropertyPtr SFLengthsType;
    typedef MFUnrecChildGeoVectorPropertyPtr MFPropertiesType;
    typedef MFUnrecChildGeoIntegralPropertyPtr MFPropIndicesType;
    typedef SFBool            SFDlistCacheType;
    typedef SFInt32           SFClassicGLIdType;
    typedef SFInt32           SFAttGLIdType;

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

            const SFUnrecChildGeoIntegralPropertyPtr *getSFTypes          (void) const;
                  SFUnrecChildGeoIntegralPropertyPtr *editSFTypes          (void);
            const SFUnrecChildGeoIntegralPropertyPtr *getSFLengths        (void) const;
                  SFUnrecChildGeoIntegralPropertyPtr *editSFLengths        (void);
            const MFUnrecChildGeoVectorPropertyPtr *getMFProperties     (void) const;
                  MFUnrecChildGeoVectorPropertyPtr *editMFProperties     (void);
            const MFUnrecChildGeoIntegralPropertyPtr *getMFPropIndices    (void) const;
                  MFUnrecChildGeoIntegralPropertyPtr *editMFPropIndices    (void);

                  SFBool              *editSFDlistCache     (void);
            const SFBool              *getSFDlistCache      (void) const;


                  GeoIntegralProperty * getTypes          (void) const;

                  GeoIntegralProperty * getLengths        (void) const;

                  GeoVectorProperty * getProperties     (const UInt32 index) const;

                  GeoIntegralProperty * getPropIndices    (const UInt32 index) const;

                  bool                &editDlistCache     (void);
                  bool                 getDlistCache      (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setTypes          (GeoIntegralProperty * const value);
            void setLengths        (GeoIntegralProperty * const value);
            void setDlistCache     (const bool value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToProperties           (GeoVectorProperty * const value   );
    void assignProperties          (const MFUnrecChildGeoVectorPropertyPtr &value);
    void removeFromProperties (UInt32               uiIndex );
    void removeObjFromProperties(GeoVectorProperty * const value   );
    void clearProperties            (void                         );

    void pushToPropIndices           (GeoIntegralProperty * const value   );
    void assignPropIndices          (const MFUnrecChildGeoIntegralPropertyPtr &value);
    void removeFromPropIndices (UInt32               uiIndex );
    void removeObjFromPropIndices(GeoIntegralProperty * const value   );
    void clearPropIndices            (void                         );

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

    static  GeometryTransitPtr  create          (void);
    static  Geometry           *createEmpty     (void);

    static  GeometryTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  Geometry            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  GeometryTransitPtr  createDependent  (BitVector bFlags);

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

    SFUnrecChildGeoIntegralPropertyPtr _sfTypes;
    SFUnrecChildGeoIntegralPropertyPtr _sfLengths;
    MFUnrecChildGeoVectorPropertyPtr _mfProperties;
    MFUnrecChildGeoIntegralPropertyPtr _mfPropIndices;
    SFBool            _sfDlistCache;
    SFInt32           _sfClassicGLId;
    SFInt32           _sfAttGLId;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    GeometryBase(void);
    GeometryBase(const GeometryBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~GeometryBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const Geometry *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Child linking                                                */
    /*! \{                                                                 */

    virtual bool unlinkChild(FieldContainer * const pChild,
                             UInt16           const childFieldId);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleTypes           (void) const;
    EditFieldHandlePtr editHandleTypes          (void);
    GetFieldHandlePtr  getHandleLengths         (void) const;
    EditFieldHandlePtr editHandleLengths        (void);
    GetFieldHandlePtr  getHandleProperties      (void) const;
    EditFieldHandlePtr editHandleProperties     (void);
    GetFieldHandlePtr  getHandlePropIndices     (void) const;
    EditFieldHandlePtr editHandlePropIndices    (void);
    GetFieldHandlePtr  getHandleDlistCache      (void) const;
    EditFieldHandlePtr editHandleDlistCache     (void);
    GetFieldHandlePtr  getHandleClassicGLId     (void) const;
    EditFieldHandlePtr editHandleClassicGLId    (void);
    GetFieldHandlePtr  getHandleAttGLId         (void) const;
    EditFieldHandlePtr editHandleAttGLId        (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFInt32             *editSFClassicGLId    (void);
            const SFInt32             *getSFClassicGLId     (void) const;

                  SFInt32             *editSFAttGLId        (void);
            const SFInt32             *getSFAttGLId         (void) const;


                  Int32               &editClassicGLId    (void);
                  Int32                getClassicGLId     (void) const;

                  Int32               &editAttGLId        (void);
                  Int32                getAttGLId         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setClassicGLId    (const Int32 value);
            void setAttGLId        (const Int32 value);

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

            void execSync (      GeometryBase *pFrom,
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
    void operator =(const GeometryBase &source);
};

typedef GeometryBase *GeometryBaseP;

typedef CoredNodeRefPtr  <Geometry> GeometryNodeRefPtr;
typedef CoredNodeMTRefPtr<Geometry> GeometryNodeMTRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGGEOMETRYBASE_H_ */

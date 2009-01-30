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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGLINUXEVENTOPTIONSFIELDS_H_
#define _OSGLINUXEVENTOPTIONSFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribCSMDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class LinuxEventOptions;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! LinuxEventOptionsPtr

OSG_GEN_CONTAINERPTR(LinuxEventOptions);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpContribCSMFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<LinuxEventOptions *> :
    public FieldTraitsFCPtrBase<LinuxEventOptions *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<LinuxEventOptions *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBCSM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFLinuxEventOptionsPtr"; }
};

template<> inline
const Char8 *FieldTraits<LinuxEventOptions *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecLinuxEventOptionsPtr"; 
}

template<> inline
const Char8 *FieldTraits<LinuxEventOptions *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecLinuxEventOptionsPtr"; 
}

template<> inline
const Char8 *FieldTraits<LinuxEventOptions *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakLinuxEventOptionsPtr"; 
}

template<> inline
const Char8 *FieldTraits<LinuxEventOptions *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdLinuxEventOptionsPtr"; 
}


#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<LinuxEventOptionsPtr, 0>
    \hideinhierarchy
 */
#endif

class DeviceInterface;

template <>
struct FieldTraits<LinuxEventOptions *, 1> :
    public FieldTraitsFCPtrBase<LinuxEventOptions *, 1>
{
  private:

  public:

    typedef DeviceInterface            *ParentType;
    typedef FieldTraits<LinuxEventOptions *, 1>  Self;


    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBCSM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFLinuxEventOptionsPtr"; }
};

template<> inline
const Char8 *FieldTraits<LinuxEventOptions *, 1>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecChildLinuxEventOptionsPtr"; 
}

template<> inline
const Char8 *FieldTraits<LinuxEventOptions *, 1>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecChildLinuxEventOptionsPtr"; 
}

template<> inline
const Char8 *FieldTraits<LinuxEventOptions *, 1>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakChildLinuxEventOptionsPtr"; 
}

template<> inline
const Char8 *FieldTraits<LinuxEventOptions *, 1>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdChildLinuxEventOptionsPtr"; 
}



#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpContribCSMFieldSingle */

typedef PointerSField<LinuxEventOptions *,
                      RecordedRefCountPolicy  > SFRecLinuxEventOptionsPtr;
typedef PointerSField<LinuxEventOptions *,
                      UnrecordedRefCountPolicy> SFUnrecLinuxEventOptionsPtr;
typedef PointerSField<LinuxEventOptions *,
                      WeakRefCountPolicy      > SFWeakLinuxEventOptionsPtr;
typedef PointerSField<LinuxEventOptions *,
                      NoRefCountPolicy        > SFUncountedLinuxEventOptionsPtr;
#endif



typedef ChildPointerSField<
          LinuxEventOptions *, 
          UnrecordedRefCountPolicy,
          1             > SFUnrecChildLinuxEventOptionsPtr;

OSG_END_NAMESPACE

#endif /* _OSGLINUXEVENTOPTIONSFIELDS_H_ */

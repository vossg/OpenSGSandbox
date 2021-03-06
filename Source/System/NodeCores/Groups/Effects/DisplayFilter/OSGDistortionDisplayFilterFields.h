/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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


#ifndef _OSGDISTORTIONDISPLAYFILTERFIELDS_H_
#define _OSGDISTORTIONDISPLAYFILTERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGEffectGroupsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class DistortionDisplayFilter;

OSG_GEN_CONTAINERPTR(DistortionDisplayFilter);
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldTraits
    \ingroup GrpLibOSGEffectGroups
 */
template <>
struct FieldTraits<DistortionDisplayFilter *, nsOSG> :
    public FieldTraitsFCPtrBase<DistortionDisplayFilter *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<DistortionDisplayFilter *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_EFFECTGROUPS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<DistortionDisplayFilter *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecDistortionDisplayFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<DistortionDisplayFilter *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecDistortionDisplayFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<DistortionDisplayFilter *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakDistortionDisplayFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<DistortionDisplayFilter *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdDistortionDisplayFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<DistortionDisplayFilter *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecDistortionDisplayFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<DistortionDisplayFilter *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecDistortionDisplayFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<DistortionDisplayFilter *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakDistortionDisplayFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<DistortionDisplayFilter *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdDistortionDisplayFilterPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldSFields */
typedef PointerSField<DistortionDisplayFilter *,
                      RecordedRefCountPolicy, nsOSG  > SFRecDistortionDisplayFilterPtr;
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldSFields */
typedef PointerSField<DistortionDisplayFilter *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecDistortionDisplayFilterPtr;
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldSFields */
typedef PointerSField<DistortionDisplayFilter *,
                      WeakRefCountPolicy, nsOSG      > SFWeakDistortionDisplayFilterPtr;
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldSFields */
typedef PointerSField<DistortionDisplayFilter *,
                      NoRefCountPolicy, nsOSG        > SFUncountedDistortionDisplayFilterPtr;


/*! \ingroup GrpEffectsGroupsDisplayFilterFieldMFields */
typedef PointerMField<DistortionDisplayFilter *,
                      RecordedRefCountPolicy, nsOSG  > MFRecDistortionDisplayFilterPtr;
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldMFields */
typedef PointerMField<DistortionDisplayFilter *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecDistortionDisplayFilterPtr;
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldMFields */
typedef PointerMField<DistortionDisplayFilter *,
                      WeakRefCountPolicy, nsOSG      > MFWeakDistortionDisplayFilterPtr;
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldMFields */
typedef PointerMField<DistortionDisplayFilter *,
                      NoRefCountPolicy, nsOSG        > MFUncountedDistortionDisplayFilterPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpEffectsGroupsDisplayFilterFieldSFields \ingroup GrpLibOSGEffectGroups */
struct SFRecDistortionDisplayFilterPtr : 
    public PointerSField<DistortionDisplayFilter *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldSFields \ingroup GrpLibOSGEffectGroups */
struct SFUnrecDistortionDisplayFilterPtr : 
    public PointerSField<DistortionDisplayFilter *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldSFields \ingroup GrpLibOSGEffectGroups */
struct SFWeakDistortionDisplayFilterPtr :
    public PointerSField<DistortionDisplayFilter *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldSFields \ingroup GrpLibOSGEffectGroups */
struct SFUncountedDistortionDisplayFilterPtr :
    public PointerSField<DistortionDisplayFilter *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpEffectsGroupsDisplayFilterFieldMFields \ingroup GrpLibOSGEffectGroups */
struct MFRecDistortionDisplayFilterPtr :
    public PointerMField<DistortionDisplayFilter *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldMFields \ingroup GrpLibOSGEffectGroups */
struct MFUnrecDistortionDisplayFilterPtr :
    public PointerMField<DistortionDisplayFilter *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldMFields \ingroup GrpLibOSGEffectGroups */
struct MFWeakDistortionDisplayFilterPtr :
    public PointerMField<DistortionDisplayFilter *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldMFields \ingroup GrpLibOSGEffectGroups */
struct MFUncountedDistortionDisplayFilterPtr :
    public PointerMField<DistortionDisplayFilter *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGDISTORTIONDISPLAYFILTERFIELDS_H_ */

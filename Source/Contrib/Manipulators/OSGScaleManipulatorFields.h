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


#ifndef _OSGSCALEMANIPULATORFIELDS_H_
#define _OSGSCALEMANIPULATORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGManipulatorFields.h"

#include "OSGSFieldAdaptor.h"
#include "OSGMFieldAdaptor.h"


OSG_BEGIN_NAMESPACE

class ScaleManipulator;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! ScaleManipulatorPtr

typedef PointerFwdBuilder<ManipulatorPtr,
                          ManipulatorConstPtr,
                          ScaleManipulator>::ObjPtr         ScaleManipulatorPtr;
typedef PointerFwdBuilder<ManipulatorPtr,
                          ManipulatorConstPtr,
                          ScaleManipulator>::ObjPtrConst    ScaleManipulatorPtrConst;
typedef PointerFwdBuilder<ManipulatorPtr,
                          ManipulatorConstPtr,
                          ScaleManipulator>::ObjConstPtr    ScaleManipulatorConstPtr;
typedef PointerFwdBuilder<ManipulatorPtr,
                          ManipulatorConstPtr,
                          ScaleManipulator>::ObjPtrArg      ScaleManipulatorPtrArg;
typedef PointerFwdBuilder<ManipulatorPtr,
                          ManipulatorConstPtr,
                          ScaleManipulator>::ObjConstPtrArg ScaleManipulatorConstPtrArg;
typedef PointerFwdBuilder<ManipulatorPtr,
                          ManipulatorConstPtr,
                          ScaleManipulator>::ObjPtrConstArg ScaleManipulatorPtrConstArg;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpSystemFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<ScaleManipulatorPtr> :
    public FieldTraitsTemplateBase<ScaleManipulatorPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ScaleManipulatorPtr>  Self;

    enum                        { Convertible = NotConvertible };
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<ScaleManipulatorPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)



OSG_END_NAMESPACE

#endif /* _OSGSCALEMANIPULATORFIELDS_H_ */

/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *                 Copyright (C) 2008 by the OpenSG Forum                    *
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

#ifndef _OSGWEAKPOINTERSFIELD_H_
#define _OSGWEAKPOINTERSFIELD_H_

#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGPointerSField.h"
#include "OSGPointerAccessHandler.h"

#ifdef OSG_DOC_FILES_IN_MODULE
/*! \file OSGWeakPointerSField.h
    \ingroup GrpSystemFieldContainer
 */
#endif

OSG_BEGIN_NAMESPACE

/*---------------------------------------------------------------------------*/
/* WeakPointerSField<FieldConfigT>                                           */
/*---------------------------------------------------------------------------*/

template <class    ObjectTypeT,
          Int32    NamespaceI  = 0>
class WeakPointerSField : public PointerSField<ObjectTypeT,
                                               WeakRefCountPolicy, 
                                               NamespaceI        >
{

    /*==========================  PUBLIC  =================================*/

  public:

    /*---------------------------------------------------------------------*/
    /*! \name Public Types                                                 */
    /*! \{                                                                 */
    
  protected:

    typedef ObjectTypeT                               ObjectType;
    
    typedef PointerSField<ObjectTypeT,
                          WeakRefCountPolicy, 
                          NamespaceI        > Inherited;
    typedef WeakPointerSField    <ObjectType,
                                  NamespaceI >        Self;
    
    typedef ObjectTypeT * ValueType;
    typedef ObjectTypeT * const ArgumentType;
    typedef ObjectTypeT * value_type;

    typedef ValueType *pointer;
    typedef ArgumentType *const_pointer;

    typedef ValueType const                             &const_reference; 

    
    typedef FieldTraits     <ValueType,
                             NamespaceI                   >  SFieldTraits;
    typedef FieldDescription<SFieldTraits,
                             FieldType::SingleField,
                             WeakRefCountPolicy,
                             FieldType::PtrField          >  Description;
    
    // handles
//    typedef          EditPointerSFieldHandle<Self>      EditHandle;
//    typedef typename EditPointerSFieldHandle<Self>::Ptr EditHandlePtr;
    
//    typedef          GetPointerSFieldHandle <Self>      GetHandle;
//    typedef typename GetPointerSFieldHandle <Self>::Ptr GetHandlePtr;
    
    // handles for dynamic fields -- XXX TODO
//    typedef          EditPointerSFieldHandle<Self>      DynamicEditHandle;
//    typedef typename EditPointerSFieldHandle<Self>::Ptr DynamicEditHandlePtr;
    
//    typedef          GetPointerSFieldHandle <Self>      DynamicGetHandle;
//    typedef typename GetPointerSFieldHandle <Self>::Ptr DynamicGetHandlePtr;
    
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Constants                                                    */
    /*! \{                                                                 */
    
    static FieldType::Cardinality const fieldCard  = FieldType::SingleField;
    static FieldType::Class       const Class      = FieldType::PtrField;
    
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Class Type                                                   */
    /*! \{                                                                 */

    static FieldType const &getClassType(void);
    
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Constructors                                                 */
    /*! \{                                                                 */

             WeakPointerSField(void              );
             WeakPointerSField(Self const &source);

    explicit WeakPointerSField(ValueType   value );
    
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Destructor                                                   */
    /*! \{                                                                 */
    
    ~WeakPointerSField(void);
    
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Access                                                       */
    /*! \{                                                                 */

  protected:
    
  /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Assignment                                                   */
    /*! \{                                                                 */

    void operator = (Self const &source);
    
    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    /*---------------------------------------------------------------------*/
    /*! \name Members                                                      */
    /*! \{                                                                 */
    
    static FieldType _fieldType;
    
    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
};

OSG_END_NAMESPACE

#include "OSGWeakPointerSField.inl"

#endif // _OSGWEAKPOINTERSFIELD_H_

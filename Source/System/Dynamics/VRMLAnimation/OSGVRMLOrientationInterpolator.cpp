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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"

#include "OSGVRMLOrientationInterpolator.h"
#include "OSGInterpolationHelper.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGVRMLOrientationInterpolatorBase.cpp file.
// To modify it, please change the .fcd file
// (OSGVRMLOrientationInterpolator.fcd)  and regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void VRMLOrientationInterpolator::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

VRMLOrientationInterpolator::VRMLOrientationInterpolator(void) :
    Inherited()
{
}

VRMLOrientationInterpolator::VRMLOrientationInterpolator(
    const VRMLOrientationInterpolator &source) :

    Inherited(source)
{
}

VRMLOrientationInterpolator::~VRMLOrientationInterpolator(void)
{
}

/*----------------------------- class specific ----------------------------*/

void VRMLOrientationInterpolator::changed(ConstFieldMaskArg whichField, 
                                          UInt32            origin,
                                          BitVector         details)
{
    if(0x0000 != (whichField & ResortIndexFieldMask))
    {
        fprintf(stderr, "resort triggert\n");        

        SizeT uiNumRes = _mfKeyValue.size() / _mfKey.size();

        if(uiNumRes == _mfResortIndex.size())
        {
            InterpolationHelper<MFReal32, 
                                MFQuaternion, 
                                SFQuaternion>::resortKeyValues(
                                    _mfKey.size(),
                                     uiNumRes,
                                    *(this->editMFKeyValue()),
                                    _mfResortIndex);

            InterpolationHelper<MFReal32, 
                                MFQuaternion, 
                                SFQuaternion>::interpolate(  
                                    _sfInValue.getValue(),
                                    _mfKey,
                                    _mfKeyValue,
                                    *(this->editSFOutValue()));
        }
        else
        {
            fprintf(stderr, 
                    "interpol resort : sizes don't match %" PRISize " | %d\n",
                    uiNumRes, _mfResortIndex.size32());
        }
    }

    if(0x0000 != (whichField & InValueFieldMask))
    {
        InterpolationHelper<MFReal32, 
                            MFQuaternion, 
                            SFQuaternion>::interpolate(  
                                  _sfInValue.getValue(),
                                  _mfKey,
                                  _mfKeyValue,
                                *(this->editSFOutValue()));
    }

    Inherited::changed(whichField, origin, details);
}

void VRMLOrientationInterpolator::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump VRMLOrientationInterpolator NI" << std::endl;
}

void VRMLOrientationInterpolator::evaluate(void)
{
    InterpolationHelper<MFReal32, MFQuaternion, SFQuaternion>::interpolate(
        _sfInValue.getValue(),
        _mfKey,
        _mfKeyValue,
        *(this->editSFOutValue()));
}

OSG_END_NAMESPACE

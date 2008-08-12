/* =========================================================================
 * This file is part of NITRO
 * =========================================================================
 * 
 * (C) Copyright 2004 - 2008, General Dynamics - Advanced Information Systems
 *
 * NITRO is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public 
 * License along with this program;
 * If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __CGM_POLYGON_H__
#define __CGM_POLYGON_H__

#include "cgm/Elements.h"

NITF_CXX_GUARD


typedef struct _cgm_PolygonElement
{
    short fillColor[CGM_RGB];
    cgm_InteriorStyle interiorStyle;
    short edgeVisibility;
    short edgeWidth;
    cgm_Type edgeType;
    short edgeColor[CGM_RGB];
    nitf_List* vertices;
} cgm_PolygonElement;

NITFAPI(cgm_Element*) cgm_PolygonElement_construct(nitf_Error* error);


NITF_CXX_ENDGUARD

#endif

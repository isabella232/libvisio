/* libvisio
 * Copyright (C) 2011 Fridrich Strba <fridrich.strba@bluewin.ch>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02111-1301 USA
 */

#ifndef __VSDXPAGES_H__
#define __VSDXPAGES_H__

#include <map>
#include <vector>
#include "VSDXStyles.h"
#include "VSDXGeometryList.h"
#include "VSDXTypes.h"

namespace libvisio {

class VSDXPage
{
  public:
    VSDXPage();
    VSDXPage(const VSDXPage &stencil);
    ~VSDXPage();
    VSDXPage &operator=(const VSDXPage &stencil);
};

class VSDXPages
{
  public:
    VSDXPages();
    ~VSDXPages();
};


} // namespace libvisio

#endif // __VSDXPAGES_H__

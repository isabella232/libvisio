/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/*
 * This file is part of the libvisio project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#include "VSDTypes.h"

namespace libvisio
{

const XForm &XForm::operator=(const XForm &xform)
{
  if (this != &xform)
  {
    pinX = xform.pinX;
    pinY = xform.pinY;
    height = xform.height;
    width = xform.width;
    pinLocX = xform.pinLocX;
    pinLocY = xform.pinLocY;
    angle = xform.angle;
    flipX = xform.flipX;
    flipY = xform.flipY;
    x = xform.x;
    y = xform.y;
  }
  return *this;
}

const NURBSData &NURBSData::operator=(const NURBSData &data)
{
  if (this != &data)
  {
    lastKnot = data.lastKnot;
    degree = data.degree;
    xType = data.xType;
    yType = data.yType;
    knots = data.knots;
    weights = data.weights;
    points = data.points;
  }
  return *this;
}

const VSDName &VSDName::operator=(const VSDName &name)
{
  if (this != &name)
  {
    m_data = name.m_data;
    m_format = name.m_format;
  }
  return *this;
}

const VSDMisc &VSDMisc::operator=(const VSDMisc &misc)
{
  if (this != &misc)
    m_hideText = misc.m_hideText;
  return *this;
}

const VSDBullet &VSDBullet::operator=(const VSDBullet &bullet)
{
  if (this != &bullet)
  {
    m_bulletStr = bullet.m_bulletStr;
    m_bulletFont = bullet.m_bulletFont;
    m_bulletFontSize = bullet.m_bulletFontSize;
    m_textPosAfterBullet = bullet.m_textPosAfterBullet;
  }
  return *this;
}

} // namespace libvisio

/* vim:set shiftwidth=2 softtabstop=2 expandtab: */

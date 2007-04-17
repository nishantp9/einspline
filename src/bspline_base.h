/////////////////////////////////////////////////////////////////////////////
//  einspline:  a library for creating and evaluating B-splines            //
//  Copyright (C) 2007 Kenneth P. Esler, Jr.                               //
//                                                                         //
//  This program is free software; you can redistribute it and/or modify   //
//  it under the terms of the GNU General Public License as published by   //
//  the Free Software Foundation; either version 2 of the License, or      //
//  (at your option) any later version.                                    //
//                                                                         //
//  This program is distributed in the hope that it will be useful,        //
//  but WITHOUT ANY WARRANTY; without even the implied warranty of         //
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          //
//  GNU General Public License for more details.                           //
//                                                                         //
//  You should have received a copy of the GNU General Public License      //
//  along with this program; if not, write to the Free Software            //
//  Foundation, Inc., 51 Franklin Street, Fifth Floor,                     //
//  Boston, MA  02110-1301  USA                                            //
/////////////////////////////////////////////////////////////////////////////

#ifndef BSPLINE_BASE_H
#define BSPLINE_BASE_H

// Conventions:
// Postfixes:  
// s:  single precision real
// d:  double precision real
// c:  single precision complex
// z:  double precision complex

////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
////              Basic type declarations               ////
////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////

typedef enum { PERIODIC, DERIV1, DERIV2, FLAT, NATURAL } bc_code;
typedef enum { U1D, U2D, U3D, NU1D, NU2D, NU3D } spline_code;

typedef struct 
{
  bc_code lCode, rCode;
  float lVal, rVal;
} BCtype_s;

typedef struct 
{
  bc_code lCode, rCode;
  double lVal, rVal;
} BCtype_d;

typedef struct 
{
  bc_code lCode, rCode;
  float lVal_r, lVal_i, rVal_r, rVal_i;
} BCtype_c;

typedef struct 
{
  bc_code lCode, rCode;
  double lVal_r, lVal_i, rVal_r, rVal_i;
} BCtype_z;


typedef struct
{
  double start, end;
  int num;

  // private
  double delta, delta_inv;
} Ugrid;

typedef struct
{
  spline_code code;
} Bspline;



#endif

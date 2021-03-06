/*------------------------------------------------------------------------------

  gpsim_assert.h - assertion macros generating gpsim breakpoints

  Copyright (c) 2006 Borut Razem

  This program is free software; you can redistribute it and/or modify it
  under the terms of the GNU General Public License as published by the
  Free Software Foundation; either version 2, or (at your option) any
  later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307,
  USA.

------------------------------------------------------------------------------*/


#ifndef __PIC_ASSERT_H
#define __PIC_ASSERT_H
#include<assert.h>

#define MANGLE(e) e
#define STRINGIFY(e) e
/*
#define ASSERT(e) \
  __asm \
  nop \
  __endasm; \
  __asm \
  .direct "a", STRINGIFY(e) \
  __endasm; \
  __asm \
  nop \
  __endasm;

#define PASSED() \
  __asm \
  nop \
  __endasm; \
  __asm \
  .direct "a", "\"PASSED\"" \
  __endasm; \
  __asm \
  nop \
  __endasm;

#define FAILED() \
  __asm \
  nop \
  __endasm; \
  __asm \
  .direct "a", "\"===> FAILED\"" \
  __endasm; \
  __asm \
  nop \
  __endasm;
*/
#define ASSERT(e) assert(e)
#define PASSED() exit(0) 
#define FAILED()  abort()

#endif

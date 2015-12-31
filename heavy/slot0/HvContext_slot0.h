
/**
 * Copyright (c) 2014,2015 Enzien Audio, Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, and/or
 * sublicense copies of the Software, strictly on a non-commercial basis,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 *
 * DO NOT MODIFY. THIS CODE IS MACHINE GENERATED BY THE ENZIEN AUDIO HEAVY COMPILER.
 */

#ifndef _HEAVYCONTEXT_SLOT0_H_
#define _HEAVYCONTEXT_SLOT0_H_

#include "HvBase.h"

#define Context(_x) ((Hv_slot0 *) (_x))

// object includes
#include "SignalVar.h"
#include "ControlCast.h"
#include "ControlSlice.h"
#include "SignalLine.h"
#include "HeavyMath.h"
#include "SignalPhasor.h"

typedef struct Hv_slot0 {
  HvBase base;

  // objects
  SignalLine sLine_kjOoY;
  SignalPhasor sPhasor_QAHuu;
  SignalLine sLine_NHqAT;
  ControlSlice cSlice_6ibo4;
  ControlSlice cSlice_q6fJz;
  ControlSlice cSlice_dacr0;
  ControlSlice cSlice_GYD2b;
  ControlSlice cSlice_zxvkU;
} Hv_slot0;

#endif // _HEAVYCONTEXT_SLOT0_H_

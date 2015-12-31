
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

#ifdef __cplusplus
extern "C" {
#endif

#ifndef _HEAVY_MIXER_H_
#define _HEAVY_MIXER_H_

#include "Heavy.h"

typedef struct Hv_mixer Hv_mixer;

/**
 * Creates a new patch instance.
 * Sample rate should be positive and in Hertz.
 */
HV_EXPORT Hv_mixer *hv_mixer_new(double sampleRate);

/**
 * Creates a new patch instance.
 * Sample rate should be positive and in Hertz.
 * Pool size is in kilobytes, and determines the maximum amount of memory
 *   allocated to messages at any time. By default this is 10.
 */
HV_EXPORT Hv_mixer *hv_mixer_new_with_pool(double sampleRate, int poolKb);

/** Frees a patch instance. */
HV_EXPORT void hv_mixer_free(Hv_mixer *c);

/** Processes one block of samples for a patch instance. The buffer format is an array of float channel arrays. */
HV_EXPORT int hv_mixer_process(Hv_mixer *const c, float **const inputBuffers, float **const outputBuffers, int n4);

/** Processes one block of samples for a patch instance. The buffer format is an uninterleaved float array of channels. */
HV_EXPORT int hv_mixer_process_inline(Hv_mixer *const c, float *const inputBuffers, float *const outputBuffers, int n4);

/** Processes one block of samples for a patch instance. The buffer format is an interleaved float array of channels. */
HV_EXPORT int hv_mixer_process_interleaved(Hv_mixer *const c, float *const inputBuffers, float *const outputBuffers, int n4);

/** Processes one block of samples for a patch instance. The buffer format is an interleaved short array of channels. */
HV_EXPORT int hv_mixer_process_interleaved_short(Hv_mixer *const c, short *const inputBuffers, short *const outputBuffers, int n4);
#endif // _HEAVY_MIXER_H_

#ifdef __cplusplus
} // extern "C"
#endif

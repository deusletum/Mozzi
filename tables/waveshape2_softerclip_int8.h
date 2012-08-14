#ifndef WAVESHAPE2_SOFTERCLIP_H_
#define WAVESHAPE2_SOFTERCLIP_H_

#include "Arduino.h"
#include <avr/pgmspace.h>

#define WAVESHAPE2_SOFTERCLIP_NUM_CELLS 256
#define WAVESHAPE2_SOFTERCLIP_SAMPLERATE 256

const char __attribute__((progmem)) WAVESHAPE2_SOFTERCLIP_DATA []  =
        {
                -128, -128, -128, -128, -128,
                -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
                -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
                -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
                -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
                -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
                -127, -127, -126, -125, -125, -124, -123, -122, -121, -120, -119, -118, -116,
                -115, -113, -112, -110, -109, -107, -105, -103, -101, -99, -97, -95, -93, -91,
                -89, -86, -84, -82, -79, -77, -74, -72, -69, -66, -64, -61, -58, -55, -52, -49,
                -47, -44, -41, -38, -35, -32, -29, -25, -22, -19, -16, -13, -10, -7, -4, 0, 3,
                6, 9, 12, 15, 18, 21, 24, 28, 31, 34, 37, 40, 43, 46, 48, 51, 54, 57, 60, 63,
                65, 68, 71, 73, 76, 78, 81, 83, 85, 88, 90, 92, 94, 96, 98, 100, 102, 104, 106,
                108, 109, 111, 112, 114, 115, 117, 118, 119, 120, 121, 122, 123, 124, 124, 125,
                126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
                127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
                127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
                127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
                127, 127, 127, 127, 127, 127, 127,
        };

#endif /* WAVESHAPE2_SOFTERCLIP_H_ */
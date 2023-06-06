/*******************************************************************************
 * Size: 14 px
 * Bpp: 2
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl.h"
#endif

#ifndef UBUNTUCOND14
#define UBUNTUCOND14 1
#endif

#if UBUNTUCOND14

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0xdd, 0xdd, 0xd9, 0x90, 0x9d,

    /* U+0022 "\"" */
    0x33, 0x4c, 0xd3, 0x20, 0x88,

    /* U+0023 "#" */
    0x6, 0x24, 0x9, 0x30, 0x7f, 0xfd, 0xc, 0x30,
    0xc, 0x30, 0xc, 0x60, 0x7f, 0xfd, 0x18, 0x90,
    0x18, 0x90, 0x24, 0xc0,

    /* U+0024 "$" */
    0xa, 0x0, 0xa0, 0x2f, 0x83, 0x40, 0x34, 0x2,
    0xc0, 0xb, 0x40, 0x2c, 0x0, 0xc1, 0x1c, 0x3f,
    0x40, 0xa0, 0xa, 0x0,

    /* U+0025 "%" */
    0x2d, 0x1c, 0xc, 0xc9, 0x6, 0x33, 0x0, 0xcd,
    0x80, 0x2d, 0xde, 0x0, 0x79, 0xc0, 0x27, 0x24,
    0xc, 0xc9, 0x6, 0x27, 0x3, 0x47, 0x80,

    /* U+0026 "&" */
    0xf, 0x80, 0x28, 0xc0, 0x24, 0xc0, 0x1e, 0xc0,
    0xf, 0x0, 0x2f, 0x18, 0x31, 0xe4, 0x70, 0xb0,
    0x30, 0xb4, 0x1f, 0x9c,

    /* U+0027 "'" */
    0x30, 0xc3, 0x8,

    /* U+0028 "(" */
    0x4, 0xa3, 0x1c, 0xa3, 0x4d, 0x34, 0xd3, 0x4a,
    0x1c, 0x30, 0xa0, 0x40,

    /* U+0029 ")" */
    0x42, 0x83, 0xd, 0x28, 0x71, 0xc7, 0x1c, 0x72,
    0x8d, 0x32, 0x84, 0x0,

    /* U+002A "*" */
    0x4, 0x3, 0x7, 0xf8, 0x78, 0x27, 0x0, 0x0,

    /* U+002B "+" */
    0x0, 0x0, 0xa0, 0xa, 0x7, 0xfd, 0xa, 0x0,
    0xa0,

    /* U+002C "," */
    0x34, 0xc3, 0x18,

    /* U+002D "-" */
    0x2, 0xf0, 0x0,

    /* U+002E "." */
    0x20, 0xd0,

    /* U+002F "/" */
    0x0, 0x40, 0xc, 0x1, 0x80, 0x24, 0x3, 0x0,
    0x30, 0x6, 0x0, 0xa0, 0xd, 0x0, 0xc0, 0x1c,
    0x2, 0x80, 0x34, 0x3, 0x0, 0x30, 0x0,

    /* U+0030 "0" */
    0x1f, 0x43, 0x9c, 0x30, 0xc3, 0xc, 0x70, 0xd7,
    0xd, 0x30, 0xc3, 0xc, 0x3a, 0xc1, 0xf4,

    /* U+0031 "1" */
    0x7, 0x1f, 0x27, 0x7, 0x7, 0x7, 0x7, 0x7,
    0x7, 0x7,

    /* U+0032 "2" */
    0x2f, 0x1, 0x2c, 0x1, 0xc0, 0x1c, 0x3, 0x40,
    0xa0, 0x1c, 0x2, 0x80, 0x34, 0x3, 0xfc,

    /* U+0033 "3" */
    0x2f, 0x1, 0x38, 0x1, 0xc0, 0x28, 0x1f, 0x0,
    0x28, 0x0, 0xc0, 0xc, 0x12, 0xc3, 0xf0,

    /* U+0034 "4" */
    0x3, 0x80, 0x78, 0xe, 0x81, 0x98, 0x31, 0x83,
    0x18, 0x7f, 0xe0, 0x18, 0x1, 0x80, 0x18,

    /* U+0035 "5" */
    0x1f, 0xc1, 0x80, 0x18, 0x2, 0x80, 0x2f, 0x0,
    0x2c, 0x0, 0xc0, 0xc, 0x13, 0x83, 0xe0,

    /* U+0036 "6" */
    0x2, 0x80, 0xc0, 0x24, 0x3, 0xf4, 0x35, 0xc3,
    0xd, 0x30, 0xd3, 0xd, 0x39, 0xc0, 0xf4,

    /* U+0037 "7" */
    0x7f, 0xd0, 0x1c, 0x2, 0x80, 0x30, 0x7, 0x0,
    0xa0, 0xd, 0x0, 0xc0, 0xc, 0x1, 0xc0,

    /* U+0038 "8" */
    0x1f, 0x43, 0x4c, 0x30, 0xc3, 0x4c, 0xf, 0x42,
    0xb4, 0x30, 0xc7, 0xd, 0x30, 0xc1, 0xf4,

    /* U+0039 "9" */
    0x1f, 0x43, 0x5c, 0x30, 0xc3, 0xd, 0x34, 0xd1,
    0xfc, 0x0, 0xc0, 0x2c, 0x7, 0x2, 0xd0,

    /* U+003A ":" */
    0x34, 0x80, 0x0, 0x0, 0x2, 0xd,

    /* U+003B ";" */
    0x34, 0x80, 0x0, 0x0, 0x2, 0xc, 0x31, 0x80,
    0x0,

    /* U+003C "<" */
    0x0, 0x40, 0x2c, 0x1e, 0x7, 0x40, 0x2d, 0x0,
    0x78, 0x0, 0x80,

    /* U+003D "=" */
    0x7f, 0xd0, 0x0, 0x0, 0x7, 0xfd, 0x0, 0x0,

    /* U+003E ">" */
    0x10, 0x3, 0x80, 0xb, 0x40, 0xd, 0x7, 0x82,
    0xd0, 0x20, 0x0,

    /* U+003F "?" */
    0x7e, 0x1, 0xd0, 0x34, 0x1c, 0xd, 0xa, 0x1,
    0x40, 0x0, 0x14, 0xa, 0x0,

    /* U+0040 "@" */
    0x1, 0xfe, 0x40, 0x2d, 0x7, 0x41, 0xc7, 0xe3,
    0x9, 0x35, 0xc9, 0x31, 0xc7, 0x28, 0xc7, 0x1c,
    0x63, 0x1c, 0x72, 0x8c, 0x31, 0xcd, 0x34, 0xbf,
    0xe0, 0x70, 0x0, 0x0, 0xe0, 0x0, 0x0, 0xbf,
    0x80, 0x0, 0x0, 0x0,

    /* U+0041 "A" */
    0x7, 0x40, 0x2a, 0x0, 0xcc, 0x3, 0x30, 0x18,
    0x90, 0x91, 0x83, 0xff, 0xc, 0xc, 0x60, 0x26,
    0x80, 0xa0,

    /* U+0042 "B" */
    0xbf, 0x4e, 0x2c, 0xd0, 0xdd, 0x1c, 0xff, 0x4e,
    0x1c, 0xd0, 0xad, 0xa, 0xe1, 0xdb, 0xf4,

    /* U+0043 "C" */
    0xb, 0xe0, 0x74, 0x43, 0x40, 0xc, 0x0, 0x30,
    0x0, 0xc0, 0x3, 0x40, 0xe, 0x0, 0x1d, 0x10,
    0x1f, 0xc0,

    /* U+0044 "D" */
    0xbf, 0x43, 0x87, 0x4d, 0x7, 0x34, 0xc, 0xd0,
    0x37, 0x40, 0xdd, 0x3, 0x34, 0x1c, 0xe1, 0xd2,
    0xfd, 0x0,

    /* U+0045 "E" */
    0xff, 0xb8, 0xd, 0x3, 0x40, 0xff, 0x38, 0xd,
    0x3, 0x40, 0xe0, 0x3f, 0xf0,

    /* U+0046 "F" */
    0xff, 0xb8, 0xd, 0x3, 0x40, 0xff, 0x38, 0xd,
    0x3, 0x40, 0xd0, 0x34, 0x0,

    /* U+0047 "G" */
    0xb, 0xf0, 0x74, 0x43, 0x80, 0xc, 0x0, 0x30,
    0x0, 0xc0, 0xd3, 0x3, 0x4e, 0xd, 0x1d, 0x34,
    0x1f, 0xc0,

    /* U+0048 "H" */
    0xd0, 0x7d, 0x7, 0xd0, 0x7d, 0x7, 0xff, 0xfe,
    0x7, 0xd0, 0x7d, 0x7, 0xd0, 0x7d, 0x7,

    /* U+0049 "I" */
    0xdd, 0xdd, 0xdd, 0xdd, 0xdd,

    /* U+004A "J" */
    0x3, 0x40, 0xd0, 0x34, 0xd, 0x3, 0x40, 0xd0,
    0x34, 0xd, 0x57, 0x2f, 0x80,

    /* U+004B "K" */
    0xd0, 0xd3, 0x4b, 0xd, 0x70, 0x37, 0x40, 0xfc,
    0x3, 0xb4, 0xd, 0x70, 0x34, 0xa0, 0xd0, 0xd3,
    0x42, 0xc0,

    /* U+004C "L" */
    0xd0, 0x34, 0xd, 0x3, 0x40, 0xd0, 0x34, 0xd,
    0x3, 0x40, 0xe0, 0x3f, 0xe0,

    /* U+004D "M" */
    0x2c, 0x2, 0x82, 0xd0, 0x3c, 0x2e, 0x7, 0xc3,
    0x70, 0xdc, 0x36, 0x4c, 0xc3, 0x59, 0x8c, 0x30,
    0xf0, 0xc3, 0xf, 0xc, 0x30, 0x50, 0xc3, 0x0,
    0xc,

    /* U+004E "N" */
    0xd0, 0x3f, 0x3, 0xf8, 0x3d, 0xc3, 0xda, 0x3d,
    0x37, 0xd2, 0xbd, 0xf, 0xd0, 0xbd, 0x7,

    /* U+004F "O" */
    0x7, 0xe0, 0x1d, 0x3c, 0x38, 0xd, 0x34, 0xe,
    0x30, 0xa, 0x30, 0xa, 0x30, 0xe, 0x38, 0xd,
    0x1d, 0x2c, 0x7, 0xe0,

    /* U+0050 "P" */
    0xbe, 0xe, 0x2c, 0xd0, 0xcd, 0xd, 0xd2, 0xcf,
    0xf4, 0xe0, 0xd, 0x0, 0xd0, 0xd, 0x0,

    /* U+0051 "Q" */
    0x7, 0xe0, 0x1d, 0x3c, 0x38, 0xd, 0x34, 0xe,
    0x30, 0xa, 0x30, 0xa, 0x30, 0xa, 0x34, 0xd,
    0x28, 0xc, 0x1e, 0x78, 0x6, 0xe0, 0x0, 0xd0,
    0x0, 0x3c, 0x0, 0x0,

    /* U+0052 "R" */
    0xbe, 0xe, 0x2c, 0xd0, 0xcd, 0xc, 0xd2, 0xcf,
    0xf0, 0xd3, 0x4d, 0x2c, 0xd0, 0xcd, 0xa,

    /* U+0053 "S" */
    0x1f, 0x83, 0x44, 0x70, 0x7, 0x0, 0x2d, 0x0,
    0x74, 0x1, 0xc0, 0xc, 0x12, 0xc7, 0xf4,

    /* U+0054 "T" */
    0xff, 0xf0, 0xa0, 0xa, 0x0, 0xa0, 0xa, 0x0,
    0xa0, 0xa, 0x0, 0xa0, 0xa, 0x0, 0xa0,

    /* U+0055 "U" */
    0xd0, 0xad, 0xa, 0xd0, 0xad, 0xa, 0xd0, 0xad,
    0xa, 0xd0, 0xad, 0xe, 0xb1, 0xd2, 0xf4,

    /* U+0056 "V" */
    0xa0, 0x29, 0xc0, 0xd3, 0x3, 0xd, 0x1c, 0x24,
    0xa0, 0x62, 0x40, 0xcc, 0x3, 0x70, 0xb, 0x80,
    0x1d, 0x0,

    /* U+0057 "W" */
    0x70, 0x0, 0x71, 0xc1, 0xc1, 0xc3, 0xb, 0x6,
    0xc, 0x39, 0x28, 0x34, 0xd8, 0x90, 0x96, 0x33,
    0x41, 0xa4, 0xcc, 0x7, 0xc2, 0xb0, 0xf, 0x7,
    0x80, 0x38, 0xd, 0x0,

    /* U+0058 "X" */
    0x70, 0x70, 0xd2, 0x42, 0x8c, 0x3, 0xa0, 0xb,
    0x0, 0x3d, 0x1, 0xdc, 0x9, 0x34, 0x30, 0xa2,
    0x80, 0xc0,

    /* U+0059 "Y" */
    0xe0, 0x31, 0xc2, 0x83, 0x4d, 0xa, 0x70, 0xf,
    0x40, 0x2c, 0x0, 0x70, 0x1, 0xc0, 0x7, 0x0,
    0x1c, 0x0,

    /* U+005A "Z" */
    0x7f, 0xd0, 0x1c, 0x2, 0x80, 0x30, 0xa, 0x0,
    0xc0, 0x1c, 0x3, 0x40, 0x70, 0xb, 0xfe,

    /* U+005B "[" */
    0xbe, 0x49, 0x24, 0x92, 0x49, 0x24, 0x92, 0x49,
    0x24, 0x92, 0xf0,

    /* U+005C "\\" */
    0x10, 0x3, 0x0, 0x30, 0x2, 0x40, 0x18, 0x0,
    0xc0, 0xc, 0x0, 0x90, 0x6, 0x0, 0x70, 0x3,
    0x0, 0x34, 0x2, 0x80, 0x1c, 0x0, 0xc0,

    /* U+005D "]" */
    0xf8, 0xa2, 0x8a, 0x28, 0xa2, 0x8a, 0x28, 0xa2,
    0x8a, 0x2b, 0xe0,

    /* U+005E "^" */
    0xf, 0x0, 0xf0, 0x2a, 0x83, 0x4c, 0x70, 0xd1,
    0x4,

    /* U+005F "_" */
    0x3f, 0xf0, 0x0, 0x0,

    /* U+0060 "`" */
    0x1, 0xc1, 0x80,

    /* U+0061 "a" */
    0x2f, 0x40, 0x2c, 0x0, 0xc1, 0xfc, 0x35, 0xc7,
    0xc, 0x30, 0xc2, 0xfc,

    /* U+0062 "b" */
    0x40, 0x34, 0xd, 0x3, 0x40, 0xfe, 0x34, 0xdd,
    0x2b, 0x47, 0xd1, 0xf4, 0xad, 0x76, 0xf8,

    /* U+0063 "c" */
    0xf, 0x4e, 0x3, 0x1, 0xc0, 0x70, 0xc, 0x3,
    0x80, 0x3e,

    /* U+0064 "d" */
    0x0, 0x40, 0xd, 0x0, 0xd0, 0xd, 0xf, 0xd3,
    0x8d, 0x30, 0xd7, 0xd, 0x70, 0xd3, 0xd, 0x38,
    0xd0, 0xfd,

    /* U+0065 "e" */
    0xf, 0x43, 0x5c, 0x30, 0xd7, 0xfd, 0x70, 0x3,
    0x0, 0x38, 0x40, 0xfc,

    /* U+0066 "f" */
    0x3d, 0xa0, 0xd0, 0xfc, 0xd0, 0xd0, 0xd0, 0xd0,
    0xd0, 0xd0, 0xd0,

    /* U+0067 "g" */
    0xf, 0xd3, 0x8d, 0x30, 0xd7, 0xd, 0x70, 0xd3,
    0xd, 0x38, 0xd1, 0xfd, 0x0, 0xd0, 0x1c, 0x2f,
    0x40,

    /* U+0068 "h" */
    0x40, 0x34, 0xd, 0x3, 0x40, 0xfe, 0x34, 0xdd,
    0x2b, 0x46, 0xd1, 0xb4, 0x6d, 0x1b, 0x46,

    /* U+0069 "i" */
    0x34, 0x80, 0xd, 0x34, 0xd3, 0x4d, 0x34, 0xd3,
    0x40,

    /* U+006A "j" */
    0xd, 0x8, 0x0, 0xd, 0xd, 0xd, 0xd, 0xd,
    0xd, 0xd, 0xd, 0xd, 0x1c, 0x78,

    /* U+006B "k" */
    0x80, 0x34, 0xd, 0x3, 0x40, 0xd3, 0x75, 0xcd,
    0xc3, 0xe0, 0xec, 0x36, 0x8d, 0x33, 0x4a,

    /* U+006C "l" */
    0x83, 0x4d, 0x34, 0xd3, 0x4d, 0x34, 0xd3, 0x4d,
    0x1c,

    /* U+006D "m" */
    0xbe, 0xf8, 0xd7, 0x8e, 0xd2, 0x4a, 0xd2, 0x87,
    0xd2, 0x87, 0xd2, 0x87, 0xd2, 0x87, 0xd2, 0x87,

    /* U+006E "n" */
    0xbe, 0x34, 0xdd, 0x2b, 0x46, 0xd1, 0xb4, 0x6d,
    0x1b, 0x46,

    /* U+006F "o" */
    0xf, 0x83, 0x9d, 0x30, 0xa7, 0x7, 0x70, 0x73,
    0xa, 0x39, 0xd0, 0xf8,

    /* U+0070 "p" */
    0xbe, 0x35, 0xdd, 0x2b, 0x47, 0xd1, 0xf4, 0xad,
    0x37, 0xf8, 0xd0, 0x34, 0xd, 0x0,

    /* U+0071 "q" */
    0xf, 0xd3, 0x8d, 0x30, 0xd7, 0xd, 0x70, 0xd3,
    0xd, 0x38, 0xd1, 0xfd, 0x0, 0xd0, 0xd, 0x0,
    0xd0,

    /* U+0072 "r" */
    0xbd, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0,

    /* U+0073 "s" */
    0x2f, 0xc, 0x7, 0x0, 0xe0, 0xb, 0x0, 0xd0,
    0x35, 0xf8,

    /* U+0074 "t" */
    0x0, 0xc0, 0xc0, 0xfc, 0xd0, 0xc0, 0xc0, 0xc0,
    0xc0, 0xe0, 0x7c,

    /* U+0075 "u" */
    0xc2, 0xb0, 0xac, 0x2b, 0xa, 0xc2, 0xb4, 0xae,
    0x28, 0xfd,

    /* U+0076 "v" */
    0xa0, 0xca, 0xc, 0x71, 0xc3, 0x28, 0x37, 0x42,
    0xb0, 0x1f, 0x0, 0xe0,

    /* U+0077 "w" */
    0xa2, 0x86, 0x62, 0xca, 0x73, 0xc9, 0x33, 0x8c,
    0x32, 0x9c, 0x3a, 0x6c, 0x2d, 0x78, 0x1c, 0x34,

    /* U+0078 "x" */
    0x60, 0xc3, 0x24, 0x2f, 0x0, 0xe0, 0x1f, 0x2,
    0x70, 0x32, 0x8a, 0xc,

    /* U+0079 "y" */
    0xa0, 0xda, 0xc, 0x71, 0xc3, 0x28, 0x37, 0x42,
    0xb0, 0x1f, 0x0, 0xe0, 0xc, 0x1, 0xc0, 0xf0,
    0x0,

    /* U+007A "z" */
    0x7f, 0x40, 0xc0, 0xa0, 0x30, 0x18, 0xd, 0x7,
    0x2, 0xfe,

    /* U+007B "{" */
    0xe, 0x1c, 0x28, 0x28, 0x28, 0x24, 0x70, 0x70,
    0x24, 0x28, 0x28, 0x28, 0x1c, 0xe,

    /* U+007C "|" */
    0x49, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x90,

    /* U+007D "}" */
    0xe0, 0x30, 0x34, 0x34, 0x34, 0x34, 0x1c, 0x1c,
    0x34, 0x34, 0x34, 0x34, 0x30, 0xe0,

    /* U+007E "~" */
    0x3d, 0x5a, 0x7c, 0x0, 0x0,

    /* U+00A0 " " */

    /* U+00A1 "¡" */
    0xd9, 0x0, 0x99, 0xdd, 0xdd, 0xd0,

    /* U+00A2 "¢" */
    0xc, 0x3, 0x2, 0xf2, 0xc0, 0xd0, 0x34, 0xd,
    0x3, 0x40, 0xb0, 0xb, 0xc0, 0xc0, 0x30,

    /* U+00A3 "£" */
    0x7, 0xd0, 0xd0, 0x1c, 0x1, 0xc0, 0x7f, 0x81,
    0xc0, 0x18, 0x2, 0x80, 0x28, 0x2, 0xfe,

    /* U+00A4 "¤" */
    0x10, 0x47, 0xfd, 0x35, 0xc3, 0xc, 0x30, 0xc3,
    0x5c, 0x7f, 0xd1, 0x4,

    /* U+00A5 "¥" */
    0xa0, 0x67, 0xd, 0x30, 0xc2, 0xa8, 0xf, 0x7,
    0xfd, 0xa, 0x7, 0xfd, 0xa, 0x0, 0xa0,

    /* U+00A6 "¦" */
    0x59, 0x99, 0x99, 0x0, 0x5, 0x99, 0x99, 0x90,

    /* U+00A7 "§" */
    0x1f, 0x83, 0x40, 0x30, 0x2, 0xd0, 0x37, 0x46,
    0x1c, 0x70, 0xc3, 0xe8, 0xb, 0x40, 0x18, 0x2,
    0x83, 0xf0, 0x0, 0x0,

    /* U+00A8 "¨" */
    0x52, 0x29, 0xc0,

    /* U+00A9 "©" */
    0x2, 0xf8, 0x0, 0xd0, 0x70, 0x28, 0xf6, 0x43,
    0x24, 0xc, 0x33, 0x0, 0xc3, 0x30, 0xc, 0x33,
    0x0, 0xc3, 0x24, 0xc, 0x28, 0xf6, 0x40, 0xd0,
    0x70, 0x2, 0xf8, 0x0,

    /* U+00AA "ª" */
    0x3d, 0x6, 0x2, 0x2e, 0x62, 0x3e,

    /* U+00AB "«" */
    0x4, 0x1, 0xc9, 0x35, 0xc7, 0x38, 0x32, 0xc2,
    0x8c, 0xc, 0x60, 0x0,

    /* U+00AC "¬" */
    0xbf, 0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0, 0x0,

    /* U+00AD "­" */
    0x2, 0xf0, 0x0,

    /* U+00AE "®" */
    0x2, 0xf8, 0x0, 0xd0, 0x70, 0x28, 0x2, 0x43,
    0x1f, 0x4c, 0x32, 0x58, 0xc3, 0x2f, 0xc, 0x32,
    0x70, 0xc3, 0x25, 0x8c, 0x28, 0x6, 0x40, 0xd0,
    0x70, 0x2, 0xf8, 0x0,

    /* U+00AF "¯" */
    0x7e, 0x0,

    /* U+00B0 "°" */
    0x3c, 0x96, 0x96, 0x3c,

    /* U+00B1 "±" */
    0x0, 0x0, 0xa0, 0xa, 0x7, 0xfd, 0xa, 0x0,
    0xa0, 0x0, 0x7, 0xfd,

    /* U+00B2 "²" */
    0x7c, 0x9, 0xc, 0x28, 0x30, 0x7d,

    /* U+00B3 "³" */
    0x78, 0xc, 0xc, 0x3c, 0x9, 0x7c,

    /* U+00B4 "´" */
    0x0, 0xa7, 0x0,

    /* U+00B5 "µ" */
    0xd1, 0xb4, 0x6d, 0x1b, 0x46, 0xd1, 0xb4, 0x6e,
    0x2b, 0xfe, 0xd0, 0x34, 0xd, 0x0,

    /* U+00B6 "¶" */
    0xb, 0xf0, 0xfc, 0xc7, 0xf3, 0x1f, 0xcc, 0x3f,
    0x30, 0xbc, 0xc0, 0x33, 0x0, 0xcc, 0x3, 0x30,
    0xc, 0xc0, 0x33, 0x0, 0xcc, 0x3, 0x30,

    /* U+00B7 "·" */
    0x20, 0xc0,

    /* U+00B8 "¸" */
    0x0, 0x18, 0xc, 0x38,

    /* U+00B9 "¹" */
    0x29, 0xe1, 0x86, 0x18, 0x60,

    /* U+00BA "º" */
    0x2e, 0x18, 0x96, 0x15, 0xc9, 0x2e, 0x0,

    /* U+00BB "»" */
    0x10, 0x3, 0x28, 0x28, 0xd0, 0xcb, 0x1c, 0xe3,
    0x4c, 0x32, 0x40, 0x0,

    /* U+00BC "¼" */
    0x28, 0xc, 0x7, 0x80, 0xc0, 0x18, 0x24, 0x1,
    0x83, 0x0, 0x18, 0x60, 0x41, 0x4d, 0x38, 0x0,
    0xc6, 0x80, 0x28, 0x98, 0x3, 0xf, 0xc0, 0x70,
    0x8, 0x0, 0x0, 0x40,

    /* U+00BD "½" */
    0x28, 0xc, 0x6, 0x82, 0x40, 0x18, 0x30, 0x1,
    0x86, 0x0, 0x18, 0x97, 0x81, 0x4c, 0x4c, 0x2,
    0x80, 0xc0, 0x30, 0x34, 0x6, 0x6, 0x0, 0x90,
    0xbc,

    /* U+00BE "¾" */
    0x3c, 0x9, 0x0, 0x90, 0xc0, 0x2c, 0x18, 0x0,
    0x93, 0x0, 0xa, 0x30, 0x47, 0xc9, 0x38, 0x0,
    0xc6, 0x80, 0x18, 0x98, 0x3, 0x4f, 0xd0, 0x30,
    0x8, 0x1, 0x0, 0x40,

    /* U+00BF "¿" */
    0xe, 0x2, 0x40, 0x0, 0x10, 0x9, 0x3, 0x3,
    0x81, 0xc0, 0xa0, 0x1c, 0x42, 0xf4
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 44, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 59, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 85, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 10, .adv_w = 127, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 30, .adv_w = 96, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 50, .adv_w = 144, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 114, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 50, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 96, .adv_w = 64, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 108, .adv_w = 64, .box_w = 3, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 120, .adv_w = 87, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 128, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 137, .adv_w = 52, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 140, .adv_w = 52, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 143, .adv_w = 52, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 145, .adv_w = 60, .box_w = 6, .box_h = 15, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 168, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 183, .adv_w = 96, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 193, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 208, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 253, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 283, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 298, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 313, .adv_w = 52, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 319, .adv_w = 52, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 328, .adv_w = 96, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 339, .adv_w = 96, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 347, .adv_w = 96, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 358, .adv_w = 77, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 371, .adv_w = 185, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 407, .adv_w = 113, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 425, .adv_w = 117, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 105, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 458, .adv_w = 129, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 476, .adv_w = 102, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 489, .adv_w = 95, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 502, .adv_w = 118, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 520, .adv_w = 129, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 535, .adv_w = 58, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 540, .adv_w = 88, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 553, .adv_w = 115, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 571, .adv_w = 93, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 584, .adv_w = 163, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 609, .adv_w = 130, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 624, .adv_w = 136, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 644, .adv_w = 109, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 659, .adv_w = 136, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 687, .adv_w = 115, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 702, .adv_w = 90, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 717, .adv_w = 95, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 732, .adv_w = 123, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 747, .adv_w = 111, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 765, .adv_w = 169, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 793, .adv_w = 106, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 811, .adv_w = 101, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 829, .adv_w = 97, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 844, .adv_w = 63, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 855, .adv_w = 60, .box_w = 6, .box_h = 15, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 878, .adv_w = 63, .box_w = 3, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 889, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 898, .adv_w = 82, .box_w = 7, .box_h = 2, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 902, .adv_w = 70, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 905, .adv_w = 97, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 917, .adv_w = 105, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 932, .adv_w = 79, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 942, .adv_w = 105, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 960, .adv_w = 98, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 972, .adv_w = 69, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 983, .adv_w = 105, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1000, .adv_w = 108, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1015, .adv_w = 54, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1024, .adv_w = 54, .box_w = 4, .box_h = 14, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 1038, .adv_w = 96, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1053, .adv_w = 54, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1062, .adv_w = 156, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1078, .adv_w = 108, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1088, .adv_w = 104, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1100, .adv_w = 105, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1114, .adv_w = 105, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1131, .adv_w = 73, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1139, .adv_w = 76, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1149, .adv_w = 72, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1160, .adv_w = 108, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1170, .adv_w = 89, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1182, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1198, .adv_w = 88, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1210, .adv_w = 89, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1227, .adv_w = 80, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1237, .adv_w = 60, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1251, .adv_w = 60, .box_w = 2, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1259, .adv_w = 60, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1273, .adv_w = 96, .box_w = 6, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 1278, .adv_w = 44, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1278, .adv_w = 59, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1284, .adv_w = 96, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1299, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1314, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1326, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1341, .adv_w = 60, .box_w = 2, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1349, .adv_w = 90, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1369, .adv_w = 70, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 1372, .adv_w = 159, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1400, .adv_w = 71, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 1406, .adv_w = 101, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1418, .adv_w = 96, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1426, .adv_w = 52, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1429, .adv_w = 159, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1457, .adv_w = 70, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 1459, .adv_w = 65, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 1463, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1475, .adv_w = 63, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 1481, .adv_w = 63, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 1487, .adv_w = 70, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 1490, .adv_w = 109, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1504, .adv_w = 119, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1527, .adv_w = 51, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 1529, .adv_w = 70, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1533, .adv_w = 63, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 1538, .adv_w = 82, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1545, .adv_w = 101, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1557, .adv_w = 158, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1585, .adv_w = 158, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1610, .adv_w = 158, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1638, .adv_w = 77, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = -3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 160, .range_length = 32, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 2,
    1, 3, 4, 5, 0, 6, 7, 6,
    8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 9, 9, 0, 0, 0,
    0, 10, 11, 12, 13, 14, 15, 16,
    17, 18, 18, 19, 20, 21, 22, 18,
    14, 23, 24, 25, 26, 27, 28, 29,
    30, 31, 32, 33, 34, 35, 0, 0,
    0, 0, 36, 37, 38, 0, 39, 40,
    41, 42, 0, 43, 44, 45, 42, 42,
    37, 37, 46, 47, 48, 49, 50, 51,
    52, 53, 54, 55, 56, 0, 57, 0,
    0, 58, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 59, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 60, 0, 0, 0, 61
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 2,
    1, 3, 4, 5, 0, 6, 7, 6,
    8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 9, 9, 0, 0, 0,
    10, 11, 12, 13, 14, 13, 13, 13,
    14, 13, 13, 15, 13, 13, 16, 13,
    14, 13, 14, 13, 17, 18, 19, 20,
    21, 22, 23, 24, 0, 25, 26, 0,
    0, 0, 27, 28, 29, 29, 29, 28,
    29, 28, 0, 30, 28, 31, 32, 32,
    29, 32, 29, 32, 33, 34, 35, 36,
    37, 38, 39, 40, 41, 0, 42, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 43, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 44, 0, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -13, 0, -8, -20, 0,
    0, 4, 0, 6, 4, 0, 4, 0,
    0, 0, -8, 0, -13, 0, 0, -3,
    -4, 0, -8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 4,
    0, 0, 6, 0, 3, -4, 0, 0,
    0, 1, -4, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 16, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 5, 0, 3, 0, 0, 3, 0,
    0, 0, 0, 0, 0, 12, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    0, -2, -4, 0, -2, -7, 0, -7,
    -4, -6, -6, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -10, 0, -3, -20, 0,
    0, 6, 0, 4, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 6,
    0, -8, 6, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 4, -10, 0,
    -4, -10, 0, -2, -2, -6, -10, -2,
    0, 0, 0, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -7,
    0, -1, -11, 0, 0, 11, 0, 9,
    7, 9, 9, 4, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 4, 0, 0, 3, 0,
    0, -7, -1, -3, -3, 0, -2, 4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, -7, 0, -2, -9, 0, -3,
    -2, -6, -7, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -9, 0, -2, 0, -10, 6, 0, 4,
    4, -4, 0, 7, 0, -6, 7, 0,
    2, -8, -3, -7, -4, 6, -9, 6,
    -2, -4, 4, 0, 0, 0, 0, 0,
    2, 0, -1, 0, 2, 6, 0, 4,
    -3, -1, 0, 0, 0, 0, -1, -3,
    -2, -1, 0, -3, 0, -3, 0, 0,
    0, 0, 0, 0, 0, -3, 0, -1,
    -1, -1, -3, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, -2, 0, 0,
    7, 0, -3, 8, 2, 7, -6, 7,
    6, 4, -2, 7, 0, -2, 7, 0,
    4, 7, 0, 7, 0, 5, 4, 4,
    11, 7, 0, 0, -2, 0, 0, 0,
    0, 0, -3, 0, 0, 4, 0, 3,
    -4, 7, -4, 4, -3, -4, -3, -4,
    -3, -8, 4, -6, 0, -4, -2, -6,
    0, 0, -9, 0, 0, -7, 0, -2,
    0, -3, -6, 0, 0, -6, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, -3, 0, 0,
    0, -2, -3, 0, 0, 2, 0, 0,
    4, 0, 0, 2, 0, -4, 3, 0,
    0, 0, 0, 0, 0, 0, 3, 2,
    3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 2, -1, 0,
    -2, 0, 0, 0, 4, -9, -4, 4,
    4, -20, 4, -11, -2, 2, -4, -7,
    0, -2, -17, 0, 0, 4, 0, 3,
    3, 2, 4, 0, 8, 4, -6, 0,
    -4, 0, 0, -4, -3, -1, -4, 0,
    0, -6, 0, -4, 0, 4, 0, -3,
    0, 0, 0, 0, -2, 0, 4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, -3, 0, -6, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, 0, 0, -5, 0, 0, -7, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, -4, 0,
    -6, 3, -12, 4, 2, 0, -7, 4,
    0, -9, 6, 0, 0, 2, 0, 2,
    -1, 6, 3, 4, 4, -1, -2, 0,
    -6, 0, 0, 0, 2, 0, -8, -7,
    -4, 3, -7, 2, -2, 0, -8, 0,
    -16, -3, -2, 0, -19, 5, -11, 6,
    7, 0, -2, 7, 0, -8, 6, 0,
    3, -13, -3, -11, -8, 4, -11, 3,
    -7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, -2,
    -2, 0, -2, 0, 0, 0, 0, 0,
    4, -6, -3, -3, 4, -21, 0, -10,
    4, 0, 0, -8, 0, 0, -20, 0,
    2, 0, 0, 3, 2, -1, 2, 0,
    7, 0, -4, 0, -1, 0, 0, 0,
    0, 0, 0, 4, 4, 3, 4, 0,
    0, 0, -1, 0, -3, -4, -3, -4,
    -3, -8, 4, -2, 0, -4, -2, -6,
    0, 0, -9, 0, 0, -7, 0, -2,
    0, -3, -6, 0, 0, -6, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, -3, 0, 0,
    0, 0, -4, 0, -4, 3, -4, 3,
    0, -3, -3, 2, 0, -2, 4, 0,
    0, -3, 0, -2, 0, 2, -2, 3,
    0, -4, -2, 0, -4, 0, -2, 0,
    0, -1, -2, -2, -2, 0, -2, 1,
    -3, -2, -3, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 0, 2, 0, 1,
    0, 2, 2, 0, 0, 0, 0, 2,
    0, 2, 0, 0, 6, 0, 4, 0,
    4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 4, 0,
    4, -4, -6, 3, 6, -10, -10, -14,
    -7, 5, -9, -8, 0, -7, -11, 0,
    0, 6, 0, 7, 3, 4, 8, 0,
    11, 3, -10, 0, -12, 0, 0, -10,
    -10, 0, -10, -6, -6, -7, -6, -9,
    -3, 4, -11, -10, 0, 0, 0, 0,
    0, -6, 0, -8, 0, 0, 0, -3,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    5, -2, -6, 4, 4, -11, -2, -11,
    -3, 3, -6, -7, 0, -2, -12, 0,
    0, 7, 0, 7, 3, 4, 8, 0,
    8, 0, -6, 0, -4, 0, 0, -3,
    -4, 0, -4, 0, 0, 0, 0, -3,
    -3, 4, -6, -1, 4, -2, -6, 0,
    0, -9, -2, -6, -2, 1, -4, -4,
    0, 0, -11, 0, 0, 3, 0, 4,
    2, 1, 6, 0, 2, 0, -3, 0,
    -3, 0, 0, -3, -2, 0, -2, 0,
    0, 0, 0, 0, -2, 0, -3, 0,
    0, -3, -6, 0, 0, 4, -6, 2,
    0, 0, -6, 4, 0, -3, 4, 0,
    0, 3, 0, 4, 0, 4, 4, 3,
    4, 0, 0, 0, -6, 0, 0, 0,
    0, -2, -3, -3, -3, 4, -3, 0,
    -3, 0, -6, 0, 4, -7, -6, 4,
    2, -9, -10, -11, -2, 6, -7, -9,
    0, -6, -15, -4, 0, 8, 0, 7,
    5, 5, 8, 1, 9, 2, -8, 0,
    -10, 0, 0, -10, -8, 0, -9, -2,
    -2, -3, -2, -4, -2, 4, -9, -4,
    0, -2, -5, 0, 0, 2, -8, 0,
    2, 0, -4, 2, 0, -2, 3, 0,
    0, 0, 0, 2, 0, 0, 2, 0,
    2, 0, 0, 0, -4, 0, 0, 0,
    0, 0, -1, -2, -1, 4, -2, 0,
    -5, 0, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, -4, 0, 0, -1, 3, 0, 0,
    0, 0, 0, 0, 0, 18, 0, 0,
    0, 13, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 4, -3, -7, 7, 0,
    3, -7, -7, -9, -3, 0, -9, 0,
    0, 0, 4, 2, 1, 18, -2, 2,
    2, -1, 0, -2, 0, 2, 9, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    -1, 0, -2, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, -3, 0, 3, 2,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, -2, -1, -2,
    0, -2, 0, 0, 6, 0, 0, 4,
    0, 3, -2, 7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 2, 2, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 4,
    4, 2, 4, 0, -2, 2, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, -1, -1, 0,
    0, 0, 0, 0, 11, 0, 0, 12,
    2, -13, -8, -6, 0, 5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 13, 9, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 4,
    6, 3, 4, 0, 0, 11, -3, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -6, 0, 0, -4,
    -4, 0, 0, 4, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -7, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    -1, 0, -3, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 2, 0, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    -3, 0, 0, 0, 0, 0, 0, 2,
    0, 4, 2, 2, 0, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 3, -16, -6, -6,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, -3, 0, -2, 0, 0, 0,
    0, 0, 0, 8, 8, 4, 8, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 2, -4, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    3, -1, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 3, 0, 0,
    -2, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    4, 0, 0, 0, 2, -9, 0, -2,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, -2, 0, -2, 0, 0, 0,
    0, 0, 0, 6, 6, 3, 6, 0,
    0, 0, 0, 0, 4, 0, 0, 0,
    2, -6, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 6,
    6, 3, 6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, -1, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 4, 0, 0,
    -3, 0, -4, 0, 4, 0, 0, 0,
    2, -9, 0, -2, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, -3, 0,
    -2, 0, 0, 0, 0, 0, 0, 6,
    6, 3, 6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, -2, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, -3, -1, 0, 2, 4, 0, 4,
    0, 0, 4, 0, 0, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 0, 16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, -4, 0,
    -2, -6, 0, -2, -2, -3, -3, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -9, 0, -3,
    -2, 0, -7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 0,
    0, -10, 0, -1, 0, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 0, -3, -11, 0, -6,
    -3, -7, -9, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, -2, -7, 0,
    0, -13, -3, -6, -3, -4, -6, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 61,
    .right_class_cnt     = 44,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 2,
    .bpp = 2,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t UbuntuCond14 = {
#else
lv_font_t UbuntuCond14 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 16,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UBUNTUCOND14*/


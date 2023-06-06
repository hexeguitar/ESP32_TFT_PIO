/*******************************************************************************
 * Size: 11 px
 * Bpp: 2
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl.h"
#endif

#ifndef UBUNTUCOND11
#define UBUNTUCOND11 1
#endif

#if UBUNTUCOND11

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x30, 0xc3, 0xc, 0x20, 0x0, 0xc,

    /* U+0022 "\"" */
    0x29, 0x25, 0x14,

    /* U+0023 "#" */
    0xc, 0x80, 0x8c, 0x7f, 0xe1, 0x48, 0x15, 0x87,
    0xfe, 0x22, 0x43, 0x20,

    /* U+0024 "$" */
    0xc, 0x7, 0x43, 0x0, 0xc0, 0x38, 0x2, 0xc0,
    0x30, 0x5c, 0x2c, 0x3, 0x0,

    /* U+0025 "%" */
    0x28, 0x91, 0x63, 0x5, 0xd8, 0xa, 0x80, 0x2,
    0x60, 0x17, 0x50, 0xcd, 0x86, 0x2c,

    /* U+0026 "&" */
    0x1e, 0x3, 0x30, 0x33, 0x1, 0xc0, 0x39, 0x86,
    0x3c, 0x61, 0xc2, 0xa9,

    /* U+0027 "'" */
    0x22, 0x10,

    /* U+0028 "(" */
    0x8, 0x18, 0x24, 0x30, 0x30, 0x30, 0x30, 0x30,
    0x30, 0x18, 0xc, 0x0,

    /* U+0029 ")" */
    0x42, 0x43, 0xc, 0x20, 0x92, 0xc, 0x31, 0x88,
    0x0,

    /* U+002A "*" */
    0x4, 0x6e, 0x28, 0x10,

    /* U+002B "+" */
    0x0, 0x3, 0x7, 0xf0, 0x30, 0xc, 0x0,

    /* U+002C "," */
    0x32, 0x50,

    /* U+002D "-" */
    0xb4,

    /* U+002E "." */
    0x7,

    /* U+002F "/" */
    0x2, 0x0, 0xc0, 0x20, 0x14, 0x8, 0x3, 0x0,
    0x80, 0x50, 0x20, 0xc, 0x2, 0x0,

    /* U+0030 "0" */
    0x2d, 0xc, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc3,
    0x30, 0xb4,

    /* U+0031 "1" */
    0xc, 0x3c, 0xc, 0xc, 0xc, 0xc, 0xc, 0xc,

    /* U+0032 "2" */
    0x3d, 0x0, 0xc0, 0x30, 0x24, 0xc, 0xc, 0x3,
    0x1, 0xfc,

    /* U+0033 "3" */
    0x3c, 0x6, 0x6, 0x2c, 0x6, 0x3, 0x3, 0x7d,

    /* U+0034 "4" */
    0xa, 0x3, 0x82, 0x60, 0x88, 0x52, 0x1f, 0xd0,
    0x20, 0x8,

    /* U+0035 "5" */
    0x3e, 0x30, 0x30, 0x3c, 0x7, 0x3, 0x3, 0x7c,

    /* U+0036 "6" */
    0xa, 0x9, 0x3, 0x0, 0xf4, 0x63, 0x18, 0xc3,
    0x30, 0xb8,

    /* U+0037 "7" */
    0x7f, 0x0, 0xc0, 0x90, 0x30, 0xc, 0x6, 0x2,
    0x40, 0x90,

    /* U+0038 "8" */
    0x2e, 0x8, 0xc2, 0x30, 0xa4, 0x3a, 0x18, 0xc6,
    0x30, 0xb4,

    /* U+0039 "9" */
    0x2d, 0x8, 0xc6, 0x30, 0xcc, 0x2f, 0x0, 0xc0,
    0x90, 0xe0,

    /* U+003A ":" */
    0x30, 0x0, 0x3,

    /* U+003B ";" */
    0x30, 0x0, 0x6, 0x54,

    /* U+003C "<" */
    0x1, 0x3, 0x47, 0x0, 0xa0, 0x7, 0x0, 0x0,

    /* U+003D "=" */
    0x7f, 0x0, 0x7, 0xf0,

    /* U+003E ">" */
    0x10, 0xa, 0x0, 0x30, 0x38, 0x60, 0x0, 0x0,

    /* U+003F "?" */
    0x7c, 0x9, 0x9, 0x18, 0x30, 0x10, 0x0, 0x30,

    /* U+0040 "@" */
    0x7, 0xf8, 0x6, 0x1, 0x83, 0x1f, 0x30, 0x8c,
    0xc9, 0x63, 0x32, 0x48, 0xcc, 0x83, 0x1e, 0xe0,
    0x60, 0x0, 0x6, 0xe0, 0x0,

    /* U+0041 "A" */
    0xd, 0x0, 0xe0, 0x17, 0x3, 0x24, 0x31, 0x83,
    0xfc, 0x50, 0xc9, 0xc,

    /* U+0042 "B" */
    0x3f, 0x43, 0xc, 0x30, 0xc3, 0xf4, 0x30, 0xc3,
    0xc, 0x30, 0xc3, 0xf4,

    /* U+0043 "C" */
    0x1f, 0x8c, 0x7, 0x1, 0x80, 0x60, 0xc, 0x3,
    0x40, 0x3e,

    /* U+0044 "D" */
    0x3f, 0x43, 0xc, 0x30, 0xa3, 0x6, 0x30, 0x63,
    0xa, 0x30, 0xc3, 0xf4,

    /* U+0045 "E" */
    0x3f, 0x4c, 0x3, 0x0, 0xfc, 0x30, 0xc, 0x3,
    0x0, 0xfd,

    /* U+0046 "F" */
    0x3f, 0x4c, 0x3, 0x0, 0xfc, 0x30, 0xc, 0x3,
    0x0, 0xc0,

    /* U+0047 "G" */
    0xf, 0x83, 0x40, 0x70, 0x6, 0x0, 0x60, 0xc3,
    0xc, 0x34, 0xc0, 0xfc,

    /* U+0048 "H" */
    0x30, 0x93, 0x9, 0x30, 0x93, 0xfd, 0x30, 0x93,
    0x9, 0x30, 0x93, 0x9,

    /* U+0049 "I" */
    0x33, 0x33, 0x33, 0x33,

    /* U+004A "J" */
    0x9, 0x9, 0x9, 0x9, 0x9, 0x9, 0x9, 0xb8,

    /* U+004B "K" */
    0x30, 0xc3, 0x24, 0x36, 0x3, 0xc0, 0x3d, 0x3,
    0x30, 0x31, 0xc3, 0xd,

    /* U+004C "L" */
    0x30, 0xc, 0x3, 0x0, 0xc0, 0x30, 0xc, 0x3,
    0x0, 0xfd,

    /* U+004D "M" */
    0x34, 0x1c, 0x38, 0x2c, 0x3c, 0x2c, 0x35, 0x5c,
    0x32, 0x8c, 0x23, 0xcc, 0x21, 0x4c, 0x20, 0x8,

    /* U+004E "N" */
    0x30, 0x53, 0x85, 0x3c, 0x53, 0x65, 0x33, 0x93,
    0x1d, 0x30, 0xd3, 0x9,

    /* U+004F "O" */
    0xf, 0x80, 0xd2, 0x83, 0x3, 0x18, 0xc, 0x60,
    0x30, 0xc0, 0xc3, 0x4a, 0x3, 0xe0,

    /* U+0050 "P" */
    0x3f, 0xc, 0x73, 0xc, 0xc7, 0x3e, 0xc, 0x3,
    0x0, 0xc0,

    /* U+0051 "Q" */
    0xf, 0x80, 0xd2, 0x43, 0x3, 0x18, 0xc, 0x60,
    0x31, 0xc0, 0xc3, 0x6, 0x7, 0xb0, 0x3, 0x0,
    0x3, 0x40, 0x0, 0x0,

    /* U+0052 "R" */
    0x3f, 0x3, 0x18, 0x30, 0xc3, 0x18, 0x3f, 0x3,
    0x34, 0x31, 0x83, 0xc,

    /* U+0053 "S" */
    0x2e, 0x18, 0x6, 0x0, 0xd0, 0xa, 0x0, 0xc0,
    0x31, 0xf4,

    /* U+0054 "T" */
    0xbf, 0x43, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x30,

    /* U+0055 "U" */
    0x30, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0xc, 0x30, 0xc1, 0xf4,

    /* U+0056 "V" */
    0x90, 0xc6, 0xc, 0x60, 0x83, 0x14, 0x32, 0x2,
    0x70, 0xe, 0x0, 0xd0,

    /* U+0057 "W" */
    0x90, 0x3, 0x61, 0xc2, 0x62, 0xc6, 0x33, 0x85,
    0x32, 0x59, 0x35, 0x2c, 0x2c, 0x3c, 0x1c, 0x28,

    /* U+0058 "X" */
    0x91, 0x8c, 0xc2, 0xa0, 0x34, 0x1d, 0xd, 0xc2,
    0x26, 0x43,

    /* U+0059 "Y" */
    0xd1, 0x98, 0x93, 0x30, 0xa8, 0xc, 0x3, 0x0,
    0xc0, 0x30,

    /* U+005A "Z" */
    0x7f, 0x40, 0xc0, 0x90, 0x30, 0x18, 0xc, 0x6,
    0x2, 0xfd,

    /* U+005B "[" */
    0xf3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xf,
    0x0,

    /* U+005C "\\" */
    0x20, 0xc, 0x2, 0x0, 0x50, 0x8, 0x3, 0x0,
    0x80, 0x14, 0x2, 0x0, 0xc0, 0x20,

    /* U+005D "]" */
    0xb0, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xcb,
    0x0,

    /* U+005E "^" */
    0x1c, 0xa, 0x43, 0x31, 0x48, 0x0, 0x0,

    /* U+005F "_" */
    0x3f, 0xc0,

    /* U+0060 "`" */
    0x40, 0xc0, 0x0,

    /* U+0061 "a" */
    0x3d, 0x3, 0x2f, 0x63, 0x53, 0x3f,

    /* U+0062 "b" */
    0x10, 0xc, 0x3, 0x0, 0xf8, 0x32, 0x4c, 0x63,
    0x18, 0xc9, 0x3e, 0x0,

    /* U+0063 "c" */
    0x2d, 0x30, 0x60, 0x60, 0x70, 0x2e,

    /* U+0064 "d" */
    0x1, 0x0, 0x90, 0x24, 0xbd, 0x72, 0x58, 0x96,
    0x24, 0xc9, 0x2f, 0x0,

    /* U+0065 "e" */
    0x2e, 0x8, 0xc7, 0xf1, 0x80, 0x30, 0xb, 0xc0,

    /* U+0066 "f" */
    0x2d, 0x30, 0x3c, 0x30, 0x30, 0x30, 0x30, 0x30,

    /* U+0067 "g" */
    0x2f, 0xc, 0x96, 0x25, 0x89, 0x72, 0x4b, 0xd0,
    0x30, 0xf8,

    /* U+0068 "h" */
    0x10, 0xc, 0x3, 0x0, 0xfc, 0x32, 0x4c, 0x63,
    0x18, 0xc6, 0x31, 0x80,

    /* U+0069 "i" */
    0x30, 0x33, 0x33, 0x33,

    /* U+006A "j" */
    0xc, 0x0, 0xc3, 0xc, 0x30, 0xc3, 0xd, 0xd0,

    /* U+006B "k" */
    0x20, 0xc, 0x3, 0x0, 0xcc, 0x36, 0xf, 0x3,
    0xc0, 0xcc, 0x32, 0x40,

    /* U+006C "l" */
    0x20, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x34,

    /* U+006D "m" */
    0x3e, 0xf4, 0xc9, 0x33, 0x24, 0xcc, 0x93, 0x32,
    0x4c, 0xc9, 0x30,

    /* U+006E "n" */
    0x3f, 0xc, 0x93, 0x18, 0xc6, 0x31, 0x8c, 0x60,

    /* U+006F "o" */
    0x2e, 0xc, 0x96, 0x19, 0x86, 0x32, 0x4b, 0x80,

    /* U+0070 "p" */
    0x3e, 0xc, 0x93, 0x18, 0xc6, 0x32, 0x4f, 0x83,
    0x0, 0xc0,

    /* U+0071 "q" */
    0x2f, 0xc, 0x96, 0x25, 0x89, 0x72, 0x4b, 0xd0,
    0x24, 0x9,

    /* U+0072 "r" */
    0x3d, 0x30, 0x30, 0x30, 0x30, 0x30,

    /* U+0073 "s" */
    0x3c, 0x60, 0x30, 0xc, 0x9, 0x7c,

    /* U+0074 "t" */
    0x20, 0x20, 0x3c, 0x20, 0x20, 0x20, 0x30, 0x2c,

    /* U+0075 "u" */
    0x22, 0x48, 0x92, 0x24, 0x89, 0x32, 0x4b, 0xd0,

    /* U+0076 "v" */
    0x93, 0x24, 0xc6, 0x60, 0xd4, 0x3c, 0x7, 0x0,

    /* U+0077 "w" */
    0x87, 0x32, 0x5c, 0xc5, 0xa2, 0xa, 0x94, 0x39,
    0xd0, 0x93, 0x0,

    /* U+0078 "x" */
    0x93, 0xe, 0x42, 0xc0, 0xb0, 0x26, 0x24, 0xc0,

    /* U+0079 "y" */
    0x93, 0x24, 0xc6, 0x60, 0xe4, 0x2c, 0x6, 0x2,
    0x43, 0x80,

    /* U+007A "z" */
    0x7d, 0xc, 0x18, 0x30, 0x60, 0xbd,

    /* U+007B "{" */
    0x18, 0xc3, 0xc, 0x32, 0x43, 0xc, 0x30, 0xc1,
    0x80,

    /* U+007C "|" */
    0xff, 0xff, 0xfc,

    /* U+007D "}" */
    0x90, 0x83, 0xc, 0x30, 0x93, 0xc, 0x30, 0xcd,
    0x0,

    /* U+007E "~" */
    0x75, 0x62, 0xc0,

    /* U+00A0 " " */

    /* U+00A1 "¡" */
    0x30, 0x1, 0xc, 0x30, 0xc3, 0xc,

    /* U+00A2 "¢" */
    0xc, 0x3, 0x43, 0x90, 0xc0, 0x30, 0xc, 0x3,
    0x90, 0x34, 0xc, 0x0,

    /* U+00A3 "£" */
    0xf, 0x9, 0x2, 0x0, 0xc0, 0x7e, 0xc, 0x3,
    0x0, 0xfd,

    /* U+00A4 "¤" */
    0x0, 0x1e, 0xc2, 0x30, 0x8c, 0x7b, 0x0, 0x0,

    /* U+00A5 "¥" */
    0x81, 0x58, 0xc3, 0x20, 0xb4, 0x7f, 0x3, 0x6,
    0xe0, 0x30,

    /* U+00A6 "¦" */
    0xff, 0x43, 0xfc,

    /* U+00A7 "§" */
    0x2e, 0x20, 0x34, 0x6a, 0x93, 0x3a, 0xa, 0x2,
    0x7c,

    /* U+00A8 "¨" */
    0x0, 0x9c, 0x0,

    /* U+00A9 "©" */
    0x6, 0x90, 0x26, 0xa4, 0x25, 0xc, 0x68, 0x8,
    0x65, 0x8, 0x22, 0x8c, 0x24, 0x24, 0x6, 0x90,

    /* U+00AA "ª" */
    0x28, 0x22, 0xe2, 0x6c,

    /* U+00AB "«" */
    0x10, 0xc, 0xc6, 0x61, 0x8c, 0x22, 0x40, 0x0,

    /* U+00AC "¬" */
    0xbf, 0x0, 0xc0, 0x20,

    /* U+00AD "­" */
    0xb4,

    /* U+00AE "®" */
    0x6, 0x90, 0x2a, 0xa4, 0x25, 0x8c, 0x65, 0x88,
    0x67, 0xc8, 0x25, 0x8c, 0x24, 0x24, 0x6, 0x90,

    /* U+00AF "¯" */
    0x78,

    /* U+00B0 "°" */
    0x66, 0x26, 0x40,

    /* U+00B1 "±" */
    0xc, 0x3, 0x7, 0xf0, 0x30, 0x0, 0x1f, 0xc0,

    /* U+00B2 "²" */
    0x74, 0x22, 0x58, 0xb4,

    /* U+00B3 "³" */
    0x74, 0x53, 0x2, 0x74,

    /* U+00B4 "´" */
    0x11, 0x84, 0x0,

    /* U+00B5 "µ" */
    0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x8f, 0xd3,
    0x0, 0xc0,

    /* U+00B6 "¶" */
    0x2f, 0x9f, 0x2b, 0xc9, 0xf2, 0x2c, 0x82, 0x20,
    0x88, 0x22, 0x8, 0x82, 0x20,

    /* U+00B7 "·" */
    0x7, 0x0,

    /* U+00B8 "¸" */
    0x10, 0x92, 0x0,

    /* U+00B9 "¹" */
    0x31, 0xc2, 0x8, 0x20,

    /* U+00BA "º" */
    0x28, 0x55, 0x55, 0x28,

    /* U+00BB "»" */
    0x1, 0xc, 0xc2, 0x64, 0xc9, 0x62, 0x0, 0x0,

    /* U+00BC "¼" */
    0x30, 0x20, 0x30, 0x80, 0x20, 0xc0, 0x21, 0x44,
    0x3, 0x2c, 0x2, 0x28, 0x8, 0x2c, 0x8, 0x8,

    /* U+00BD "½" */
    0x30, 0x50, 0x20, 0xc0, 0x20, 0x80, 0x22, 0x28,
    0x3, 0x8, 0x5, 0xc, 0xc, 0x20, 0x8, 0x38,

    /* U+00BE "¾" */
    0x64, 0x20, 0x8, 0x50, 0x34, 0xc0, 0x9, 0x80,
    0x66, 0x1c, 0x2, 0x28, 0x5, 0x2c, 0x8, 0x8,

    /* U+00BF "¿" */
    0x18, 0x0, 0x4, 0x18, 0x30, 0xa0, 0x90, 0x3d
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 34, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 46, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 67, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 9, .adv_w = 100, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 76, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 34, .adv_w = 114, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 48, .adv_w = 90, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 39, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 62, .adv_w = 50, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 74, .adv_w = 50, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 83, .adv_w = 68, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 87, .adv_w = 76, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 94, .adv_w = 41, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 96, .adv_w = 41, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 97, .adv_w = 41, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 48, .box_w = 5, .box_h = 11, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 112, .adv_w = 76, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 76, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 76, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 76, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 76, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 158, .adv_w = 76, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 166, .adv_w = 76, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 76, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 76, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 76, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 41, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 41, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 213, .adv_w = 76, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 76, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 225, .adv_w = 76, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 60, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 145, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 262, .adv_w = 89, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 92, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 83, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 101, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 80, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 318, .adv_w = 75, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 92, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 101, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 352, .adv_w = 45, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 356, .adv_w = 70, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 364, .adv_w = 91, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 376, .adv_w = 73, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 386, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 402, .adv_w = 102, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 106, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 428, .adv_w = 85, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 438, .adv_w = 106, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 458, .adv_w = 90, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 470, .adv_w = 70, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 480, .adv_w = 75, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 490, .adv_w = 97, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 502, .adv_w = 87, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 514, .adv_w = 133, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 530, .adv_w = 83, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 540, .adv_w = 79, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 550, .adv_w = 76, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 560, .adv_w = 49, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 569, .adv_w = 48, .box_w = 5, .box_h = 11, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 583, .adv_w = 49, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 592, .adv_w = 76, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 599, .adv_w = 65, .box_w = 6, .box_h = 1, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 601, .adv_w = 55, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 604, .adv_w = 76, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 610, .adv_w = 82, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 622, .adv_w = 62, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 628, .adv_w = 82, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 640, .adv_w = 77, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 648, .adv_w = 54, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 656, .adv_w = 82, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 666, .adv_w = 85, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 678, .adv_w = 43, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 682, .adv_w = 43, .box_w = 3, .box_h = 10, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 690, .adv_w = 75, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 702, .adv_w = 43, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 709, .adv_w = 123, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 720, .adv_w = 85, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 728, .adv_w = 81, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 736, .adv_w = 82, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 746, .adv_w = 82, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 756, .adv_w = 58, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 762, .adv_w = 60, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 768, .adv_w = 56, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 776, .adv_w = 84, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 784, .adv_w = 70, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 792, .adv_w = 101, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 803, .adv_w = 69, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 811, .adv_w = 70, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 821, .adv_w = 63, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 827, .adv_w = 47, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 836, .adv_w = 47, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 839, .adv_w = 47, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 848, .adv_w = 76, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 851, .adv_w = 34, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 851, .adv_w = 46, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 857, .adv_w = 76, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 869, .adv_w = 76, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 879, .adv_w = 76, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 887, .adv_w = 76, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 897, .adv_w = 47, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 900, .adv_w = 70, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 909, .adv_w = 55, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 912, .adv_w = 125, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 928, .adv_w = 56, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 932, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 940, .adv_w = 76, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 944, .adv_w = 41, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 945, .adv_w = 125, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 961, .adv_w = 55, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 962, .adv_w = 51, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 965, .adv_w = 76, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 973, .adv_w = 49, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 977, .adv_w = 49, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 981, .adv_w = 55, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 984, .adv_w = 86, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 994, .adv_w = 93, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1007, .adv_w = 40, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 1009, .adv_w = 55, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1012, .adv_w = 49, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 1016, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 1020, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1028, .adv_w = 124, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1044, .adv_w = 124, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1060, .adv_w = 124, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1076, .adv_w = 60, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -2}
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
    0, 0, 0, -11, 0, -6, -16, 0,
    0, 4, 0, 4, 4, 0, 4, 0,
    0, 0, -6, 0, -11, 0, 0, -3,
    -4, 0, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 4,
    0, 0, 4, 0, 3, -4, 0, 0,
    0, 1, -4, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    0, 4, 0, 3, 0, 0, 3, 0,
    0, 0, 0, 0, 0, 10, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    0, -1, -3, 0, -1, -5, 0, -5,
    -4, -5, -4, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -8, 0, -3, -16, 0,
    0, 4, 0, 4, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 4,
    0, -6, 5, 0, 2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 4, -8, 0,
    -4, -8, 0, -2, -2, -5, -8, -2,
    0, 0, 0, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, -1, -9, 0, 0, 9, 0, 7,
    6, 7, 7, 3, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 4, 0, 0, 3, 0,
    0, -5, -1, -2, -2, 0, -2, 4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, -5, 0, -2, -7, 0, -3,
    -2, -4, -5, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, -2, 0, -8, 5, 0, 3,
    4, -4, 0, 5, 0, -4, 5, 0,
    2, -6, -3, -5, -4, 4, -7, 4,
    -2, -4, 4, 0, 0, 0, 0, 0,
    2, 0, -1, 0, 2, 5, 0, 4,
    -2, -1, 0, 0, 0, 0, -1, -3,
    -2, -1, 0, -3, 0, -2, 0, 0,
    0, 0, 0, 0, 0, -3, 0, -1,
    -1, -1, -3, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, -2, 0, 0,
    6, 0, -2, 6, 2, 5, -5, 5,
    4, 4, -2, 5, 0, -2, 6, 0,
    4, 5, 0, 5, 0, 4, 3, 4,
    9, 5, 0, 0, -2, 0, 0, 0,
    0, 0, -3, 0, 0, 3, 0, 3,
    -3, 5, -4, 4, -3, -4, -3, -3,
    -3, -6, 4, -4, 0, -4, -2, -4,
    0, 0, -7, 0, 0, -5, 0, -2,
    0, -3, -4, 0, 0, -4, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, -3, 0, 0,
    0, -2, -2, 0, 0, 2, 0, 0,
    4, 0, 0, 2, 0, -3, 3, 0,
    0, 0, 0, 0, 0, 0, 3, 2,
    3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 2, -1, 0,
    -2, 0, 0, 0, 4, -7, -3, 4,
    4, -16, 4, -9, -2, 2, -4, -5,
    0, -2, -13, 0, 0, 4, 0, 3,
    3, 2, 4, 0, 6, 4, -4, 0,
    -4, 0, 0, -4, -3, -1, -4, 0,
    0, -4, 0, -4, 0, 4, 0, -2,
    0, 0, 0, 0, -2, 0, 4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, -3, 0, -4, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, -4, 0, 0, -5, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, -4, 0,
    -4, 3, -10, 3, 2, 0, -5, 4,
    0, -7, 5, 0, 0, 1, 0, 2,
    -1, 4, 3, 4, 4, -1, -2, 0,
    -4, 0, 0, 0, 2, 0, -6, -5,
    -4, 3, -5, 2, -2, 0, -6, 0,
    -12, -3, -2, 0, -15, 4, -9, 4,
    5, 0, -2, 5, 0, -6, 5, 0,
    2, -11, -3, -9, -6, 4, -9, 3,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, -2,
    -2, 0, -2, 0, 0, 0, 0, 0,
    4, -4, -3, -3, 4, -17, 0, -8,
    4, 0, 0, -6, 0, 0, -16, 0,
    2, 0, 0, 3, 2, -1, 2, 0,
    5, 0, -4, 0, -1, 0, 0, 0,
    0, 0, 0, 4, 4, 3, 4, 0,
    0, 0, -1, 0, -3, -4, -3, -3,
    -3, -6, 4, -2, 0, -4, -2, -4,
    0, 0, -7, 0, 0, -5, 0, -2,
    0, -3, -4, 0, 0, -4, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, -3, 0, 0,
    0, 0, -4, 0, -4, 2, -4, 2,
    0, -3, -3, 2, 0, -2, 4, 0,
    0, -3, 0, -2, 0, 2, -2, 3,
    0, -4, -2, 0, -4, 0, -2, 0,
    0, -1, -2, -2, -2, 0, -2, 1,
    -3, -2, -3, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 0, 2, 0, 1,
    0, 2, 2, 0, 0, 0, 0, 2,
    0, 2, 0, 0, 4, 0, 4, 0,
    4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 4, 0,
    4, -4, -4, 3, 4, -8, -8, -11,
    -5, 4, -7, -6, 0, -5, -9, 0,
    0, 4, 0, 5, 3, 4, 6, 0,
    9, 3, -8, 0, -10, 0, 0, -8,
    -8, 0, -8, -4, -4, -5, -4, -7,
    -2, 4, -9, -8, 0, 0, 0, 0,
    0, -4, 0, -6, 0, 0, 0, -2,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    4, -2, -5, 3, 4, -9, -2, -9,
    -2, 3, -4, -5, 0, -2, -10, 0,
    0, 5, 0, 5, 3, 4, 6, 0,
    6, 0, -4, 0, -4, 0, 0, -3,
    -4, 0, -4, 0, 0, 0, 0, -3,
    -2, 4, -4, -1, 4, -2, -4, 0,
    0, -7, -2, -5, -2, 1, -4, -4,
    0, 0, -9, 0, 0, 3, 0, 4,
    2, 1, 4, 0, 2, 0, -3, 0,
    -3, 0, 0, -3, -2, 0, -2, 0,
    0, 0, 0, 0, -2, 0, -2, 0,
    0, -3, -4, 0, 0, 4, -5, 2,
    0, 0, -4, 4, 0, -3, 4, 0,
    0, 2, 0, 3, 0, 4, 3, 2,
    4, 0, 0, 0, -4, 0, 0, 0,
    0, -2, -3, -3, -3, 3, -3, 0,
    -3, 0, -5, 0, 4, -5, -4, 3,
    2, -7, -8, -9, -2, 4, -5, -7,
    0, -4, -11, -4, 0, 6, 0, 6,
    4, 4, 6, 1, 7, 2, -6, 0,
    -8, 0, 0, -8, -6, 0, -7, -2,
    -2, -3, -2, -4, -2, 4, -7, -4,
    0, -2, -4, 0, 0, 2, -6, 0,
    2, 0, -4, 2, 0, -2, 3, 0,
    0, 0, 0, 2, 0, 0, 2, 0,
    2, 0, 0, 0, -4, 0, 0, 0,
    0, 0, -1, -2, -1, 4, -2, 0,
    -4, 0, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, -4, 0, 0, -1, 3, 0, 0,
    0, 0, 0, 0, 0, 14, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 4, -3, -5, 5, 0,
    3, -5, -5, -7, -3, 0, -7, 0,
    0, 0, 4, 2, 1, 14, -2, 2,
    2, -1, 0, -2, 0, 2, 7, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    -1, 0, -2, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, -3, 0, 3, 2,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, -2, -1, -2,
    0, -2, 0, 0, 4, 0, 0, 4,
    0, 3, -2, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 2, 2, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 4,
    4, 2, 4, 0, -2, 2, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, -1, -1, 0,
    0, 0, 0, 0, 9, 0, 0, 10,
    2, -11, -6, -4, 0, 4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 11, 7, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 4,
    4, 3, 4, 0, 0, 9, -2, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 0, -4,
    -4, 0, 0, 4, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -5, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    -1, 0, -2, 0, 0, -2, 0, 0,
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
    5, 0, 0, 0, 2, -12, -4, -4,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, -3, 0, -2, 0, 0, 0,
    0, 0, 0, 6, 6, 4, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 4, 0, 0, 0, 0,
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
    4, 0, 0, 0, 2, -7, 0, -2,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, -2, 0, -2, 0, 0, 0,
    0, 0, 0, 4, 4, 3, 4, 0,
    0, 0, 0, 0, 4, 0, 0, 0,
    2, -4, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 4,
    4, 3, 4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, -1, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 3, 0, 0,
    -2, 0, -3, 0, 4, 0, 0, 0,
    2, -7, 0, -2, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, -2, 0,
    -2, 0, 0, 0, 0, 0, 0, 4,
    4, 3, 4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, -2, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -1,
    0, -3, -1, 0, 2, 4, 0, 4,
    0, 0, 4, 0, 0, 0, 0, 0,
    0, 10, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 0, 12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, -4, 0,
    -2, -4, 0, -2, -2, -3, -3, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -7, 0, -3,
    -2, 0, -5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 0,
    0, -8, 0, -1, 0, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 0, -2, -9, 0, -4,
    -2, -5, -7, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, -2, -5, 0,
    0, -11, -3, -4, -3, -4, -4, -2,
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
const lv_font_t UbuntuCond11 = {
#else
lv_font_t UbuntuCond11 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 12,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UBUNTUCOND11*/


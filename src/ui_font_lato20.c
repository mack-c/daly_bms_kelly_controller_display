/*******************************************************************************
 * Size: 20 px
 * Bpp: 2
 * Opts: --bpp 2 --size 20 --font C:\Users\chris\Documents\SquareLine\assets\Lato-BoldItalic.ttf -o C:\Users\chris\Documents\SquareLine\assets\ui_font_lato20.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_LATO20
#define UI_FONT_LATO20 1
#endif

#if UI_FONT_LATO20

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0xb, 0x82, 0xd0, 0xf4, 0x3c, 0xf, 0x3, 0xc1,
    0xf0, 0x78, 0x1e, 0x7, 0x40, 0x0, 0x0, 0x3c,
    0x1f, 0x83, 0xc0,

    /* U+0022 "\"" */
    0x2d, 0x7c, 0xf1, 0xe3, 0xcb, 0x8f, 0x2d, 0x38,
    0xb0, 0x40, 0x40,

    /* U+0023 "#" */
    0x0, 0x3c, 0x3c, 0x0, 0x78, 0x78, 0x0, 0xb4,
    0xb4, 0x0, 0xf0, 0xf0, 0x1f, 0xff, 0xff, 0x2f,
    0xff, 0xfd, 0x3, 0xc2, 0xc0, 0x3, 0xc3, 0xc0,
    0x7, 0x87, 0x80, 0xbf, 0xff, 0xf8, 0x7f, 0xff,
    0xf4, 0xf, 0xf, 0x0, 0x1e, 0x1e, 0x0, 0x2c,
    0x2d, 0x0, 0x38, 0x3c, 0x0,

    /* U+0024 "$" */
    0x0, 0x0, 0x40, 0x0, 0x2, 0xc0, 0x0, 0x3,
    0x80, 0x0, 0x7f, 0xe0, 0x2, 0xff, 0xfc, 0x7,
    0xdb, 0x2c, 0xf, 0x4b, 0x0, 0xf, 0x4e, 0x0,
    0xf, 0xdd, 0x0, 0x7, 0xfe, 0x0, 0x1, 0xff,
    0xe0, 0x0, 0x2f, 0xf4, 0x0, 0x38, 0xf8, 0x0,
    0x34, 0xb8, 0x0, 0x70, 0xf8, 0x3d, 0xb2, 0xf0,
    0x7f, 0xff, 0xd0, 0xb, 0xfe, 0x0, 0x0, 0xd0,
    0x0, 0x0, 0xd0, 0x0, 0x0, 0x40, 0x0,

    /* U+0025 "%" */
    0x2, 0xf4, 0x0, 0xb4, 0x3e, 0xf0, 0xb, 0x81,
    0xd1, 0xd0, 0x7c, 0xb, 0x7, 0x43, 0xc0, 0x2c,
    0x2d, 0x3c, 0x0, 0x7e, 0xe3, 0xd0, 0x0, 0xbe,
    0x2e, 0x0, 0x0, 0x1, 0xf1, 0x90, 0x0, 0xf,
    0x3f, 0xe0, 0x0, 0xf2, 0xd3, 0xc0, 0xf, 0x4f,
    0xb, 0x0, 0xb8, 0x38, 0x3c, 0x7, 0xc0, 0xf0,
    0xf0, 0x3c, 0x2, 0xeb, 0x3, 0xd0, 0x2, 0xf4,
    0x0,

    /* U+0026 "&" */
    0x0, 0x2f, 0xc0, 0x0, 0x3f, 0xfc, 0x0, 0x2f,
    0xf, 0x40, 0xf, 0x40, 0x40, 0x3, 0xd0, 0x0,
    0x0, 0xb8, 0x0, 0x0, 0x2f, 0x40, 0x10, 0x2f,
    0xf0, 0x3c, 0x2f, 0x3f, 0x1f, 0xf, 0x7, 0xef,
    0x47, 0xc0, 0xbf, 0xc2, 0xf0, 0xf, 0xd0, 0x7d,
    0x7, 0xfc, 0xf, 0xff, 0xff, 0x80, 0xbf, 0x82,
    0xf4,

    /* U+0027 "'" */
    0x2d, 0x3c, 0x3c, 0x3c, 0x38, 0x10,

    /* U+0028 "(" */
    0x0, 0x0, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7,
    0x80, 0x3d, 0x0, 0xf0, 0x7, 0x80, 0x2d, 0x0,
    0xf0, 0x3, 0xc0, 0xf, 0x0, 0x3c, 0x0, 0xf0,
    0x3, 0xc0, 0xf, 0x0, 0x2d, 0x0, 0x78, 0x0,
    0xf0, 0x3, 0x80, 0x0, 0x0,

    /* U+0029 ")" */
    0x0, 0x0, 0x3c, 0x3, 0xc0, 0x2d, 0x2, 0xe0,
    0x1e, 0x1, 0xf0, 0xf, 0x0, 0xf0, 0xf, 0x1,
    0xf0, 0x1e, 0x2, 0xd0, 0x3c, 0x3, 0xc0, 0xb8,
    0xf, 0x1, 0xe0, 0x3c, 0x3, 0x80, 0x0, 0x0,

    /* U+002A "*" */
    0x2, 0x40, 0x4d, 0x43, 0xfb, 0x43, 0xf0, 0x7f,
    0xe1, 0x5c, 0x80, 0x60, 0x0, 0x0,

    /* U+002B "+" */
    0x0, 0x78, 0x0, 0xb, 0x40, 0x0, 0xb4, 0x0,
    0xf, 0x0, 0xbf, 0xff, 0xff, 0xff, 0xff, 0x0,
    0xf0, 0x0, 0xe, 0x0, 0x1, 0xe0, 0x0, 0x1d,
    0x0, 0x1, 0x80, 0x0,

    /* U+002C "," */
    0x3c, 0xbd, 0x3c, 0x1c, 0x34, 0x60, 0x0,

    /* U+002D "-" */
    0x0, 0x3, 0xff, 0x3f, 0xf0,

    /* U+002E "." */
    0x0, 0x7c, 0xbd, 0x3c,

    /* U+002F "/" */
    0x0, 0x1, 0xd0, 0x0, 0x3c, 0x0, 0xb, 0x40,
    0x0, 0xf0, 0x0, 0x1d, 0x0, 0x3, 0xc0, 0x0,
    0x78, 0x0, 0xf, 0x0, 0x1, 0xe0, 0x0, 0x2c,
    0x0, 0x3, 0xc0, 0x0, 0xb4, 0x0, 0xf, 0x0,
    0x2, 0xd0, 0x0, 0x3c, 0x0, 0x7, 0x40, 0x0,
    0x50, 0x0, 0x0,

    /* U+0030 "0" */
    0x0, 0x7f, 0x80, 0x2, 0xff, 0xf0, 0xb, 0xd1,
    0xf8, 0xf, 0x40, 0xbc, 0x2f, 0x0, 0x3d, 0x3e,
    0x0, 0x3d, 0x3d, 0x0, 0x3d, 0x3d, 0x0, 0x3d,
    0x7c, 0x0, 0x7c, 0x7c, 0x0, 0x7c, 0x3d, 0x0,
    0xf8, 0x3e, 0x1, 0xf4, 0x2f, 0x47, 0xe0, 0xf,
    0xff, 0xc0, 0x2, 0xfd, 0x0,

    /* U+0031 "1" */
    0x0, 0x7c, 0x0, 0xbf, 0x0, 0xff, 0xc0, 0xfe,
    0xf0, 0x38, 0xb8, 0x0, 0x3e, 0x0, 0xf, 0x40,
    0x3, 0xd0, 0x0, 0xf0, 0x0, 0x7c, 0x0, 0x1f,
    0x0, 0xb, 0xc0, 0x2, 0xe0, 0x2f, 0xff, 0xcf,
    0xff, 0xf0,

    /* U+0032 "2" */
    0x0, 0x7f, 0xd0, 0x2, 0xff, 0xf4, 0x7, 0xd1,
    0xfc, 0xf, 0x40, 0x7c, 0x5, 0x0, 0x7c, 0x0,
    0x0, 0xbc, 0x0, 0x0, 0xf4, 0x0, 0x3, 0xe0,
    0x0, 0xf, 0x80, 0x0, 0x3e, 0x0, 0x0, 0xf8,
    0x0, 0x7, 0xd0, 0x0, 0x1f, 0x95, 0x50, 0x7f,
    0xff, 0xf4, 0xbf, 0xff, 0xf0,

    /* U+0033 "3" */
    0x0, 0x2f, 0xd0, 0x1, 0xff, 0xf8, 0x3, 0xe0,
    0xbc, 0xb, 0x80, 0x3d, 0x1, 0x0, 0x3c, 0x0,
    0x0, 0xf8, 0x0, 0x1f, 0xd0, 0x0, 0x2f, 0xe0,
    0x0, 0x1, 0xf8, 0x0, 0x0, 0xbc, 0x14, 0x0,
    0xbc, 0x3d, 0x0, 0xf8, 0x3f, 0x47, 0xf0, 0x1f,
    0xff, 0xd0, 0x2, 0xfe, 0x0,

    /* U+0034 "4" */
    0x0, 0x0, 0xf8, 0x0, 0x3, 0xf4, 0x0, 0xf,
    0xf4, 0x0, 0x2e, 0xf0, 0x0, 0xbc, 0xf0, 0x1,
    0xf0, 0xf0, 0x7, 0xc1, 0xf0, 0xf, 0x41, 0xe0,
    0x3d, 0x2, 0xe0, 0xbf, 0xff, 0xfc, 0x7f, 0xff,
    0xfc, 0x0, 0x3, 0xc0, 0x0, 0x3, 0xc0, 0x0,
    0x3, 0xc0, 0x0, 0x7, 0xc0,

    /* U+0035 "5" */
    0x0, 0xff, 0xfc, 0x1, 0xff, 0xfc, 0x3, 0xd5,
    0x50, 0x3, 0xc0, 0x0, 0x7, 0x80, 0x0, 0xb,
    0xff, 0x40, 0xf, 0xff, 0xe0, 0x1, 0x3, 0xf0,
    0x0, 0x0, 0xf4, 0x0, 0x0, 0xf4, 0x0, 0x0,
    0xf0, 0x0, 0x2, 0xf0, 0x3d, 0xb, 0xd0, 0x7f,
    0xff, 0x40, 0xb, 0xf8, 0x0,

    /* U+0036 "6" */
    0x0, 0x2, 0xf0, 0x0, 0x2f, 0x0, 0x1, 0xf0,
    0x0, 0x1f, 0x0, 0x0, 0xf0, 0x0, 0xf, 0xfe,
    0x0, 0xbf, 0xff, 0x7, 0xe0, 0x7e, 0x3e, 0x0,
    0xbc, 0xf0, 0x1, 0xf3, 0xc0, 0xb, 0xcf, 0x40,
    0x3d, 0x3f, 0x47, 0xf0, 0x3f, 0xff, 0x0, 0x2f,
    0xe0, 0x0,

    /* U+0037 "7" */
    0x3f, 0xff, 0xfc, 0x3f, 0xff, 0xfc, 0x5, 0x55,
    0xf4, 0x0, 0x1, 0xf0, 0x0, 0x3, 0xd0, 0x0,
    0xb, 0x80, 0x0, 0x1f, 0x0, 0x0, 0x3e, 0x0,
    0x0, 0xbc, 0x0, 0x0, 0xf4, 0x0, 0x2, 0xf0,
    0x0, 0x7, 0xc0, 0x0, 0xf, 0x80, 0x0, 0x2f,
    0x0, 0x0, 0x3d, 0x0, 0x0,

    /* U+0038 "8" */
    0x0, 0x7f, 0xd0, 0x3, 0xff, 0xf4, 0xb, 0xc0,
    0xbc, 0xf, 0x40, 0x7c, 0xf, 0x40, 0x7c, 0xb,
    0xc1, 0xf4, 0x3, 0xff, 0xd0, 0x7, 0xff, 0xd0,
    0x2f, 0x41, 0xf4, 0x3d, 0x0, 0xf8, 0x7c, 0x0,
    0xf8, 0x7d, 0x0, 0xf8, 0x3f, 0x3, 0xf0, 0x1f,
    0xff, 0xd0, 0x6, 0xfe, 0x0,

    /* U+0039 "9" */
    0x0, 0xbf, 0x80, 0x1f, 0xff, 0xc1, 0xf8, 0x2f,
    0x4f, 0x80, 0x3e, 0x3d, 0x0, 0xb8, 0xf4, 0x3,
    0xe3, 0xf0, 0x2f, 0x7, 0xff, 0xfc, 0x6, 0xfb,
    0xc0, 0x0, 0x3d, 0x0, 0x3, 0xe0, 0x0, 0x3f,
    0x0, 0x3, 0xf0, 0x0, 0x2f, 0x40, 0x2, 0xf4,
    0x0, 0x0,

    /* U+003A ":" */
    0xf, 0xb, 0xd1, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7c, 0x2f, 0x43, 0xc0,

    /* U+003B ";" */
    0xf, 0xb, 0xd1, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7c, 0x2f, 0x7, 0xc0, 0x70, 0x34,
    0x18, 0x0, 0x0,

    /* U+003C "<" */
    0x0, 0x0, 0x80, 0x0, 0xbc, 0x0, 0xbf, 0x40,
    0xbf, 0x40, 0x7f, 0x40, 0x7, 0xf8, 0x0, 0xb,
    0xf4, 0x0, 0xf, 0xf0, 0x0, 0x1f, 0x0, 0x0,
    0x10,

    /* U+003D "=" */
    0x3f, 0xff, 0xe3, 0xff, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7f, 0xff, 0xcb, 0xff, 0xfc,

    /* U+003E ">" */
    0x0, 0x0, 0x9, 0x0, 0x3, 0xe0, 0x0, 0xbf,
    0x80, 0x2, 0xfd, 0x0, 0x1f, 0xe0, 0xb, 0xf4,
    0x2f, 0xd0, 0x7f, 0x80, 0x2e, 0x0, 0x4, 0x0,
    0x0,

    /* U+003F "?" */
    0x1b, 0xe0, 0x7f, 0xfc, 0x34, 0x7c, 0x0, 0x3c,
    0x0, 0x7c, 0x1, 0xf4, 0x7, 0xd0, 0xf, 0x0,
    0xe, 0x0, 0x9, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3d, 0x0, 0x3f, 0x0, 0x2d, 0x0,

    /* U+0040 "@" */
    0x0, 0xb, 0xf9, 0x0, 0x1, 0xfe, 0xbe, 0x0,
    0x2e, 0x0, 0x2e, 0x1, 0xe0, 0x0, 0x2c, 0xf,
    0x0, 0x64, 0x74, 0xb0, 0x2f, 0xf4, 0xe3, 0xc2,
    0xe2, 0xc3, 0x8e, 0x1e, 0xe, 0xe, 0x74, 0xf0,
    0x74, 0x75, 0xd3, 0xc3, 0xc2, 0xc7, 0x4f, 0x1f,
    0x1e, 0xe, 0x2f, 0xef, 0xe0, 0x3c, 0x14, 0x19,
    0x0, 0xb8, 0x0, 0x0, 0x0, 0xf8, 0x0, 0x24,
    0x0, 0xfe, 0xaf, 0xd0, 0x0, 0x7f, 0xe4, 0x0,

    /* U+0041 "A" */
    0x0, 0x3, 0xf0, 0x0, 0x0, 0x7f, 0x40, 0x0,
    0xf, 0xf4, 0x0, 0x1, 0xfb, 0x80, 0x0, 0x3d,
    0x7c, 0x0, 0x7, 0xc3, 0xc0, 0x0, 0xf8, 0x3d,
    0x0, 0xf, 0x2, 0xe0, 0x2, 0xe0, 0x2f, 0x0,
    0x3f, 0xff, 0xf0, 0xb, 0xff, 0xff, 0x40, 0xf4,
    0x0, 0xf8, 0x2f, 0x0, 0xf, 0xc3, 0xe0, 0x0,
    0xbc, 0x7c, 0x0, 0x7, 0xd0,

    /* U+0042 "B" */
    0xb, 0xff, 0xe0, 0xb, 0xff, 0xfc, 0xf, 0xc0,
    0xbe, 0xf, 0x80, 0x3e, 0xf, 0x80, 0x3d, 0xf,
    0x40, 0xbc, 0x1f, 0xff, 0xe0, 0x1f, 0xff, 0xf0,
    0x2f, 0x0, 0xfc, 0x2f, 0x0, 0x7c, 0x3f, 0x0,
    0x7c, 0x3e, 0x0, 0xbc, 0x3e, 0x2, 0xf8, 0x3f,
    0xff, 0xe0, 0x3f, 0xff, 0x40,

    /* U+0043 "C" */
    0x0, 0x1b, 0xf8, 0x0, 0x3f, 0xff, 0xc0, 0x3f,
    0x96, 0xf4, 0x3f, 0x40, 0x4, 0x1f, 0x40, 0x0,
    0xb, 0xc0, 0x0, 0x3, 0xe0, 0x0, 0x0, 0xf4,
    0x0, 0x0, 0x7d, 0x0, 0x0, 0xf, 0x80, 0x0,
    0x3, 0xf0, 0x0, 0x0, 0xbd, 0x0, 0x10, 0x1f,
    0xe5, 0xbc, 0x1, 0xff, 0xfe, 0x0, 0xb, 0xf8,
    0x0,

    /* U+0044 "D" */
    0xb, 0xff, 0xe4, 0x0, 0xbf, 0xff, 0xe0, 0xf,
    0xc0, 0x7f, 0x40, 0xf8, 0x0, 0xfc, 0xf, 0x80,
    0x7, 0xd0, 0xf4, 0x0, 0x7d, 0x1f, 0x40, 0x3,
    0xe1, 0xf0, 0x0, 0x3d, 0x2f, 0x0, 0x7, 0xd2,
    0xf0, 0x0, 0xbc, 0x3f, 0x0, 0xf, 0x83, 0xe0,
    0x3, 0xf0, 0x3e, 0x1, 0xfd, 0x3, 0xff, 0xff,
    0x40, 0x3f, 0xff, 0x40, 0x0,

    /* U+0045 "E" */
    0xb, 0xff, 0xfc, 0x2f, 0xff, 0xe0, 0xfc, 0x0,
    0x3, 0xe0, 0x0, 0xf, 0x80, 0x0, 0x3d, 0x0,
    0x1, 0xff, 0xfc, 0x7, 0xff, 0xe0, 0x2f, 0x0,
    0x0, 0xbc, 0x0, 0x3, 0xf0, 0x0, 0xf, 0x80,
    0x0, 0x3e, 0x0, 0x0, 0xff, 0xff, 0x43, 0xff,
    0xfc, 0x0,

    /* U+0046 "F" */
    0xb, 0xff, 0xfc, 0x2f, 0xff, 0xe0, 0xfc, 0x0,
    0x3, 0xe0, 0x0, 0xf, 0x80, 0x0, 0x3d, 0x0,
    0x1, 0xf4, 0x0, 0x7, 0xff, 0xf0, 0x2f, 0xff,
    0xc0, 0xbc, 0x0, 0x3, 0xf0, 0x0, 0xf, 0x80,
    0x0, 0x3e, 0x0, 0x0, 0xf4, 0x0, 0x3, 0xd0,
    0x0, 0x0,

    /* U+0047 "G" */
    0x0, 0x1b, 0xf9, 0x0, 0xf, 0xff, 0xf8, 0x3,
    0xf9, 0x5f, 0xc0, 0xfd, 0x0, 0x10, 0x1f, 0x40,
    0x0, 0x3, 0xf0, 0x0, 0x0, 0x3e, 0x0, 0x0,
    0x3, 0xd0, 0xf, 0xf8, 0x7d, 0x0, 0xff, 0x43,
    0xe0, 0x0, 0xf4, 0x3f, 0x0, 0xf, 0x2, 0xf4,
    0x0, 0xf0, 0xf, 0xe0, 0x7f, 0x0, 0x7f, 0xff,
    0xe0, 0x0, 0xbf, 0xe0, 0x0,

    /* U+0048 "H" */
    0xb, 0xc0, 0x3, 0xe0, 0xbc, 0x0, 0x3e, 0xf,
    0xc0, 0x3, 0xd0, 0xf8, 0x0, 0x7d, 0xf, 0x80,
    0x7, 0xd0, 0xf4, 0x0, 0xbc, 0x1f, 0xff, 0xff,
    0xc1, 0xff, 0xff, 0xfc, 0x2f, 0x0, 0xf, 0xc2,
    0xf0, 0x0, 0xf8, 0x3f, 0x0, 0xf, 0x83, 0xe0,
    0x0, 0xf4, 0x3e, 0x0, 0x1f, 0x43, 0xd0, 0x1,
    0xf0, 0x3d, 0x0, 0x2f, 0x0,

    /* U+0049 "I" */
    0x7, 0xd0, 0x7c, 0xb, 0xc0, 0xbc, 0xf, 0xc0,
    0xf8, 0xf, 0x80, 0xf4, 0xf, 0x41, 0xf0, 0x1f,
    0x2, 0xf0, 0x2f, 0x3, 0xf0, 0x3e, 0x0,

    /* U+004A "J" */
    0x0, 0xf, 0xc0, 0x3, 0xe0, 0x0, 0xf8, 0x0,
    0x3d, 0x0, 0x1f, 0x40, 0x7, 0xc0, 0x1, 0xf0,
    0x0, 0xbc, 0x0, 0x2f, 0x0, 0xf, 0xc0, 0x3,
    0xe0, 0x1, 0xf4, 0x16, 0xfc, 0xf, 0xfc, 0x3,
    0xf8, 0x0,

    /* U+004B "K" */
    0xb, 0xc0, 0xb, 0xc0, 0xbc, 0x2, 0xf4, 0xf,
    0xc0, 0x7d, 0x0, 0xf8, 0x1f, 0x80, 0xf, 0x83,
    0xe0, 0x0, 0xf4, 0xfc, 0x0, 0xf, 0xff, 0x0,
    0x1, 0xff, 0xf4, 0x0, 0x1f, 0x1f, 0xc0, 0x2,
    0xf0, 0xbd, 0x0, 0x2f, 0x3, 0xf0, 0x3, 0xe0,
    0x2f, 0x40, 0x3e, 0x0, 0xfc, 0x3, 0xe0, 0xb,
    0xd0, 0x3d, 0x0, 0x3f, 0x0,

    /* U+004C "L" */
    0xb, 0xc0, 0x2, 0xf0, 0x0, 0xfc, 0x0, 0x3e,
    0x0, 0xf, 0x80, 0x3, 0xd0, 0x1, 0xf4, 0x0,
    0x7c, 0x0, 0x2f, 0x0, 0xb, 0xc0, 0x3, 0xf0,
    0x0, 0xf8, 0x0, 0x3e, 0x55, 0xf, 0xff, 0xe3,
    0xff, 0xf8,

    /* U+004D "M" */
    0xb, 0xd0, 0x0, 0xf, 0xc0, 0xbe, 0x0, 0x2,
    0xfc, 0xf, 0xf0, 0x0, 0x3f, 0x80, 0xff, 0x40,
    0xb, 0xf8, 0xf, 0xf8, 0x1, 0xff, 0x40, 0xf7,
    0xc0, 0x3d, 0xf4, 0x1f, 0x3d, 0x7, 0xcf, 0x1,
    0xf2, 0xe0, 0xf4, 0xf0, 0x2e, 0xf, 0x2e, 0x1f,
    0x2, 0xe0, 0xfb, 0xc1, 0xf0, 0x3e, 0xb, 0xf8,
    0x2f, 0x3, 0xd0, 0x3f, 0x2, 0xe0, 0x3d, 0x3,
    0xd0, 0x2e, 0x3, 0xc0, 0x0, 0x3, 0xd0, 0x3c,
    0x0, 0x0, 0x3d, 0x0,

    /* U+004E "N" */
    0xb, 0x80, 0x2, 0xe0, 0xbc, 0x0, 0x2e, 0xf,
    0xf0, 0x3, 0xd0, 0xff, 0x40, 0x3d, 0xf, 0xfc,
    0x3, 0xd0, 0xf3, 0xd0, 0x3c, 0x1f, 0x2f, 0x7,
    0xc1, 0xf0, 0xf8, 0x7c, 0x2e, 0xb, 0xcb, 0xc2,
    0xe0, 0x3e, 0xb8, 0x3e, 0x1, 0xff, 0x83, 0xd0,
    0xf, 0xf4, 0x3d, 0x0, 0x7f, 0x43, 0xc0, 0x3,
    0xf0, 0x3c, 0x0, 0xf, 0x0,

    /* U+004F "O" */
    0x0, 0x1b, 0xf8, 0x0, 0x3, 0xff, 0xfd, 0x0,
    0x3f, 0x96, 0xfd, 0x3, 0xf0, 0x0, 0xfc, 0x1f,
    0x40, 0x2, 0xf0, 0xbc, 0x0, 0x7, 0xd3, 0xe0,
    0x0, 0xf, 0x4f, 0x40, 0x0, 0x7d, 0x7d, 0x0,
    0x1, 0xf0, 0xf8, 0x0, 0xb, 0xc3, 0xf0, 0x0,
    0x3e, 0xb, 0xd0, 0x3, 0xf0, 0xf, 0xe5, 0xbf,
    0x40, 0x1f, 0xff, 0xf0, 0x0, 0xb, 0xfd, 0x0,
    0x0,

    /* U+0050 "P" */
    0xb, 0xff, 0xd0, 0xb, 0xff, 0xf8, 0xf, 0xc1,
    0xfd, 0xf, 0x80, 0x3e, 0xf, 0x80, 0x3e, 0xf,
    0x80, 0x3e, 0xf, 0x40, 0x7d, 0x1f, 0x42, 0xfc,
    0x1f, 0xff, 0xf0, 0x2f, 0xff, 0x40, 0x2f, 0x0,
    0x0, 0x3f, 0x0, 0x0, 0x3e, 0x0, 0x0, 0x3e,
    0x0, 0x0, 0x3d, 0x0, 0x0,

    /* U+0051 "Q" */
    0x0, 0x1b, 0xf8, 0x0, 0x3, 0xff, 0xfd, 0x0,
    0x3f, 0x96, 0xfd, 0x3, 0xf0, 0x0, 0xfc, 0x1f,
    0x40, 0x2, 0xf0, 0xbc, 0x0, 0x7, 0xd3, 0xe0,
    0x0, 0xf, 0x4f, 0x40, 0x0, 0x7d, 0x7d, 0x0,
    0x1, 0xf0, 0xf8, 0x0, 0xb, 0xc3, 0xf0, 0x0,
    0x3e, 0xb, 0xd0, 0x3, 0xf0, 0xf, 0xe5, 0xbf,
    0x40, 0x1f, 0xff, 0xf0, 0x0, 0xb, 0xff, 0xe0,
    0x0, 0x0, 0xf, 0xc0, 0x0, 0x0, 0x1f, 0xc0,
    0x0, 0x0, 0x1f, 0x80,

    /* U+0052 "R" */
    0xb, 0xff, 0xd0, 0xb, 0xff, 0xf8, 0xf, 0xc1,
    0xfc, 0xf, 0x80, 0x7d, 0xf, 0x80, 0x7c, 0xf,
    0x40, 0xbc, 0xf, 0x41, 0xf8, 0x1f, 0xff, 0xe0,
    0x1f, 0xff, 0x40, 0x2f, 0xf, 0x80, 0x2f, 0xb,
    0xc0, 0x3f, 0x3, 0xe0, 0x3e, 0x3, 0xf0, 0x3e,
    0x1, 0xf8, 0x3d, 0x0, 0xfc,

    /* U+0053 "S" */
    0x0, 0x2f, 0xe0, 0x0, 0xff, 0xfc, 0x3, 0xf5,
    0xb8, 0x7, 0xc0, 0x0, 0x7, 0xc0, 0x0, 0x7,
    0xe0, 0x0, 0x3, 0xfe, 0x0, 0x1, 0xff, 0xd0,
    0x0, 0x1b, 0xf0, 0x0, 0x1, 0xf4, 0x0, 0x0,
    0xf4, 0x4, 0x1, 0xf0, 0x2f, 0x57, 0xe0, 0x2f,
    0xff, 0xc0, 0x6, 0xfd, 0x0,

    /* U+0054 "T" */
    0xbf, 0xff, 0xff, 0xff, 0xff, 0xe1, 0x5f, 0x95,
    0x0, 0x3e, 0x0, 0x0, 0xf4, 0x0, 0x7, 0xd0,
    0x0, 0x1f, 0x0, 0x0, 0xbc, 0x0, 0x2, 0xf0,
    0x0, 0xf, 0xc0, 0x0, 0x3e, 0x0, 0x0, 0xf8,
    0x0, 0x3, 0xd0, 0x0, 0xf, 0x40, 0x0, 0x7c,
    0x0, 0x0,

    /* U+0055 "U" */
    0x3f, 0x0, 0xf, 0x4f, 0x80, 0x7, 0xd3, 0xe0,
    0x1, 0xf0, 0xf4, 0x0, 0xbc, 0x3d, 0x0, 0x2f,
    0x1f, 0x0, 0xf, 0xc7, 0xc0, 0x3, 0xe2, 0xf0,
    0x0, 0xf8, 0xbc, 0x0, 0x3d, 0x3f, 0x0, 0x1f,
    0x4f, 0xc0, 0xb, 0xc2, 0xf4, 0x7, 0xe0, 0x3f,
    0x9b, 0xf0, 0xb, 0xff, 0xf0, 0x0, 0x7f, 0xd0,
    0x0,

    /* U+0056 "V" */
    0xbc, 0x0, 0xb, 0xc7, 0xd0, 0x0, 0xf8, 0x3d,
    0x0, 0x2f, 0x3, 0xe0, 0x3, 0xe0, 0x2f, 0x0,
    0x7c, 0x1, 0xf0, 0xf, 0x80, 0xf, 0x41, 0xf0,
    0x0, 0xf8, 0x3e, 0x0, 0xf, 0x83, 0xd0, 0x0,
    0xbc, 0xbc, 0x0, 0x7, 0xcf, 0x40, 0x0, 0x3f,
    0xf0, 0x0, 0x3, 0xfd, 0x0, 0x0, 0x2f, 0xc0,
    0x0, 0x1, 0xf4, 0x0, 0x0,

    /* U+0057 "W" */
    0xbc, 0x0, 0x7c, 0x0, 0x7c, 0x7c, 0x0, 0xbc,
    0x0, 0xfc, 0x7d, 0x0, 0xfc, 0x1, 0xf4, 0x3e,
    0x2, 0xfd, 0x2, 0xf0, 0x3e, 0x3, 0xee, 0x3,
    0xe0, 0x3f, 0x7, 0x9e, 0x7, 0xc0, 0x2f, 0xb,
    0x4f, 0xf, 0xc0, 0x2f, 0xf, 0xf, 0xf, 0x40,
    0x1f, 0x1e, 0xf, 0x2f, 0x0, 0xf, 0x7c, 0xb,
    0x7e, 0x0, 0xf, 0xb8, 0xb, 0xbd, 0x0, 0xf,
    0xf4, 0x7, 0xfc, 0x0, 0xf, 0xf0, 0x3, 0xf4,
    0x0, 0xb, 0xe0, 0x3, 0xf0, 0x0, 0x7, 0xc0,
    0x3, 0xe0, 0x0,

    /* U+0058 "X" */
    0x3, 0xe0, 0x3, 0xf0, 0xb, 0xc0, 0x2f, 0x40,
    0xf, 0x41, 0xf8, 0x0, 0x3f, 0xf, 0xc0, 0x0,
    0x7d, 0xbc, 0x0, 0x0, 0xff, 0xd0, 0x0, 0x1,
    0xfe, 0x0, 0x0, 0xb, 0xf8, 0x0, 0x0, 0x3f,
    0xf0, 0x0, 0x3, 0xf3, 0xe0, 0x0, 0x2f, 0x4b,
    0xc0, 0x1, 0xf8, 0xf, 0x80, 0xf, 0xc0, 0x2f,
    0x0, 0xbd, 0x0, 0x7d, 0x7, 0xe0, 0x0, 0xfc,
    0x0,

    /* U+0059 "Y" */
    0xbc, 0x0, 0x2f, 0x1f, 0x80, 0xf, 0x43, 0xf0,
    0xf, 0xc0, 0x7c, 0x7, 0xc0, 0xf, 0x83, 0xd0,
    0x2, 0xf2, 0xf0, 0x0, 0x3d, 0xf0, 0x0, 0xf,
    0xf8, 0x0, 0x1, 0xfc, 0x0, 0x0, 0x3d, 0x0,
    0x0, 0x1f, 0x40, 0x0, 0x7, 0xc0, 0x0, 0x2,
    0xf0, 0x0, 0x0, 0xbc, 0x0, 0x0, 0x3f, 0x0,
    0x0,

    /* U+005A "Z" */
    0x3, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0xf8, 0x0,
    0x0, 0x3f, 0x0, 0x0, 0xb, 0xc0, 0x0, 0x1,
    0xf8, 0x0, 0x0, 0x3f, 0x0, 0x0, 0xb, 0xc0,
    0x0, 0x1, 0xf4, 0x0, 0x0, 0x3e, 0x0, 0x0,
    0xf, 0xc0, 0x0, 0x2, 0xf4, 0x0, 0x0, 0x7e,
    0x0, 0x0, 0xf, 0xc0, 0x0, 0x2, 0xff, 0xff,
    0xd0, 0x3f, 0xff, 0xfc, 0x0,

    /* U+005B "[" */
    0x6, 0xa0, 0x3f, 0xc0, 0xf0, 0x3, 0xc0, 0xf,
    0x0, 0x78, 0x1, 0xe0, 0xb, 0x40, 0x2d, 0x0,
    0xb0, 0x3, 0xc0, 0xf, 0x0, 0x3c, 0x0, 0xf0,
    0x7, 0x80, 0x1e, 0x0, 0xb4, 0x2, 0xd0, 0xf,
    0xa0, 0x3f, 0xc0,

    /* U+005C "\\" */
    0xf0, 0xb, 0x40, 0x78, 0x3, 0x80, 0x3c, 0x3,
    0xc0, 0x2d, 0x1, 0xe0, 0xf, 0x0, 0xf0, 0xb,
    0x40, 0x74, 0x3, 0x80, 0x3c, 0x3, 0xc0, 0x2d,
    0x0, 0x50,

    /* U+005D "]" */
    0x2, 0xa4, 0xf, 0xe0, 0x7, 0x80, 0x2d, 0x0,
    0xb4, 0x3, 0xc0, 0xf, 0x0, 0x3c, 0x0, 0xf0,
    0x3, 0x80, 0x1e, 0x0, 0x78, 0x2, 0xd0, 0xb,
    0x40, 0x3c, 0x0, 0xf0, 0x3, 0xc0, 0xf, 0x2,
    0xb8, 0xf, 0xe0,

    /* U+005E "^" */
    0x0, 0xf4, 0x0, 0x1f, 0xc0, 0x3, 0xfd, 0x0,
    0x7c, 0xf0, 0xf, 0x4b, 0x41, 0xf0, 0x3c, 0x3d,
    0x2, 0xe0,

    /* U+005F "_" */
    0xaa, 0xa9, 0xff, 0xfd,

    /* U+0060 "`" */
    0x0, 0xf, 0x41, 0xf0, 0x2c,

    /* U+0061 "a" */
    0x0, 0x7f, 0xd0, 0x3f, 0xfe, 0xf, 0x83, 0xe2,
    0xf0, 0x3d, 0x3d, 0x3, 0xd7, 0xc0, 0x7c, 0xbc,
    0xb, 0xcb, 0xc0, 0xfc, 0x7d, 0x3f, 0xc3, 0xff,
    0xbc, 0x1f, 0x87, 0x80,

    /* U+0062 "b" */
    0xb, 0xc0, 0x0, 0x3e, 0x0, 0x0, 0xf8, 0x0,
    0x3, 0xd0, 0x0, 0xf, 0x40, 0x0, 0x3c, 0x7e,
    0x1, 0xf7, 0xff, 0x7, 0xf8, 0xbc, 0x2f, 0x80,
    0xf4, 0xbc, 0x3, 0xd3, 0xe0, 0x1f, 0xf, 0x80,
    0xbc, 0x3d, 0x3, 0xe0, 0xf8, 0x3f, 0x3, 0xff,
    0xf4, 0x1e, 0x7f, 0x0,

    /* U+0063 "c" */
    0x1, 0xfe, 0x2, 0xff, 0xe1, 0xf8, 0x20, 0xfc,
    0x0, 0x3d, 0x0, 0x1f, 0x0, 0x7, 0xc0, 0x1,
    0xf0, 0x0, 0x3e, 0xb, 0xb, 0xff, 0xc0, 0xbf,
    0x40,

    /* U+0064 "d" */
    0x0, 0x0, 0xb8, 0x0, 0x3, 0xe0, 0x0, 0xf,
    0x40, 0x0, 0x3d, 0x0, 0x0, 0xf0, 0x7, 0xf7,
    0xc0, 0xbf, 0xff, 0x7, 0xe0, 0xfc, 0x3f, 0x2,
    0xf0, 0xf4, 0xf, 0x87, 0xc0, 0x3e, 0x2f, 0x1,
    0xf4, 0xbc, 0xf, 0xd1, 0xf4, 0xbf, 0x3, 0xff,
    0x7c, 0x7, 0xe0, 0xf0,

    /* U+0065 "e" */
    0x1, 0xbe, 0x0, 0x7f, 0xfc, 0x1f, 0x43, 0xc3,
    0xe0, 0x7c, 0x3e, 0xbf, 0x47, 0xff, 0x80, 0x7d,
    0x0, 0x7, 0xc0, 0x0, 0x3e, 0x7, 0x82, 0xff,
    0xf4, 0x7, 0xf8, 0x0,

    /* U+0066 "f" */
    0x0, 0xbd, 0x3, 0xfd, 0xb, 0xc0, 0xf, 0x80,
    0x7f, 0xf8, 0x3f, 0xf4, 0xf, 0x0, 0x1f, 0x0,
    0x1f, 0x0, 0x2f, 0x0, 0x2f, 0x0, 0x3e, 0x0,
    0x3e, 0x0, 0x3d, 0x0, 0x3d, 0x0, 0x3c, 0x0,
    0x78, 0x0, 0x10, 0x0,

    /* U+0067 "g" */
    0x0, 0xbf, 0xfc, 0x3, 0xff, 0xf8, 0xb, 0x83,
    0xe0, 0xf, 0x42, 0xe0, 0xf, 0x3, 0xd0, 0xf,
    0x87, 0xc0, 0x7, 0xff, 0x40, 0x0, 0x9b, 0x40,
    0x0, 0x7, 0x80, 0xb, 0xff, 0xc0, 0x3e, 0x57,
    0xd0, 0xb8, 0x3, 0xd0, 0xbc, 0xb, 0xc0, 0x3f,
    0xff, 0x40, 0xb, 0xf8, 0x0,

    /* U+0068 "h" */
    0xb, 0xc0, 0x0, 0x3e, 0x0, 0x0, 0xf8, 0x0,
    0x3, 0xd0, 0x0, 0xf, 0x40, 0x0, 0x3d, 0x7e,
    0x1, 0xfb, 0xfe, 0x7, 0xf8, 0xbc, 0x2f, 0x81,
    0xf0, 0xbc, 0xb, 0xc3, 0xe0, 0x2f, 0xf, 0x80,
    0xb8, 0x3d, 0x3, 0xe0, 0xf4, 0xf, 0x83, 0xc0,
    0x3d, 0x1f, 0x0, 0xf4,

    /* U+0069 "i" */
    0x7, 0x40, 0xfc, 0xf, 0x80, 0x10, 0x0, 0x0,
    0xf4, 0xf, 0x1, 0xf0, 0x1f, 0x2, 0xf0, 0x2f,
    0x3, 0xe0, 0x3e, 0x3, 0xd0, 0x3d, 0x3, 0xc0,

    /* U+006A "j" */
    0x0, 0xb4, 0x3, 0xf0, 0xf, 0x80, 0x4, 0x0,
    0x0, 0x3, 0xd0, 0xf, 0x0, 0x7c, 0x1, 0xf0,
    0xb, 0xc0, 0x2f, 0x0, 0xb8, 0x3, 0xe0, 0xf,
    0x40, 0x3d, 0x0, 0xf0, 0x7, 0xc0, 0x2f, 0x7,
    0xf4, 0x1f, 0x40,

    /* U+006B "k" */
    0xb, 0xc0, 0x0, 0x2e, 0x0, 0x0, 0xf8, 0x0,
    0x3, 0xd0, 0x0, 0xf, 0x40, 0x0, 0x3d, 0xb,
    0xc1, 0xf0, 0x7d, 0x7, 0xc3, 0xd0, 0x2f, 0x3e,
    0x0, 0xbf, 0xf0, 0x3, 0xff, 0xc0, 0xf, 0x9f,
    0x40, 0x3d, 0x3f, 0x0, 0xf4, 0x7d, 0x3, 0xc0,
    0xfc, 0x1f, 0x1, 0xf0,

    /* U+006C "l" */
    0xb, 0xc2, 0xe0, 0xf8, 0x3d, 0xf, 0x43, 0xd1,
    0xf0, 0x7c, 0x2f, 0xb, 0xc2, 0xe0, 0xf8, 0x3d,
    0xf, 0x43, 0xc1, 0xf0,

    /* U+006D "m" */
    0x1e, 0x2f, 0x43, 0xf0, 0x1f, 0xbf, 0xcf, 0xf8,
    0x2f, 0xc3, 0xf8, 0xbc, 0x2f, 0x43, 0xf0, 0x7c,
    0x2f, 0x3, 0xd0, 0xbc, 0x3e, 0x7, 0xc0, 0xbc,
    0x3d, 0x7, 0xc0, 0xf8, 0x3d, 0x7, 0xc0, 0xf8,
    0x3c, 0xb, 0xc0, 0xf4, 0x7c, 0xb, 0x80, 0xf4,
    0x7c, 0xf, 0x80, 0xf0,

    /* U+006E "n" */
    0x1e, 0x1f, 0x81, 0xfb, 0xfe, 0x2f, 0xd2, 0xf2,
    0xf4, 0x2f, 0x3f, 0x2, 0xf3, 0xe0, 0x2f, 0x3d,
    0x3, 0xe3, 0xd0, 0x3e, 0x3c, 0x3, 0xd7, 0xc0,
    0x3d, 0x7c, 0x7, 0xc0,

    /* U+006F "o" */
    0x1, 0xfe, 0x0, 0xbf, 0xfc, 0x1f, 0x47, 0xd3,
    0xe0, 0x3e, 0x7c, 0x2, 0xf7, 0xc0, 0x3e, 0xbc,
    0x3, 0xd7, 0xc0, 0x7c, 0x3d, 0x1f, 0x82, 0xff,
    0xf0, 0xb, 0xf4, 0x0,

    /* U+0070 "p" */
    0x1e, 0x1f, 0x80, 0x7d, 0xff, 0xc2, 0xfd, 0x2f,
    0xb, 0xe0, 0x7c, 0x2f, 0x1, 0xf0, 0xf8, 0x7,
    0xc3, 0xd0, 0x2f, 0xf, 0x40, 0xf4, 0x3e, 0xf,
    0xc1, 0xff, 0xfc, 0x7, 0xdf, 0x80, 0x2f, 0x0,
    0x0, 0xbc, 0x0, 0x2, 0xe0, 0x0, 0xf, 0x80,
    0x0, 0x0,

    /* U+0071 "q" */
    0x0, 0x7f, 0xd0, 0x3f, 0xfe, 0xf, 0x83, 0xe2,
    0xf0, 0x3d, 0x3d, 0x3, 0xd7, 0xc0, 0x7c, 0xbc,
    0xb, 0xcb, 0xc0, 0xfc, 0x7d, 0x3f, 0xc3, 0xff,
    0xfc, 0x1f, 0x8f, 0x80, 0x0, 0xf8, 0x0, 0xf,
    0x40, 0x0, 0xf4, 0x0, 0xf, 0x0,

    /* U+0072 "r" */
    0x1e, 0x2d, 0x1f, 0xbd, 0x2f, 0xe4, 0x2f, 0x40,
    0x2f, 0x0, 0x3e, 0x0, 0x3d, 0x0, 0x3d, 0x0,
    0x3c, 0x0, 0x7c, 0x0, 0x7c, 0x0,

    /* U+0073 "s" */
    0x0, 0xbe, 0x0, 0xff, 0xe0, 0xb4, 0x10, 0x3d,
    0x0, 0xf, 0xe0, 0x0, 0xff, 0x40, 0x7, 0xf0,
    0x0, 0x3c, 0x14, 0x1f, 0xf, 0xff, 0x40, 0xbf,
    0x0,

    /* U+0074 "t" */
    0x0, 0x80, 0x3, 0xc0, 0x3, 0xc0, 0x7, 0xc0,
    0x3f, 0xfd, 0x3f, 0xfc, 0xf, 0x80, 0xf, 0x40,
    0xf, 0x40, 0xf, 0x0, 0x1f, 0x0, 0x1f, 0x0,
    0x2f, 0x10, 0x1f, 0xf0, 0xb, 0xe0,

    /* U+0075 "u" */
    0x1f, 0x1, 0xf0, 0xbc, 0x7, 0xc2, 0xf0, 0x2f,
    0xf, 0x80, 0xbc, 0x3e, 0x2, 0xe0, 0xf4, 0xf,
    0x83, 0xd0, 0x3e, 0xf, 0x42, 0xf4, 0x3d, 0x2f,
    0xd0, 0xff, 0xdf, 0x0, 0xfd, 0x3c, 0x0,

    /* U+0076 "v" */
    0x3d, 0x0, 0xf0, 0xf4, 0xb, 0x82, 0xe0, 0x3c,
    0xb, 0xc1, 0xf0, 0x1f, 0xf, 0x40, 0x3c, 0x7c,
    0x0, 0xf6, 0xd0, 0x2, 0xef, 0x0, 0x7, 0xf4,
    0x0, 0xf, 0xc0, 0x0, 0x3e, 0x0, 0x0,

    /* U+0077 "w" */
    0x3c, 0x3, 0xc0, 0x3c, 0x3d, 0xb, 0xd0, 0xb8,
    0x3d, 0xf, 0xd0, 0xf0, 0x2e, 0x1f, 0xe1, 0xf0,
    0x2e, 0x2d, 0xe2, 0xd0, 0x1f, 0x3c, 0xf3, 0xc0,
    0xf, 0x74, 0xf7, 0x80, 0xf, 0xf0, 0xfb, 0x40,
    0xf, 0xe0, 0xbf, 0x0, 0xb, 0xd0, 0x7e, 0x0,
    0xb, 0xc0, 0x7c, 0x0,

    /* U+0078 "x" */
    0xb, 0xc0, 0xbc, 0x3, 0xd1, 0xf0, 0x2, 0xf3,
    0xd0, 0x0, 0xff, 0x80, 0x0, 0xbf, 0x0, 0x0,
    0xff, 0x0, 0x1, 0xff, 0x40, 0x3, 0xdf, 0x80,
    0xf, 0x87, 0xc0, 0x2f, 0x3, 0xe0, 0x3d, 0x2,
    0xf0,

    /* U+0079 "y" */
    0x3d, 0x0, 0xf0, 0xf8, 0xb, 0xc2, 0xf0, 0x3d,
    0x7, 0xc1, 0xf0, 0xf, 0x4f, 0x40, 0x3e, 0x7c,
    0x0, 0xbb, 0xd0, 0x1, 0xff, 0x0, 0x3, 0xf4,
    0x0, 0xf, 0xc0, 0x0, 0x2e, 0x0, 0x0, 0xf0,
    0x0, 0xb, 0x80, 0x0, 0x3c, 0x0, 0x2, 0xe0,
    0x0, 0x0,

    /* U+007A "z" */
    0xb, 0xff, 0xf0, 0xbf, 0xfe, 0x0, 0xb, 0xc0,
    0x1, 0xf4, 0x0, 0x3e, 0x0, 0xf, 0x80, 0x2,
    0xf0, 0x0, 0x7d, 0x0, 0xf, 0x80, 0x2, 0xff,
    0xf8, 0x3f, 0xff, 0x80,

    /* U+007B "{" */
    0x0, 0x60, 0xf, 0xc0, 0xb4, 0x3, 0xc0, 0xf,
    0x0, 0x3c, 0x0, 0xf0, 0x3, 0xc0, 0x1e, 0x0,
    0xb4, 0xb, 0x80, 0x1f, 0x0, 0x3c, 0x0, 0xf0,
    0x3, 0xc0, 0x1e, 0x0, 0xb4, 0x2, 0xd0, 0x7,
    0xe0, 0x7, 0xc0,

    /* U+007C "|" */
    0x76, 0xdb, 0x6d, 0xb6, 0xdb, 0x6d, 0xb6, 0xdb,
    0x6d, 0xb6, 0xdb, 0x6d, 0xb6, 0xdb, 0x6d,

    /* U+007D "}" */
    0x2, 0x40, 0xf, 0xc0, 0xf, 0x40, 0x2d, 0x0,
    0xb4, 0x3, 0xc0, 0xf, 0x0, 0x78, 0x1, 0xe0,
    0x3, 0xc0, 0xb, 0x40, 0x78, 0x3, 0xc0, 0xf,
    0x0, 0x3c, 0x0, 0xf0, 0x3, 0xc0, 0x1f, 0x2,
    0xf4, 0x1f, 0x40,

    /* U+007E "~" */
    0x0, 0x0, 0x50, 0x7f, 0x87, 0xc3, 0xff, 0xfe,
    0x1e, 0x1b, 0xe0, 0x60, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 62, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 107, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 125, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 30, .adv_w = 186, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 186, .box_w = 12, .box_h = 21, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 138, .adv_w = 237, .box_w = 15, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 211, .box_w = 13, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 71, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 250, .adv_w = 88, .box_w = 7, .box_h = 21, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 287, .adv_w = 88, .box_w = 6, .box_h = 21, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 319, .adv_w = 118, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 333, .adv_w = 186, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 361, .adv_w = 72, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 368, .adv_w = 106, .box_w = 6, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 373, .adv_w = 72, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 116, .box_w = 10, .box_h = 17, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 420, .adv_w = 186, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 465, .adv_w = 186, .box_w = 9, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 499, .adv_w = 186, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 544, .adv_w = 186, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 589, .adv_w = 186, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 634, .adv_w = 186, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 679, .adv_w = 186, .box_w = 11, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 721, .adv_w = 186, .box_w = 12, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 766, .adv_w = 186, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 811, .adv_w = 186, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 853, .adv_w = 72, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 867, .adv_w = 72, .box_w = 5, .box_h = 15, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 886, .adv_w = 171, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 911, .adv_w = 186, .box_w = 10, .box_h = 6, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 926, .adv_w = 171, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 951, .adv_w = 125, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 981, .adv_w = 239, .box_w = 15, .box_h = 17, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1045, .adv_w = 205, .box_w = 14, .box_h = 15, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1098, .adv_w = 192, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1143, .adv_w = 193, .box_w = 13, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1192, .adv_w = 220, .box_w = 14, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1245, .adv_w = 168, .box_w = 11, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1287, .adv_w = 165, .box_w = 11, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1329, .adv_w = 212, .box_w = 14, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1382, .adv_w = 223, .box_w = 14, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1435, .adv_w = 93, .box_w = 6, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1458, .adv_w = 128, .box_w = 9, .box_h = 15, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1492, .adv_w = 206, .box_w = 14, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1545, .adv_w = 152, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1579, .adv_w = 274, .box_w = 18, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1647, .adv_w = 223, .box_w = 14, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1700, .adv_w = 234, .box_w = 15, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1757, .adv_w = 185, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1802, .adv_w = 234, .box_w = 15, .box_h = 18, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1870, .adv_w = 193, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1915, .adv_w = 158, .box_w = 12, .box_h = 15, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1960, .adv_w = 175, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2002, .adv_w = 214, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2051, .adv_w = 211, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2104, .adv_w = 309, .box_w = 20, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2179, .adv_w = 202, .box_w = 15, .box_h = 15, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2236, .adv_w = 194, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2285, .adv_w = 181, .box_w = 14, .box_h = 15, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2338, .adv_w = 88, .box_w = 7, .box_h = 20, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 2373, .adv_w = 116, .box_w = 6, .box_h = 17, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2399, .adv_w = 88, .box_w = 7, .box_h = 20, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 2434, .adv_w = 186, .box_w = 10, .box_h = 7, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 2452, .adv_w = 116, .box_w = 8, .box_h = 2, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 2456, .adv_w = 95, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 12},
    {.bitmap_index = 2461, .adv_w = 166, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2489, .adv_w = 172, .box_w = 11, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2533, .adv_w = 139, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2558, .adv_w = 172, .box_w = 11, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2602, .adv_w = 151, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2630, .adv_w = 102, .box_w = 8, .box_h = 18, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2666, .adv_w = 155, .box_w = 12, .box_h = 15, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 2711, .adv_w = 174, .box_w = 11, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2755, .adv_w = 82, .box_w = 6, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2779, .adv_w = 81, .box_w = 7, .box_h = 20, .ofs_x = -2, .ofs_y = -4},
    {.bitmap_index = 2814, .adv_w = 163, .box_w = 11, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2858, .adv_w = 80, .box_w = 5, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2878, .adv_w = 253, .box_w = 16, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2922, .adv_w = 172, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2950, .adv_w = 163, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2978, .adv_w = 170, .box_w = 11, .box_h = 15, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 3020, .adv_w = 166, .box_w = 10, .box_h = 15, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 3058, .adv_w = 116, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3080, .adv_w = 126, .box_w = 9, .box_h = 11, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 3105, .adv_w = 113, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3135, .adv_w = 172, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3166, .adv_w = 159, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3197, .adv_w = 235, .box_w = 16, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3241, .adv_w = 161, .box_w = 12, .box_h = 11, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 3274, .adv_w = 159, .box_w = 11, .box_h = 15, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 3316, .adv_w = 140, .box_w = 10, .box_h = 11, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 3344, .adv_w = 88, .box_w = 7, .box_h = 20, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 3379, .adv_w = 96, .box_w = 3, .box_h = 20, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 3394, .adv_w = 88, .box_w = 7, .box_h = 20, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 3429, .adv_w = 186, .box_w = 11, .box_h = 5, .ofs_x = 0, .ofs_y = 4}
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
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 0,
    1, 2, 0, 1, 0, 3, 4, 3,
    5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 7, 0, 8, 6, 0, 9,
    0, 0, 0, 10, 11, 12, 0, 0,
    6, 13, 6, 14, 0, 15, 10, 5,
    16, 11, 17, 18, 2, 7, 0, 0,
    0, 0, 0, 19, 0, 0, 19, 20,
    0, 21, 0, 0, 22, 0, 21, 21,
    19, 19, 0, 23, 0, 0, 0, 24,
    25, 22, 26, 0, 2, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 2,
    1, 0, 3, 1, 0, 4, 5, 4,
    2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 6, 6, 0, 0, 0,
    7, 8, 2, 0, 8, 0, 0, 0,
    8, 0, 0, 9, 0, 0, 0, 0,
    8, 0, 8, 0, 0, 10, 11, 12,
    13, 14, 15, 16, 0, 12, 3, 0,
    0, 0, 17, 0, 17, 17, 17, 18,
    19, 0, 0, 0, 0, 0, 6, 6,
    17, 6, 17, 6, 20, 21, 6, 22,
    23, 24, 25, 26, 0, 0, 3, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, -28, 0, -7, -6, 0, 0, 0,
    0, 0, 0, 8, 5, 0, 7, 0,
    -15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, 0, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -9, 0, 0, 0,
    -33, 0, 0, -8, 0, -34, 0, -36,
    -19, 0, -37, 0, 0, 0, 0, 0,
    0, -24, -14, 0, -24, 0, -6, -11,
    0, -27, 0, 0, 0, 0, 0, -31,
    0, -21, 0, -11, -33, -9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    8, -22, 0, -31, -21, -14, 8, -6,
    -25, 0, 0, 0, 0, 0, 0, 0,
    -21, 0, 0, -20, 0, -7, -7, 0,
    -7, -14, -8, -7, -6, 0, 0, 0,
    0, 0, 0, -12, 0, -9, 0, -14,
    -13, -10, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -31, 0, 0, 0,
    -11, 0, 0, -9, 11, -24, -6, -22,
    -16, 0, -27, 0, 0, 0, 0, 0,
    -11, -9, -8, 0, -9, 0, 0, 0,
    0, 0, -18, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -24, 0, -29, 0, -10, 3, 0,
    -30, 0, 0, 0, 0, 0, 0, 0,
    -10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0,
    -11, 0, 0, -18, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -9, 0, 0,
    -20, -11, -8, 0, -11, 0, -38, 0,
    0, 0, -28, 0, 0, -15, 0, -32,
    0, -31, -27, 0, -36, 0, 0, 0,
    0, 0, 0, -21, -14, 0, -21, 0,
    0, -25, 0, -29, 0, 0, 0, 0,
    -31, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, 0, -9, -8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -24, 0, -29,
    -29, -24, 5, -12, -32, 0, 0, 0,
    0, 0, 0, 0, -33, 0, -29, -28,
    0, -26, -20, -28, -29, -27, 8, -14,
    0, -16, 0, -12, 0, 0, -18, 0,
    0, 0, 0, 0, 0, 0, -19, 0,
    -14, -15, 0, 0, 0, 0, 0, 0,
    9, -24, 0, -42, -31, -18, 8, -10,
    -32, 0, 0, 0, 0, 0, 0, 0,
    -31, 0, -28, -31, 0, 0, 0, 0,
    0, -19, 0, 0, 0, 0, -13, 0,
    6, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -13, 0, -6, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -9, 0, 0, 10, 0,
    0, -20, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -6, 0, 0,
    -8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -27,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -9,
    0, -24, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, 0, -16, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -9, 0, -27, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -5, 0, 0, 0, 0, 0,
    0, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 26,
    .right_class_cnt     = 26,
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
    .cmap_num = 1,
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
const lv_font_t ui_font_lato20 = {
#else
lv_font_t ui_font_lato20 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 22,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_LATO20*/


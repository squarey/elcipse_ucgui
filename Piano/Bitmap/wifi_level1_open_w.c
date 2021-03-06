﻿


#include <stdlib.h>
#include "GUI.h"
#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif


extern GUI_CONST_STORAGE GUI_BITMAP bmwifi_level1_open_w;

static GUI_CONST_STORAGE unsigned char _acwifi_level1_open_w[] = {
  /* RLE: 497 Pixels @ 000,000 */ 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xF4, 0x00, 0x00, 0x00, 
  /* ABS: 002 Pixels @ 017,010 */ 0x02, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
  /* RLE: 003 Pixels @ 019,010 */ 0x83, 0x01, 0xFF, 0xFF, 
  /* RLE: 004 Pixels @ 022,010 */ 0x84, 0x02, 0xFF, 0xFF, 
  /* RLE: 003 Pixels @ 026,010 */ 0x83, 0x01, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 029,010 */ 0x02, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
  /* RLE: 030 Pixels @ 031,010 */ 0x9E, 0x00, 0x00, 0x00, 
  /* RLE: 003 Pixels @ 013,011 */ 0x83, 0x00, 0xFF, 0xFF, 
  /* ABS: 003 Pixels @ 016,011 */ 0x03, 0x02, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 
  /* RLE: 003 Pixels @ 019,011 */ 0x83, 0x00, 0xFF, 0xFF, 
  /* RLE: 004 Pixels @ 022,011 */ 0x84, 0x00, 0x00, 0x00, 
  /* RLE: 003 Pixels @ 026,011 */ 0x83, 0x00, 0xFF, 0xFF, 
  /* ABS: 003 Pixels @ 029,011 */ 0x03, 0x02, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 
  /* RLE: 003 Pixels @ 032,011 */ 0x83, 0x00, 0xFF, 0xFF, 
  /* RLE: 023 Pixels @ 035,011 */ 0x97, 0x00, 0x00, 0x00, 
  /* RLE: 003 Pixels @ 010,012 */ 0x83, 0x00, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 013,012 */ 0x02, 0x02, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 
  /* RLE: 004 Pixels @ 015,012 */ 0x84, 0x00, 0xFF, 0xFF, 
  /* ABS: 010 Pixels @ 019,012 */ 0x0A, 0x03, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0x23, 0xFF, 0xFF, 0x2E, 0xFF, 0xFF, 0x34, 0xFF, 0xFF, 0x34, 0xFF, 0xFF, 0x2E, 0xFF, 0xFF, 0x23, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 
  /* RLE: 004 Pixels @ 029,012 */ 0x84, 0x00, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 033,012 */ 0x02, 0x03, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 
  /* RLE: 003 Pixels @ 035,012 */ 0x83, 0x00, 0xFF, 0xFF, 
  /* RLE: 018 Pixels @ 038,012 */ 0x92, 0x00, 0x00, 0x00, 
  /* RLE: 003 Pixels @ 008,013 */ 0x83, 0x00, 0xFF, 0xFF, 
  /* ABS: 026 Pixels @ 011,013 */ 0x1A, 0x02, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 0x26, 0xFF, 0xFF, 0x5C, 0xFF, 0xFF, 0x86, 0xFF, 0xFF, 0xA9, 0xFF, 0xFF, 0xC1, 0xFF, 0xFF, 0xC8, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xCE, 0xFF, 0xFF, 
        0xCE, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xC8, 0xFF, 0xFF, 0xC1, 0xFF, 0xFF, 0xA9, 0xFF, 0xFF, 0x86, 0xFF, 0xFF, 0x5C, 0xFF, 0xFF, 0x26, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 
  /* RLE: 003 Pixels @ 037,013 */ 0x83, 0x00, 0xFF, 0xFF, 
  /* RLE: 015 Pixels @ 040,013 */ 0x8F, 0x00, 0x00, 0x00, 
  /* ABS: 015 Pixels @ 007,014 */ 0x0F, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x1B, 0xFF, 0xFF, 0x62, 0xFF, 0xFF, 0xA7, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xD9, 0xFF, 0xFF, 0xD9, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 
        0xCF, 0xFF, 0xFF, 0xCD, 0xFF, 0xFF, 
  /* RLE: 004 Pixels @ 022,014 */ 0x84, 0xCC, 0xFF, 0xFF, 
  /* ABS: 015 Pixels @ 026,014 */ 0x0F, 0xCD, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xD9, 0xFF, 0xFF, 0xD9, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xA7, 0xFF, 0xFF, 0x63, 0xFF, 0xFF, 0x1B, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 
        0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
  /* RLE: 012 Pixels @ 041,014 */ 0x8C, 0x00, 0x00, 0x00, 
  /* RLE: 003 Pixels @ 005,015 */ 0x83, 0x00, 0xFF, 0xFF, 
  /* ABS: 032 Pixels @ 008,015 */ 0x20, 0x02, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x23, 0xFF, 0xFF, 0x82, 0xFF, 0xFF, 0xC5, 0xFF, 0xFF, 0xD9, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xCD, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xCA, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 
        0xCA, 0xFF, 0xFF, 0xCA, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xCA, 0xFF, 0xFF, 0xCA, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xCA, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xCD, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xD9, 0xFF, 0xFF, 
        0xC5, 0xFF, 0xFF, 0x82, 0xFF, 0xFF, 0x24, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 
  /* RLE: 003 Pixels @ 040,015 */ 0x83, 0x00, 0xFF, 0xFF, 
  /* RLE: 012 Pixels @ 043,015 */ 0x8C, 0x00, 0x00, 0x00, 
  /* ABS: 034 Pixels @ 007,016 */ 0x22, 0x01, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x0E, 0xFF, 0xFF, 0x72, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xD9, 0xFF, 0xFF, 0xCE, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xCA, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xCA, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 
        0xCE, 0xFF, 0xFF, 0xD2, 0xFF, 0xFF, 0xD5, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xD5, 0xFF, 0xFF, 0xD2, 0xFF, 0xFF, 0xCE, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xCA, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xCA, 0xFF, 0xFF, 
        0xC9, 0xFF, 0xFF, 0xCE, 0xFF, 0xFF, 0xD9, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0x73, 0xFF, 0xFF, 0x0E, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 
  /* RLE: 012 Pixels @ 041,016 */ 0x8C, 0x00, 0x00, 0x00, 
  /* ABS: 038 Pixels @ 005,017 */ 0x26, 0x00, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x35, 0xFF, 0xFF, 0xB2, 0xFF, 0xFF, 0xDA, 0xFF, 0xFF, 0xCD, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xCD, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 
        0xDC, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xC5, 0xFF, 0xFF, 0xB1, 0xFF, 0xFF, 0x9D, 0xFF, 0xFF, 0x93, 0xFF, 0xFF, 0x96, 0xFF, 0xFF, 0x9F, 0xFF, 0xFF, 0xB0, 0xFF, 0xFF, 0xC5, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xDD, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 
        0xCD, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xCC, 0xFF, 0xFF, 0xDA, 0xFF, 0xFF, 0xB2, 0xFF, 0xFF, 0x35, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
  /* RLE: 010 Pixels @ 043,017 */ 0x8A, 0x00, 0x00, 0x00, 
  /* ABS: 038 Pixels @ 005,018 */ 0x26, 0x02, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x30, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xD2, 0xFF, 0xFF, 0xC8, 0xFF, 0xFF, 0xCC, 0xFF, 0xFF, 0xCC, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xD0, 0xFF, 0xFF, 0xDB, 0xFF, 0xFF, 0xCC, 0xFF, 0xFF, 0x99, 0xFF, 0xFF, 
        0x5A, 0xFF, 0xFF, 0x2C, 0xFF, 0xFF, 0x11, 0xFF, 0xFF, 0x0A, 0xFF, 0xFF, 0x0B, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0x10, 0xFF, 0xFF, 0x0C, 0xFF, 0xFF, 0x0A, 0xFF, 0xFF, 0x11, 0xFF, 0xFF, 0x2C, 0xFF, 0xFF, 0x5A, 0xFF, 0xFF, 0x99, 0xFF, 0xFF, 
        0xCC, 0xFF, 0xFF, 0xDB, 0xFF, 0xFF, 0xD0, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xCC, 0xFF, 0xFF, 0xCC, 0xFF, 0xFF, 0xC8, 0xFF, 0xFF, 0xD2, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0x30, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 
  /* RLE: 010 Pixels @ 043,018 */ 0x8A, 0x00, 0x00, 0x00, 
  /* ABS: 038 Pixels @ 005,019 */ 0x26, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x84, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xCA, 0xFF, 0xFF, 0xCD, 0xFF, 0xFF, 0xDA, 0xFF, 0xFF, 0xBE, 0xFF, 0xFF, 0x67, 0xFF, 0xFF, 0x17, 0xFF, 0xFF, 0x08, 0xFF, 0xFF, 
        0x2D, 0xFF, 0xFF, 0x5F, 0xFF, 0xFF, 0x8B, 0xFF, 0xFF, 0xA9, 0xFF, 0xFF, 0xBD, 0xFF, 0xFF, 0xC3, 0xFF, 0xFF, 0xC3, 0xFF, 0xFF, 0xBD, 0xFF, 0xFF, 0xAA, 0xFF, 0xFF, 0x8B, 0xFF, 0xFF, 0x5F, 0xFF, 0xFF, 0x2F, 0xFF, 0xFF, 0x08, 0xFF, 0xFF, 
        0x17, 0xFF, 0xFF, 0x67, 0xFF, 0xFF, 0xBE, 0xFF, 0xFF, 0xDA, 0xFF, 0xFF, 0xCD, 0xFF, 0xFF, 0xCA, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0x85, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
  /* RLE: 011 Pixels @ 043,019 */ 0x8B, 0x00, 0x00, 0x00, 
  /* ABS: 036 Pixels @ 006,020 */ 0x24, 0x01, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x08, 0xFF, 0xFF, 0x9E, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xD2, 0xFF, 0xFF, 0xCD, 0xFF, 0xFF, 0x69, 0xFF, 0xFF, 0x08, 0xFF, 0xFF, 0x18, 0xFF, 0xFF, 0x6E, 0xFF, 0xFF, 0xB7, 0xFF, 0xFF, 0xD4, 0xFF, 0xFF, 
        0xDD, 0xFF, 0xFF, 0xD8, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xD0, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xD0, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xD8, 0xFF, 0xFF, 0xDD, 0xFF, 0xFF, 0xD5, 0xFF, 0xFF, 0xB7, 0xFF, 0xFF, 0x6E, 0xFF, 0xFF, 
        0x18, 0xFF, 0xFF, 0x08, 0xFF, 0xFF, 0x69, 0xFF, 0xFF, 0xCD, 0xFF, 0xFF, 0xD2, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0x9E, 0xFF, 0xFF, 0x08, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 
  /* RLE: 011 Pixels @ 042,020 */ 0x8B, 0x00, 0x00, 0x00, 
  /* ABS: 015 Pixels @ 005,021 */ 0x0F, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x17, 0xFF, 0xFF, 0xB7, 0xFF, 0xFF, 0xA6, 0xFF, 0xFF, 0x18, 0xFF, 0xFF, 0x0D, 0xFF, 0xFF, 0x7C, 0xFF, 0xFF, 0xCD, 0xFF, 0xFF, 0xDB, 0xFF, 0xFF, 0xD1, 0xFF, 0xFF, 
        0xCB, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 
  /* RLE: 003 Pixels @ 020,021 */ 0x83, 0xCA, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 023,021 */ 0x02, 0xCB, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 
  /* RLE: 003 Pixels @ 025,021 */ 0x83, 0xCA, 0xFF, 0xFF, 
  /* ABS: 015 Pixels @ 028,021 */ 0x0F, 0xC9, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xD1, 0xFF, 0xFF, 0xDB, 0xFF, 0xFF, 0xCD, 0xFF, 0xFF, 0x7C, 0xFF, 0xFF, 0x0C, 0xFF, 0xFF, 0x19, 0xFF, 0xFF, 0xA6, 0xFF, 0xFF, 0xB7, 0xFF, 0xFF, 0x17, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 
        0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
  /* RLE: 011 Pixels @ 043,021 */ 0x8B, 0x00, 0x00, 0x00, 
  /* ABS: 036 Pixels @ 006,022 */ 0x24, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x1E, 0xFF, 0xFF, 0x10, 0xFF, 0xFF, 0x47, 0xFF, 0xFF, 0xC4, 0xFF, 0xFF, 0xDA, 0xFF, 0xFF, 0xCC, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 
        0xC9, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xCC, 0xFF, 0xFF, 0xCE, 0xFF, 0xFF, 0xD0, 0xFF, 0xFF, 0xD0, 0xFF, 0xFF, 0xCE, 0xFF, 0xFF, 0xCC, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 
        0xCC, 0xFF, 0xFF, 0xDA, 0xFF, 0xFF, 0xC4, 0xFF, 0xFF, 0x47, 0xFF, 0xFF, 0x10, 0xFF, 0xFF, 0x1E, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
  /* RLE: 013 Pixels @ 042,022 */ 0x8D, 0x00, 0x00, 0x00, 
  /* ABS: 034 Pixels @ 007,023 */ 0x22, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x2E, 0xFF, 0xFF, 0xD8, 0xFF, 0xFF, 0xD0, 0xFF, 0xFF, 0xC8, 0xFF, 0xFF, 0xCC, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xD9, 0xFF, 0xFF, 
        0xDB, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xC6, 0xFF, 0xFF, 0xC1, 0xFF, 0xFF, 0xC1, 0xFF, 0xFF, 0xC6, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xDB, 0xFF, 0xFF, 0xD9, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xCC, 0xFF, 0xFF, 
        0xC8, 0xFF, 0xFF, 0xD1, 0xFF, 0xFF, 0xD8, 0xFF, 0xFF, 0x2D, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
  /* RLE: 015 Pixels @ 041,023 */ 0x8F, 0x00, 0x00, 0x00, 
  /* ABS: 032 Pixels @ 008,024 */ 0x20, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x64, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xD0, 0xFF, 0xFF, 0xDA, 0xFF, 0xFF, 0xC4, 0xFF, 0xFF, 0x85, 0xFF, 0xFF, 0x49, 0xFF, 0xFF, 
        0x24, 0xFF, 0xFF, 0x13, 0xFF, 0xFF, 0x0C, 0xFF, 0xFF, 0x0C, 0xFF, 0xFF, 0x13, 0xFF, 0xFF, 0x24, 0xFF, 0xFF, 0x49, 0xFF, 0xFF, 0x85, 0xFF, 0xFF, 0xC4, 0xFF, 0xFF, 0xDA, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 
        0xD6, 0xFF, 0xFF, 0x63, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
  /* RLE: 018 Pixels @ 040,024 */ 0x92, 0x00, 0x00, 0x00, 
  /* ABS: 028 Pixels @ 010,025 */ 0x1C, 0x00, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x81, 0xFF, 0xFF, 0xD9, 0xFF, 0xFF, 0xD6, 0xFF, 0xFF, 0xC1, 0xFF, 0xFF, 0x5E, 0xFF, 0xFF, 0x0C, 0xFF, 0xFF, 0x0D, 0xFF, 0xFF, 0x3B, 0xFF, 0xFF, 0x6A, 0xFF, 0xFF, 0x88, 0xFF, 0xFF, 
        0x97, 0xFF, 0xFF, 0x97, 0xFF, 0xFF, 0x88, 0xFF, 0xFF, 0x6A, 0xFF, 0xFF, 0x3B, 0xFF, 0xFF, 0x0C, 0xFF, 0xFF, 0x0D, 0xFF, 0xFF, 0x5E, 0xFF, 0xFF, 0xC1, 0xFF, 0xFF, 0xD5, 0xFF, 0xFF, 0xD9, 0xFF, 0xFF, 0x81, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
        0x01, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
  /* RLE: 019 Pixels @ 038,025 */ 0x93, 0x00, 0x00, 0x00, 
  /* ABS: 030 Pixels @ 009,026 */ 0x1E, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0x9E, 0xFF, 0xFF, 0x8D, 0xFF, 0xFF, 0x08, 0xFF, 0xFF, 0x17, 0xFF, 0xFF, 0x7C, 0xFF, 0xFF, 0xC2, 0xFF, 0xFF, 0xD8, 0xFF, 0xFF, 0xDD, 0xFF, 0xFF, 
        0xD8, 0xFF, 0xFF, 0xD5, 0xFF, 0xFF, 0xD5, 0xFF, 0xFF, 0xD8, 0xFF, 0xFF, 0xDD, 0xFF, 0xFF, 0xD9, 0xFF, 0xFF, 0xC1, 0xFF, 0xFF, 0x7C, 0xFF, 0xFF, 0x17, 0xFF, 0xFF, 0x08, 0xFF, 0xFF, 0x8E, 0xFF, 0xFF, 0x9E, 0xFF, 0xFF, 0x07, 0xFF, 0xFF, 
        0x00, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
  /* RLE: 019 Pixels @ 039,026 */ 0x93, 0x00, 0x00, 0x00, 
  /* ABS: 012 Pixels @ 010,027 */ 0x0C, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x0C, 0xFF, 0xFF, 0x0A, 0xFF, 0xFF, 0x67, 0xFF, 0xFF, 0xCD, 0xFF, 0xFF, 0xDA, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xCA, 0xFF, 0xFF, 0xC8, 0xFF, 0xFF, 
  /* RLE: 004 Pixels @ 022,027 */ 0x84, 0xCA, 0xFF, 0xFF, 
  /* ABS: 012 Pixels @ 026,027 */ 0x0C, 0xC8, 0xFF, 0xFF, 0xCA, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xDA, 0xFF, 0xFF, 0xCD, 0xFF, 0xFF, 0x66, 0xFF, 0xFF, 0x09, 0xFF, 0xFF, 0x0C, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
  /* RLE: 021 Pixels @ 038,027 */ 0x95, 0x00, 0x00, 0x00, 
  /* ABS: 026 Pixels @ 011,028 */ 0x1A, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x25, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xD1, 0xFF, 0xFF, 0xC7, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xCA, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xCA, 0xFF, 0xFF, 
        0xCA, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xCA, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xC7, 0xFF, 0xFF, 0xD1, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0x25, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
  /* RLE: 023 Pixels @ 037,028 */ 0x97, 0x00, 0x00, 0x00, 
  /* ABS: 024 Pixels @ 012,029 */ 0x18, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x42, 0xFF, 0xFF, 0xD1, 0xFF, 0xFF, 0xCC, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xCC, 0xFF, 0xFF, 0xD5, 0xFF, 0xFF, 0xDD, 0xFF, 0xFF, 0xDA, 0xFF, 0xFF, 0xDA, 0xFF, 0xFF, 
        0xDD, 0xFF, 0xFF, 0xD5, 0xFF, 0xFF, 0xCC, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xCC, 0xFF, 0xFF, 0xD1, 0xFF, 0xFF, 0x42, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
  /* RLE: 025 Pixels @ 036,029 */ 0x99, 0x00, 0x00, 0x00, 
  /* ABS: 022 Pixels @ 013,030 */ 0x16, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x62, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xD2, 0xFF, 0xFF, 0x9D, 0xFF, 0xFF, 0x60, 0xFF, 0xFF, 0x42, 0xFF, 0xFF, 0x42, 0xFF, 0xFF, 0x60, 0xFF, 0xFF, 
        0x9D, 0xFF, 0xFF, 0xD2, 0xFF, 0xFF, 0xD3, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0x62, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
  /* RLE: 026 Pixels @ 035,030 */ 0x9A, 0x00, 0x00, 0x00, 
  /* RLE: 003 Pixels @ 013,031 */ 0x83, 0x00, 0xFF, 0xFF, 
  /* ABS: 016 Pixels @ 016,031 */ 0x10, 0x02, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x82, 0xFF, 0xFF, 0xAC, 0xFF, 0xFF, 0x25, 0xFF, 0xFF, 0x05, 0xFF, 0xFF, 0x2A, 0xFF, 0xFF, 0x49, 0xFF, 0xFF, 0x49, 0xFF, 0xFF, 0x2A, 0xFF, 0xFF, 0x04, 0xFF, 0xFF, 0x24, 0xFF, 0xFF, 0xAB, 0xFF, 0xFF, 
        0x82, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 
  /* RLE: 003 Pixels @ 032,031 */ 0x83, 0x00, 0xFF, 0xFF, 
  /* RLE: 027 Pixels @ 035,031 */ 0x9B, 0x00, 0x00, 0x00, 
  /* ABS: 020 Pixels @ 014,032 */ 0x14, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x0B, 0xFF, 0xFF, 0x0A, 0xFF, 0xFF, 0x44, 0xFF, 0xFF, 0xB1, 0xFF, 0xFF, 0xD4, 0xFF, 0xFF, 0xDB, 0xFF, 0xFF, 0xDB, 0xFF, 0xFF, 0xD4, 0xFF, 0xFF, 0xAF, 0xFF, 0xFF, 
        0x45, 0xFF, 0xFF, 0x0B, 0xFF, 0xFF, 0x0B, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
  /* RLE: 029 Pixels @ 034,032 */ 0x9D, 0x00, 0x00, 0x00, 
  /* ABS: 018 Pixels @ 015,033 */ 0x12, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x0C, 0xFF, 0xFF, 0xB9, 0xFF, 0xFF, 0xDC, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xCA, 0xFF, 0xFF, 0xCA, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xDC, 0xFF, 0xFF, 0xBA, 0xFF, 0xFF, 
        0x0C, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
  /* RLE: 031 Pixels @ 033,033 */ 0x9F, 0x00, 0x00, 0x00, 
  /* ABS: 016 Pixels @ 016,034 */ 0x10, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x27, 0xFF, 0xFF, 0xC3, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xCA, 0xFF, 0xFF, 0xCA, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xC4, 0xFF, 0xFF, 0x27, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
        0x02, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
  /* RLE: 033 Pixels @ 032,034 */ 0xA1, 0x00, 0x00, 0x00, 
  /* ABS: 014 Pixels @ 017,035 */ 0x0E, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x42, 0xFF, 0xFF, 0xD1, 0xFF, 0xFF, 0xCC, 0xFF, 0xFF, 0xCB, 0xFF, 0xFF, 0xD2, 0xFF, 0xFF, 0x43, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
        0x00, 0xFF, 0xFF, 
  /* RLE: 035 Pixels @ 031,035 */ 0xA3, 0x00, 0x00, 0x00, 
  /* ABS: 012 Pixels @ 018,036 */ 0x0C, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x60, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0x60, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
  /* RLE: 036 Pixels @ 030,036 */ 0xA4, 0x00, 0x00, 0x00, 
  /* RLE: 003 Pixels @ 018,037 */ 0x83, 0x00, 0xFF, 0xFF, 
  /* ABS: 006 Pixels @ 021,037 */ 0x06, 0x02, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x83, 0xFF, 0xFF, 0x83, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x02, 0xFF, 0xFF, 
  /* RLE: 003 Pixels @ 027,037 */ 0x83, 0x00, 0xFF, 0xFF, 
  /* RLE: 037 Pixels @ 030,037 */ 0xA5, 0x00, 0x00, 0x00, 
  /* ABS: 010 Pixels @ 019,038 */ 0x0A, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x09, 0xFF, 0xFF, 0x09, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
  /* RLE: 039 Pixels @ 029,038 */ 0xA7, 0x00, 0x00, 0x00, 
  /* RLE: 003 Pixels @ 020,039 */ 0x83, 0x00, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 023,039 */ 0x02, 0x01, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 
  /* RLE: 003 Pixels @ 025,039 */ 0x83, 0x00, 0xFF, 0xFF, 
  /* RLE: 041 Pixels @ 028,039 */ 0xA9, 0x00, 0x00, 0x00, 
  /* ABS: 006 Pixels @ 021,040 */ 0x06, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
  /* RLE: 357 Pixels @ 027,040 */ 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xE7, 0x00, 0x00, 0x00, 
};  //2304 pixels compress to 2403 bytes


GUI_CONST_STORAGE GUI_BITMAP bmwifi_level1_open_w = {
  48,  //xSize
  48,  //ySize
  144,  //ByteBytesPerLine
  24,  //BitsPerPixel
  (unsigned char *)_acwifi_level1_open_w,  //Pointer to picture data
  NULL,  //Pointer to palette
  GUI_DRAW_AlphaRLEM16M
};  


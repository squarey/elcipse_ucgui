﻿


#include <stdlib.h>
#include "GUI.h"
#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif


extern GUI_CONST_STORAGE GUI_BITMAP bmbtn_close;

static GUI_CONST_STORAGE unsigned char _acbtn_close[] = {
  /* RLE: 012 Pixels @ 000,000 */ 0x8C, 0x00, 0xFF, 0xFF, 
  /* ABS: 006 Pixels @ 012,000 */ 0x06, 0x10, 0xEF, 0x7D, 0x5C, 0xE7, 0x1C, 0xA3, 0xE7, 0x3C, 0xD6, 0xE7, 0x3C, 0xEF, 0xE7, 0x3C, 0xFE, 0xE7, 0x3C, 
  /* RLE: 038 Pixels @ 018,000 */ 0xA6, 0xFF, 0xE7, 0x3C, 
  /* ABS: 006 Pixels @ 056,000 */ 0x06, 0xFC, 0xE7, 0x3C, 0xEC, 0xE7, 0x3C, 0xCD, 0xE7, 0x3C, 0x99, 0xE7, 0x3C, 0x4A, 0xE7, 0x3C, 0x07, 0xE7, 0x3C, 
  /* RLE: 011 Pixels @ 062,000 */ 0x8B, 0x00, 0xE7, 0x3C, 
  /* RLE: 009 Pixels @ 000,001 */ 0x89, 0x00, 0xFF, 0xFF, 
  /* ABS: 008 Pixels @ 009,001 */ 0x08, 0x06, 0xFF, 0xDF, 0x35, 0xEF, 0x5D, 0x90, 0xEF, 0x5D, 0xD1, 0xE7, 0x3C, 0xE4, 0xEF, 0x5D, 0xEF, 0xEF, 0x7D, 0xF8, 0xF7, 0x9E, 0xFC, 0xF7, 0xBE, 
  /* RLE: 004 Pixels @ 017,001 */ 0x84, 0xFF, 0xFF, 0xDF, 
  /* ABS: 003 Pixels @ 021,001 */ 0x03, 0xFF, 0xF7, 0xBE, 0xFF, 0xEF, 0x7D, 0xFF, 0xEF, 0x5D, 
  /* RLE: 032 Pixels @ 024,001 */ 0xA0, 0xFF, 0xE7, 0x3C, 
  /* ABS: 009 Pixels @ 056,001 */ 0x09, 0xFE, 0xE7, 0x3C, 0xFB, 0xE7, 0x3C, 0xF6, 0xE7, 0x3C, 0xED, 0xE7, 0x3C, 0xE2, 0xE7, 0x3C, 0xC7, 0xE7, 0x3C, 0x7D, 0xE7, 0x3C, 0x26, 0xE7, 0x3C, 0x03, 0xE7, 0x3C, 
  /* RLE: 008 Pixels @ 065,001 */ 0x88, 0x00, 0xE7, 0x3C, 
  /* RLE: 007 Pixels @ 000,002 */ 0x87, 0x00, 0xFF, 0xFF, 
  /* ABS: 006 Pixels @ 007,002 */ 0x06, 0x02, 0xFF, 0xFF, 0x41, 0xEF, 0x5D, 0xB5, 0xE7, 0x1C, 0xFF, 0xE7, 0x3C, 0xFF, 0xEF, 0x7D, 0xFF, 0xF7, 0xBE, 
  /* RLE: 011 Pixels @ 013,002 */ 0x8B, 0xFF, 0xFF, 0xFF, 
  /* ABS: 003 Pixels @ 024,002 */ 0x03, 0xFF, 0xFF, 0xDF, 0xFF, 0xF7, 0x9E, 0xFF, 0xEF, 0x5D, 
  /* RLE: 036 Pixels @ 027,002 */ 0xA4, 0xFF, 0xE7, 0x3C, 
  /* ABS: 003 Pixels @ 063,002 */ 0x03, 0xFA, 0xE7, 0x3C, 0x9D, 0xE7, 0x3C, 0x2C, 0xE7, 0x3C, 
  /* RLE: 007 Pixels @ 066,002 */ 0x87, 0x00, 0xE7, 0x3C, 
  /* RLE: 006 Pixels @ 000,003 */ 0x86, 0x00, 0xFF, 0xFF, 
  /* ABS: 005 Pixels @ 006,003 */ 0x05, 0x0F, 0xF7, 0x9E, 0x92, 0xEF, 0x5D, 0xF6, 0xE7, 0x1C, 0xFF, 0xEF, 0x7D, 0xFF, 0xFF, 0xDF, 
  /* RLE: 016 Pixels @ 011,003 */ 0x90, 0xFF, 0xFF, 0xFF, 
  /* ABS: 001 Pixels @ 027,003 */ 0x01, 0xFF, 0xF7, 0x9E, 
  /* RLE: 037 Pixels @ 028,003 */ 0xA5, 0xFF, 0xE7, 0x3C, 
  /* ABS: 003 Pixels @ 065,003 */ 0x03, 0xE8, 0xE7, 0x3C, 0x72, 0xE7, 0x3C, 0x01, 0xE7, 0x3C, 
  /* RLE: 005 Pixels @ 068,003 */ 0x85, 0x00, 0xE7, 0x3C, 
  /* RLE: 005 Pixels @ 000,004 */ 0x85, 0x00, 0xFF, 0xFF, 
  /* ABS: 004 Pixels @ 005,004 */ 0x04, 0x24, 0xEF, 0x5D, 0xC5, 0xE7, 0x1C, 0xFF, 0xE7, 0x3C, 0xFF, 0xF7, 0xBE, 
  /* RLE: 019 Pixels @ 009,004 */ 0x93, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 028,004 */ 0x02, 0xFF, 0xFF, 0xDF, 0xFF, 0xEF, 0x5D, 
  /* RLE: 037 Pixels @ 030,004 */ 0xA5, 0xFF, 0xE7, 0x3C, 
  /* ABS: 002 Pixels @ 067,004 */ 0x02, 0xA6, 0xE7, 0x3C, 0x11, 0xE7, 0x3C, 
  /* RLE: 004 Pixels @ 069,004 */ 0x84, 0x00, 0xE7, 0x3C, 
  /* RLE: 004 Pixels @ 000,005 */ 0x84, 0x00, 0xFF, 0xFF, 
  /* ABS: 004 Pixels @ 004,005 */ 0x04, 0x2F, 0xEF, 0x5D, 0xD7, 0xE7, 0x1C, 0xFF, 0xEF, 0x5D, 0xFF, 0xFF, 0xDF, 
  /* RLE: 022 Pixels @ 008,005 */ 0x96, 0xFF, 0xFF, 0xFF, 
  /* ABS: 001 Pixels @ 030,005 */ 0x01, 0xFF, 0xEF, 0x7D, 
  /* RLE: 037 Pixels @ 031,005 */ 0xA5, 0xFF, 0xE7, 0x3C, 
  /* ABS: 002 Pixels @ 068,005 */ 0x02, 0xB9, 0xE7, 0x3C, 0x16, 0xE7, 0x3C, 
  /* RLE: 003 Pixels @ 070,005 */ 0x83, 0x00, 0xE7, 0x3C, 
  /* RLE: 003 Pixels @ 000,006 */ 0x83, 0x00, 0xFF, 0xFF, 
  /* ABS: 004 Pixels @ 003,006 */ 0x04, 0x1B, 0xF7, 0x9E, 0xCC, 0xE7, 0x1C, 0xFF, 0xEF, 0x5D, 0xFF, 0xFF, 0xDF, 
  /* RLE: 024 Pixels @ 007,006 */ 0x98, 0xFF, 0xFF, 0xFF, 
  /* ABS: 001 Pixels @ 031,006 */ 0x01, 0xFF, 0xEF, 0x7D, 
  /* RLE: 037 Pixels @ 032,006 */ 0xA5, 0xFF, 0xE7, 0x3C, 
  /* ABS: 010 Pixels @ 069,006 */ 0x0A, 0xA9, 0xE7, 0x3C, 0x09, 0xE7, 0x3C, 0x00, 0xE7, 0x3C, 0x00, 0xE7, 0x3C, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x06, 0xFF, 0xDF, 0xA3, 0xE7, 0x3C, 0xFF, 0xE7, 0x3C, 0xFF, 0xF7, 0xBE, 
  /* RLE: 026 Pixels @ 006,007 */ 0x9A, 0xFF, 0xFF, 0xFF, 
  /* ABS: 001 Pixels @ 032,007 */ 0x01, 0xFF, 0xEF, 0x5D, 
  /* RLE: 037 Pixels @ 033,007 */ 0xA5, 0xFF, 0xE7, 0x3C, 
  /* ABS: 008 Pixels @ 070,007 */ 0x08, 0x7A, 0xE7, 0x3C, 0x00, 0xE7, 0x3C, 0x00, 0xE7, 0x3C, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x59, 0xE7, 0x3C, 0xFF, 0xE7, 0x1C, 0xFF, 0xF7, 0x9E, 
  /* RLE: 027 Pixels @ 005,008 */ 0x9B, 0xFF, 0xFF, 0xFF, 
  /* ABS: 001 Pixels @ 032,008 */ 0x01, 0xFF, 0xFF, 0xDF, 
  /* RLE: 037 Pixels @ 033,008 */ 0xA5, 0xFF, 0xE7, 0x3C, 
  /* ABS: 007 Pixels @ 070,008 */ 0x07, 0xF6, 0xE7, 0x3C, 0x31, 0xE7, 0x3C, 0x00, 0xE7, 0x3C, 0x00, 0xFF, 0xFF, 0x0A, 0xF7, 0x9E, 0xD7, 0xE7, 0x3C, 0xFF, 0xEF, 0x5D, 
  /* RLE: 029 Pixels @ 004,009 */ 0x9D, 0xFF, 0xFF, 0xFF, 
  /* ABS: 001 Pixels @ 033,009 */ 0x01, 0xFF, 0xEF, 0x7D, 
  /* RLE: 037 Pixels @ 034,009 */ 0xA5, 0xFF, 0xE7, 0x3C, 
  /* ABS: 006 Pixels @ 071,009 */ 0x06, 0xB0, 0xE7, 0x3C, 0x00, 0xE7, 0x3C, 0x00, 0xFF, 0xFF, 0x5B, 0xEF, 0x5D, 0xFF, 0xE7, 0x1C, 0xFF, 0xF7, 0x9E, 
  /* RLE: 029 Pixels @ 004,010 */ 0x9D, 0xFF, 0xFF, 0xFF, 
  /* ABS: 001 Pixels @ 033,010 */ 0x01, 0xFF, 0xFF, 0xDF, 
  /* RLE: 037 Pixels @ 034,010 */ 0xA5, 0xFF, 0xE7, 0x3C, 
  /* ABS: 005 Pixels @ 071,010 */ 0x05, 0xED, 0xE7, 0x3C, 0x38, 0xE7, 0x3C, 0x00, 0xF7, 0xBE, 0xB3, 0xEF, 0x5D, 0xFF, 0xEF, 0x5D, 
  /* RLE: 031 Pixels @ 003,011 */ 0x9F, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 034,011 */ 0x02, 0xFF, 0xEF, 0x7D, 0xFF, 0xE7, 0x1C, 
  /* RLE: 036 Pixels @ 036,011 */ 0xA4, 0xFF, 0xE7, 0x3C, 
  /* ABS: 004 Pixels @ 072,011 */ 0x04, 0x84, 0xE7, 0x3C, 0x3D, 0xE7, 0x1C, 0xD5, 0xE7, 0x3C, 0xFF, 0xEF, 0x7D, 
  /* RLE: 031 Pixels @ 003,012 */ 0x9F, 0xFF, 0xFF, 0xFF, 
  /* ABS: 001 Pixels @ 034,012 */ 0x01, 0xFF, 0xF7, 0xBE, 
  /* RLE: 037 Pixels @ 035,012 */ 0xA5, 0xFF, 0xE7, 0x3C, 
  /* ABS: 004 Pixels @ 072,012 */ 0x04, 0xB1, 0xE7, 0x3C, 0x94, 0xE7, 0x3C, 0xE8, 0xE7, 0x3C, 0xFF, 0xF7, 0xBE, 
  /* RLE: 031 Pixels @ 003,013 */ 0x9F, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 034,013 */ 0x02, 0xFF, 0xFF, 0xDF, 0xFF, 0xEF, 0x5D, 
  /* RLE: 036 Pixels @ 036,013 */ 0xA4, 0xFF, 0xE7, 0x3C, 
  /* ABS: 004 Pixels @ 072,013 */ 0x04, 0xD4, 0xE7, 0x3C, 0xCC, 0xE7, 0x3C, 0xF4, 0xE7, 0x3C, 0xFF, 0xFF, 0xDF, 
  /* RLE: 032 Pixels @ 003,014 */ 0xA0, 0xFF, 0xFF, 0xFF, 
  /* ABS: 001 Pixels @ 035,014 */ 0x01, 0xFF, 0xEF, 0x5D, 
  /* RLE: 036 Pixels @ 036,014 */ 0xA4, 0xFF, 0xE7, 0x3C, 
  /* ABS: 003 Pixels @ 072,014 */ 0x03, 0xEB, 0xE7, 0x3C, 0xED, 0xE7, 0x3C, 0xFB, 0xE7, 0x3C, 
  /* RLE: 033 Pixels @ 002,015 */ 0xA1, 0xFF, 0xFF, 0xFF, 
  /* ABS: 001 Pixels @ 035,015 */ 0x01, 0xFF, 0xEF, 0x7D, 
  /* RLE: 036 Pixels @ 036,015 */ 0xA4, 0xFF, 0xE7, 0x3C, 
  /* ABS: 003 Pixels @ 072,015 */ 0x03, 0xF8, 0xE7, 0x3C, 0xFF, 0xE7, 0x3C, 0xFF, 0xE7, 0x3C, 
  /* RLE: 033 Pixels @ 002,016 */ 0xA1, 0xFF, 0xFF, 0xFF, 
  /* ABS: 001 Pixels @ 035,016 */ 0x01, 0xFF, 0xEF, 0x7D, 
  /* RLE: 037 Pixels @ 036,016 */ 0xA5, 0xFF, 0xE7, 0x3C, 
  /* ABS: 002 Pixels @ 000,017 */ 0x02, 0xFB, 0xE7, 0x3C, 0xFE, 0xE7, 0x3C, 
  /* RLE: 033 Pixels @ 002,017 */ 0xA1, 0xFF, 0xFF, 0xFF, 
  /* ABS: 001 Pixels @ 035,017 */ 0x01, 0xFF, 0xEF, 0x7D, 
  /* RLE: 036 Pixels @ 036,017 */ 0xA4, 0xFF, 0xE7, 0x3C, 
  /* ABS: 003 Pixels @ 072,017 */ 0x03, 0xFE, 0xE7, 0x3C, 0xE7, 0xE7, 0x3C, 0xFA, 0xE7, 0x3C, 
  /* RLE: 033 Pixels @ 002,018 */ 0xA1, 0xFF, 0xFF, 0xFF, 
  /* ABS: 001 Pixels @ 035,018 */ 0x01, 0xFF, 0xEF, 0x5D, 
  /* RLE: 036 Pixels @ 036,018 */ 0xA4, 0xFF, 0xE7, 0x3C, 
  /* ABS: 004 Pixels @ 072,018 */ 0x04, 0xF6, 0xE7, 0x3C, 0xC1, 0xE7, 0x3C, 0xF2, 0xE7, 0x3C, 0xFF, 0xFF, 0xDF, 
  /* RLE: 032 Pixels @ 003,019 */ 0xA0, 0xFF, 0xFF, 0xFF, 
  /* ABS: 001 Pixels @ 035,019 */ 0x01, 0xFF, 0xEF, 0x5D, 
  /* RLE: 036 Pixels @ 036,019 */ 0xA4, 0xFF, 0xE7, 0x3C, 
  /* ABS: 004 Pixels @ 072,019 */ 0x04, 0xE8, 0xE7, 0x3C, 0x83, 0xE7, 0x3C, 0xE4, 0xE7, 0x3C, 0xFF, 0xF7, 0x9E, 
  /* RLE: 031 Pixels @ 003,020 */ 0x9F, 0xFF, 0xFF, 0xFF, 
  /* ABS: 001 Pixels @ 034,020 */ 0x01, 0xFF, 0xFF, 0xDF, 
  /* RLE: 037 Pixels @ 035,020 */ 0xA5, 0xFF, 0xE7, 0x3C, 
  /* ABS: 004 Pixels @ 072,020 */ 0x04, 0xCE, 0xE7, 0x3C, 0x2A, 0xE7, 0x3C, 0xD1, 0xE7, 0x3C, 0xFF, 0xEF, 0x7D, 
  /* RLE: 031 Pixels @ 003,021 */ 0x9F, 0xFF, 0xFF, 0xFF, 
  /* ABS: 001 Pixels @ 034,021 */ 0x01, 0xFF, 0xF7, 0xBE, 
  /* RLE: 037 Pixels @ 035,021 */ 0xA5, 0xFF, 0xE7, 0x3C, 
  /* ABS: 005 Pixels @ 072,021 */ 0x05, 0xAA, 0xE7, 0x3C, 0x00, 0xFF, 0xFF, 0xA1, 0xEF, 0x5D, 0xFF, 0xE7, 0x3C, 0xFF, 0xFF, 0xDF, 
  /* RLE: 030 Pixels @ 004,022 */ 0x9E, 0xFF, 0xFF, 0xFF, 
  /* ABS: 001 Pixels @ 034,022 */ 0x01, 0xFF, 0xEF, 0x7D, 
  /* RLE: 037 Pixels @ 035,022 */ 0xA5, 0xFF, 0xE7, 0x3C, 
  /* ABS: 005 Pixels @ 072,022 */ 0x05, 0x74, 0xE7, 0x3C, 0x00, 0xFF, 0xFF, 0x42, 0xEF, 0x5D, 0xFD, 0xE7, 0x1C, 0xFF, 0xF7, 0x9E, 
  /* RLE: 029 Pixels @ 004,023 */ 0x9D, 0xFF, 0xFF, 0xFF, 
  /* ABS: 001 Pixels @ 033,023 */ 0x01, 0xFF, 0xFF, 0xDF, 
  /* RLE: 037 Pixels @ 034,023 */ 0xA5, 0xFF, 0xE7, 0x3C, 
  /* ABS: 007 Pixels @ 071,023 */ 0x07, 0xE4, 0xE7, 0x3C, 0x21, 0xE7, 0x3C, 0x00, 0xFF, 0xFF, 0x04, 0xF7, 0xBE, 0xBB, 0xE7, 0x3C, 0xFF, 0xEF, 0x5D, 0xFF, 0xFF, 0xDF, 
  /* RLE: 028 Pixels @ 005,024 */ 0x9C, 0xFF, 0xFF, 0xFF, 
  /* ABS: 001 Pixels @ 033,024 */ 0x01, 0xFF, 0xEF, 0x7D, 
  /* RLE: 037 Pixels @ 034,024 */ 0xA5, 0xFF, 0xE7, 0x3C, 
  /* ABS: 007 Pixels @ 071,024 */ 0x07, 0x93, 0xE7, 0x3C, 0x00, 0xE7, 0x3C, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x3B, 0xE7, 0x3C, 0xF9, 0xE7, 0x1C, 0xFF, 0xEF, 0x7D, 
  /* RLE: 027 Pixels @ 005,025 */ 0x9B, 0xFF, 0xFF, 0xFF, 
  /* ABS: 001 Pixels @ 032,025 */ 0x01, 0xFF, 0xF7, 0x9E, 
  /* RLE: 037 Pixels @ 033,025 */ 0xA5, 0xFF, 0xE7, 0x3C, 
  /* ABS: 003 Pixels @ 070,025 */ 0x03, 0xE2, 0xE7, 0x3C, 0x18, 0xE7, 0x3C, 0x00, 0xE7, 0x3C, 
  /* RLE: 003 Pixels @ 000,026 */ 0x83, 0x00, 0xFF, 0xFF, 
  /* ABS: 003 Pixels @ 003,026 */ 0x03, 0x7D, 0xEF, 0x5D, 0xFF, 0xE7, 0x1C, 0xFF, 0xF7, 0x9E, 
  /* RLE: 025 Pixels @ 006,026 */ 0x99, 0xFF, 0xFF, 0xFF, 
  /* ABS: 001 Pixels @ 031,026 */ 0x01, 0xFF, 0xFF, 0xDF, 
  /* RLE: 037 Pixels @ 032,026 */ 0xA5, 0xFF, 0xE7, 0x3C, 
  /* ABS: 004 Pixels @ 069,026 */ 0x04, 0xFC, 0xE7, 0x3C, 0x54, 0xE7, 0x3C, 0x00, 0xE7, 0x3C, 0x00, 0xE7, 0x3C, 
  /* RLE: 003 Pixels @ 000,027 */ 0x83, 0x00, 0xFF, 0xFF, 
  /* ABS: 004 Pixels @ 003,027 */ 0x04, 0x08, 0xF7, 0xBE, 0xA9, 0xE7, 0x1C, 0xFF, 0xE7, 0x3C, 0xFF, 0xF7, 0xBE, 
  /* RLE: 023 Pixels @ 007,027 */ 0x97, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 030,027 */ 0x02, 0xFF, 0xFF, 0xDF, 0xFF, 0xEF, 0x5D, 
  /* RLE: 037 Pixels @ 032,027 */ 0xA5, 0xFF, 0xE7, 0x3C, 
  /* ABS: 001 Pixels @ 069,027 */ 0x01, 0x80, 0xE7, 0x3C, 
  /* RLE: 003 Pixels @ 070,027 */ 0x83, 0x00, 0xE7, 0x3C, 
  /* RLE: 004 Pixels @ 000,028 */ 0x84, 0x00, 0xFF, 0xFF, 
  /* ABS: 004 Pixels @ 004,028 */ 0x04, 0x10, 0xEF, 0x7D, 0xAF, 0xE7, 0x1C, 0xFF, 0xE7, 0x3C, 0xFF, 0xF7, 0xBE, 
  /* RLE: 021 Pixels @ 008,028 */ 0x95, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 029,028 */ 0x02, 0xFF, 0xFF, 0xDF, 0xFF, 0xEF, 0x5D, 
  /* RLE: 037 Pixels @ 031,028 */ 0xA5, 0xFF, 0xE7, 0x3C, 
  /* ABS: 002 Pixels @ 068,028 */ 0x02, 0x89, 0xE7, 0x3C, 0x02, 0xE7, 0x3C, 
  /* RLE: 003 Pixels @ 070,028 */ 0x83, 0x00, 0xE7, 0x3C, 
  /* RLE: 005 Pixels @ 000,029 */ 0x85, 0x00, 0xFF, 0xFF, 
  /* ABS: 004 Pixels @ 005,029 */ 0x04, 0x07, 0xF7, 0x9E, 0x95, 0xE7, 0x1C, 0xFA, 0xE7, 0x1C, 0xFF, 0xEF, 0x7D, 
  /* RLE: 019 Pixels @ 009,029 */ 0x93, 0xFF, 0xFF, 0xFF, 
  /* ABS: 001 Pixels @ 028,029 */ 0x01, 0xFF, 0xF7, 0xBE, 
  /* RLE: 037 Pixels @ 029,029 */ 0xA5, 0xFF, 0xE7, 0x3C, 
  /* ABS: 002 Pixels @ 066,029 */ 0x02, 0xEF, 0xE7, 0x3C, 0x72, 0xE7, 0x3C, 
  /* RLE: 005 Pixels @ 068,029 */ 0x85, 0x00, 0xE7, 0x3C, 
  /* RLE: 006 Pixels @ 000,030 */ 0x86, 0x00, 0xFF, 0xFF, 
  /* ABS: 005 Pixels @ 006,030 */ 0x05, 0x04, 0xFF, 0xDF, 0x5B, 0xEF, 0x7D, 0xDF, 0xE7, 0x1C, 0xFF, 0xEF, 0x5D, 0xFF, 0xF7, 0xBE, 
  /* RLE: 015 Pixels @ 011,030 */ 0x8F, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 026,030 */ 0x02, 0xFF, 0xFF, 0xDF, 0xFF, 0xEF, 0x7D, 
  /* RLE: 037 Pixels @ 028,030 */ 0xA5, 0xFF, 0xE7, 0x3C, 
  /* ABS: 002 Pixels @ 065,030 */ 0x02, 0xC7, 0xE7, 0x3C, 0x40, 0xE7, 0x3C, 
  /* RLE: 006 Pixels @ 067,030 */ 0x86, 0x00, 0xE7, 0x3C, 
  /* RLE: 008 Pixels @ 000,031 */ 0x88, 0x00, 0xFF, 0xFF, 
  /* ABS: 006 Pixels @ 008,031 */ 0x06, 0x15, 0xEF, 0x7D, 0x81, 0xE7, 0x3C, 0xE2, 0xE7, 0x1C, 0xFC, 0xE7, 0x3C, 0xFF, 0xF7, 0x9E, 0xFF, 0xFF, 0xDF, 
  /* RLE: 010 Pixels @ 014,031 */ 0x8A, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 024,031 */ 0x02, 0xFF, 0xF7, 0xBE, 0xFF, 0xEF, 0x5D, 
  /* RLE: 036 Pixels @ 026,031 */ 0xA4, 0xFF, 0xE7, 0x3C, 
  /* ABS: 004 Pixels @ 062,031 */ 0x04, 0xFA, 0xE7, 0x3C, 0xD6, 0xE7, 0x3C, 0x66, 0xE7, 0x3C, 0x09, 0xE7, 0x3C, 
  /* RLE: 007 Pixels @ 066,031 */ 0x87, 0x00, 0xE7, 0x3C, 
  /* RLE: 010 Pixels @ 000,032 */ 0x8A, 0x00, 0xFF, 0xFF, 
  /* ABS: 013 Pixels @ 010,032 */ 0x0D, 0x0F, 0xF7, 0x9E, 0x5D, 0xF7, 0x9E, 0x9C, 0xE7, 0x3C, 0xC0, 0xE7, 0x3C, 0xDB, 0xEF, 0x5D, 0xEF, 0xEF, 0x7D, 0xF9, 0xF7, 0x9E, 0xFF, 0xF7, 0x9E, 0xFF, 0xF7, 0xBE, 0xFF, 0xF7, 0xBE, 0xFF, 0xF7, 0x9E, 0xFF, 0xEF, 0x7D, 0xFF, 0xEF, 0x5D, 
  /* RLE: 033 Pixels @ 023,032 */ 0xA1, 0xFF, 0xE7, 0x3C, 
  /* ABS: 008 Pixels @ 056,032 */ 0x08, 0xFE, 0xE7, 0x3C, 0xF7, 0xE7, 0x3C, 0xEB, 0xE7, 0x3C, 0xD7, 0xE7, 0x3C, 0xBA, 0xE7, 0x3C, 0x91, 0xE7, 0x3C, 0x4C, 0xE7, 0x3C, 0x06, 0xE7, 0x3C, 
  /* RLE: 009 Pixels @ 064,032 */ 0x89, 0x00, 0xE7, 0x3C, 
};  //2409 pixels compress to 1230 bytes


GUI_CONST_STORAGE GUI_BITMAP bmbtn_close = {
  73,  //xSize
  33,  //ySize
  219,  //ByteBytesPerLine
  24,  //BitsPerPixel
  (unsigned char *)_acbtn_close,  //Pointer to picture data
  NULL,  //Pointer to palette
  GUI_DRAW_AlphaRLEM16M
};  


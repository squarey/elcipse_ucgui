﻿


#include <stdlib.h>
#include "GUI.h"
#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif


extern GUI_CONST_STORAGE GUI_BITMAP bmcooker_left;

static GUI_CONST_STORAGE unsigned char _accooker_left[] = {
  /* RLE: 012 Pixels @ 000,000 */ 0x8C, 0x00, 0x04, 0xDB, 
  /* ABS: 006 Pixels @ 012,000 */ 0x06, 0x0B, 0x04, 0xDB, 0x53, 0x04, 0xDB, 0x9D, 0x04, 0xDB, 0xD0, 0x04, 0xDB, 0xED, 0x04, 0xDB, 0xFD, 0x04, 0xDB, 
  /* RLE: 040 Pixels @ 018,000 */ 0xA8, 0xFF, 0x04, 0xDB, 
  /* RLE: 037 Pixels @ 058,000 */ 0xA5, 0xFF, 0x04, 0xBB, 
  /* ABS: 006 Pixels @ 095,000 */ 0x06, 0xFA, 0x04, 0xBB, 0xE9, 0x04, 0xBB, 0xC8, 0x04, 0xBB, 0x92, 0x04, 0xBB, 0x41, 0x04, 0x7B, 0x04, 0x9E, 0xBE, 
  /* RLE: 011 Pixels @ 101,000 */ 0x8B, 0x00, 0xFF, 0xFF, 
  /* RLE: 009 Pixels @ 000,001 */ 0x89, 0x00, 0x04, 0xDB, 
  /* ABS: 008 Pixels @ 009,001 */ 0x08, 0x05, 0x04, 0xDB, 0x2E, 0x04, 0xDB, 0x87, 0x04, 0xDB, 0xCD, 0x04, 0xDB, 0xE3, 0x04, 0xDB, 0xEE, 0x04, 0xDB, 0xF7, 0x04, 0xDB, 0xFC, 0x04, 0xDB, 
  /* RLE: 039 Pixels @ 017,001 */ 0xA7, 0xFF, 0x04, 0xDB, 
  /* ABS: 003 Pixels @ 056,001 */ 0x03, 0xFF, 0x04, 0xBB, 0xFF, 0xAE, 0xFE, 0xFF, 0xDF, 0x9F, 
  /* RLE: 036 Pixels @ 059,001 */ 0xA4, 0xFF, 0xD7, 0x7F, 
  /* ABS: 010 Pixels @ 095,001 */ 0x0A, 0xFE, 0xCF, 0x7F, 0xFB, 0xC7, 0x5F, 0xF5, 0xAE, 0xFE, 0xEC, 0x86, 0x7D, 0xE1, 0x45, 0xBD, 0xC2, 0x35, 0x9C, 0x75, 0x2D, 0x7C, 0x22, 0x45, 0xBC, 0x03, 0xE7, 0xBF, 0x00, 0xF7, 0xDF, 
  /* RLE: 007 Pixels @ 105,001 */ 0x87, 0x00, 0xFF, 0xFF, 
  /* RLE: 008 Pixels @ 000,002 */ 0x88, 0x00, 0x04, 0xDB, 
  /* ABS: 003 Pixels @ 008,002 */ 0x03, 0x3A, 0x04, 0xDB, 0xAC, 0x04, 0xDB, 0xFE, 0x04, 0xDB, 
  /* RLE: 045 Pixels @ 011,002 */ 0xAD, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,002 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 042 Pixels @ 058,002 */ 0xAA, 0xFF, 0xFF, 0xFF, 
  /* ABS: 005 Pixels @ 100,002 */ 0x05, 0xFF, 0xEF, 0xBF, 0xFF, 0x9E, 0xDE, 0xF7, 0x45, 0xBD, 0x94, 0x04, 0x9B, 0x26, 0x5D, 0xDD, 
  /* RLE: 007 Pixels @ 105,002 */ 0x87, 0x00, 0xFF, 0xFF, 
  /* RLE: 006 Pixels @ 000,003 */ 0x86, 0x00, 0x04, 0xDB, 
  /* ABS: 003 Pixels @ 006,003 */ 0x03, 0x0A, 0x04, 0xDB, 0x89, 0x04, 0xDB, 0xF2, 0x04, 0xDB, 
  /* RLE: 047 Pixels @ 009,003 */ 0xAF, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,003 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 045 Pixels @ 058,003 */ 0xAD, 0xFF, 0xFF, 0xFF, 
  /* ABS: 004 Pixels @ 103,003 */ 0x04, 0xFF, 0xB7, 0x1E, 0xE3, 0x25, 0x5C, 0x6A, 0x3D, 0x9C, 0x00, 0x7E, 0x7D, 
  /* RLE: 005 Pixels @ 107,003 */ 0x85, 0x00, 0xFF, 0xFF, 
  /* RLE: 005 Pixels @ 000,004 */ 0x85, 0x00, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 005,004 */ 0x02, 0x1E, 0x04, 0xDB, 0xBD, 0x04, 0xDB, 
  /* RLE: 049 Pixels @ 007,004 */ 0xB1, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,004 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 046 Pixels @ 058,004 */ 0xAE, 0xFF, 0xFF, 0xFF, 
  /* ABS: 004 Pixels @ 104,004 */ 0x04, 0xFF, 0xF7, 0xDF, 0xFF, 0x66, 0x1D, 0x9E, 0x04, 0x9B, 0x0E, 0x66, 0x1D, 
  /* RLE: 004 Pixels @ 108,004 */ 0x84, 0x00, 0xFF, 0xFF, 
  /* RLE: 004 Pixels @ 000,005 */ 0x84, 0x00, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 004,005 */ 0x02, 0x2A, 0x04, 0xDB, 0xD2, 0x04, 0xDB, 
  /* RLE: 050 Pixels @ 006,005 */ 0xB2, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,005 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 048 Pixels @ 058,005 */ 0xB0, 0xFF, 0xFF, 0xFF, 
  /* ABS: 003 Pixels @ 106,005 */ 0x03, 0xFF, 0x96, 0xBE, 0xB3, 0x04, 0xBB, 0x13, 0x5D, 0xFD, 
  /* RLE: 003 Pixels @ 109,005 */ 0x83, 0x00, 0xFF, 0xFF, 
  /* RLE: 003 Pixels @ 000,006 */ 0x83, 0x00, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 003,006 */ 0x02, 0x18, 0x04, 0xDB, 0xC6, 0x04, 0xDB, 
  /* RLE: 051 Pixels @ 005,006 */ 0xB3, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,006 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 049 Pixels @ 058,006 */ 0xB1, 0xFF, 0xFF, 0xFF, 
  /* ABS: 009 Pixels @ 107,006 */ 0x09, 0xFF, 0x96, 0xBE, 0xA3, 0x04, 0x9B, 0x08, 0xCF, 0x5F, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x04, 0xDB, 0x00, 0x04, 0xDB, 0x05, 0x04, 0xDB, 0x9D, 0x04, 0xDB, 
  /* RLE: 052 Pixels @ 004,007 */ 0xB4, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,007 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 050 Pixels @ 058,007 */ 0xB2, 0xFF, 0xFF, 0xFF, 
  /* ABS: 007 Pixels @ 108,007 */ 0x07, 0xFF, 0x76, 0x5D, 0x76, 0x15, 0x1C, 0x00, 0xDF, 0x9F, 0x00, 0xFF, 0xFF, 0x00, 0x04, 0xDB, 0x00, 0x04, 0xDB, 0x54, 0x04, 0xDB, 
  /* RLE: 015 Pixels @ 003,008 */ 0x8F, 0xFF, 0x04, 0xDB, 
  /* ABS: 003 Pixels @ 018,008 */ 0x03, 0xFF, 0x04, 0xFB, 0xFF, 0x1D, 0x1C, 0xFF, 0x1D, 0x1C, 
  /* RLE: 014 Pixels @ 021,008 */ 0x8E, 0xFF, 0x04, 0xDB, 
  /* ABS: 001 Pixels @ 035,008 */ 0x01, 0xFF, 0x04, 0x9B, 
  /* RLE: 007 Pixels @ 036,008 */ 0x87, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 043,008 */ 0x02, 0xFF, 0x25, 0x3C, 0xFF, 0x25, 0x3C, 
  /* RLE: 011 Pixels @ 045,008 */ 0x8B, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,008 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 017 Pixels @ 058,008 */ 0x91, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 075,008 */ 0x02, 0xFF, 0xF7, 0xBE, 0xFF, 0xFF, 0xDF, 
  /* RLE: 021 Pixels @ 077,008 */ 0x95, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 098,008 */ 0x02, 0xFF, 0xF7, 0xBE, 0xFF, 0xF7, 0x9E, 
  /* RLE: 008 Pixels @ 100,008 */ 0x88, 0xFF, 0xFF, 0xFF, 
  /* ABS: 007 Pixels @ 108,008 */ 0x07, 0xFF, 0xF7, 0xDF, 0xF4, 0x2D, 0x7C, 0x2F, 0x2D, 0x5C, 0x00, 0xFF, 0xFF, 0x00, 0x04, 0xDB, 0x09, 0x04, 0xDB, 0xD4, 0x04, 0xDB, 
  /* RLE: 015 Pixels @ 003,009 */ 0x8F, 0xFF, 0x04, 0xDB, 
  /* ABS: 004 Pixels @ 018,009 */ 0x04, 0xFF, 0x15, 0x1C, 0xFF, 0xBE, 0xDE, 0xFF, 0x9E, 0x7D, 0xFF, 0x0C, 0xFB, 
  /* RLE: 012 Pixels @ 022,009 */ 0x8C, 0xFF, 0x04, 0xDB, 
  /* ABS: 004 Pixels @ 034,009 */ 0x04, 0xFF, 0x25, 0x5C, 0xFF, 0xAE, 0xFE, 0xFF, 0x35, 0x7C, 0xFF, 0x04, 0xBB, 
  /* RLE: 005 Pixels @ 038,009 */ 0x85, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 043,009 */ 0x02, 0xFF, 0xA6, 0x9E, 0xFF, 0xA6, 0x9E, 
  /* RLE: 011 Pixels @ 045,009 */ 0x8B, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,009 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 016 Pixels @ 058,009 */ 0x90, 0xFF, 0xFF, 0xFF, 
  /* ABS: 003 Pixels @ 074,009 */ 0x03, 0xFF, 0xF7, 0xBE, 0xFF, 0x7B, 0xEF, 0xFF, 0xAD, 0x75, 
  /* RLE: 012 Pixels @ 077,009 */ 0x8C, 0xFF, 0xFF, 0xFF, 
  /* ABS: 003 Pixels @ 089,009 */ 0x03, 0xFF, 0xFF, 0xDF, 0xFF, 0x84, 0x30, 0xFF, 0xCE, 0x79, 
  /* RLE: 006 Pixels @ 092,009 */ 0x86, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 098,009 */ 0x02, 0xFF, 0xBD, 0xF7, 0xFF, 0x84, 0x10, 
  /* RLE: 009 Pixels @ 100,009 */ 0x89, 0xFF, 0xFF, 0xFF, 
  /* ABS: 006 Pixels @ 109,009 */ 0x06, 0xFF, 0xBF, 0x3E, 0xAE, 0x0C, 0xFC, 0x00, 0xAE, 0xFE, 0x00, 0x04, 0xDB, 0x59, 0x04, 0xDB, 0xFE, 0x04, 0xDB, 
  /* RLE: 010 Pixels @ 003,010 */ 0x8A, 0xFF, 0x04, 0xDB, 
  /* RLE: 004 Pixels @ 013,010 */ 0x84, 0xFF, 0x04, 0xBB, 
  /* ABS: 005 Pixels @ 017,010 */ 0x05, 0xFF, 0x04, 0x9B, 0xFF, 0x25, 0x1C, 0xFF, 0xFF, 0xDF, 0xFF, 0x7E, 0x3D, 0xFF, 0x04, 0x7B, 
  /* RLE: 008 Pixels @ 022,010 */ 0x88, 0xFF, 0x04, 0xBB, 
  /* RLE: 003 Pixels @ 030,010 */ 0x83, 0xFF, 0x04, 0xDB, 
  /* ABS: 006 Pixels @ 033,010 */ 0x06, 0xFF, 0x04, 0xBB, 0xFF, 0x35, 0x7C, 0xFF, 0xFF, 0xFF, 0xFF, 0x55, 0xDD, 0xFF, 0x04, 0xBB, 0xFF, 0x04, 0xBB, 
  /* RLE: 003 Pixels @ 039,010 */ 0x83, 0xFF, 0x04, 0xDB, 
  /* ABS: 004 Pixels @ 042,010 */ 0x04, 0xFF, 0x0C, 0xDB, 0xFF, 0xB6, 0xDE, 0xFF, 0xB6, 0xDE, 0xFF, 0x0C, 0xDB, 
  /* RLE: 010 Pixels @ 046,010 */ 0x8A, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,010 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 016 Pixels @ 058,010 */ 0x90, 0xFF, 0xFF, 0xFF, 
  /* ABS: 003 Pixels @ 074,010 */ 0x03, 0xFF, 0xE7, 0x1C, 0xFF, 0x39, 0xC7, 0xFF, 0xB5, 0xB6, 
  /* RLE: 012 Pixels @ 077,010 */ 0x8C, 0xFF, 0xFF, 0xFF, 
  /* ABS: 003 Pixels @ 089,010 */ 0x03, 0xFF, 0xF7, 0xBE, 0xFF, 0x31, 0x86, 0xFF, 0xAD, 0x55, 
  /* RLE: 006 Pixels @ 092,010 */ 0x86, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 098,010 */ 0x02, 0xFF, 0xAD, 0x55, 0xFF, 0x63, 0x0C, 
  /* RLE: 010 Pixels @ 100,010 */ 0x8A, 0xFF, 0xFF, 0xFF, 
  /* ABS: 004 Pixels @ 110,010 */ 0x04, 0xEC, 0x3D, 0x9C, 0x37, 0x6E, 0x1D, 0x00, 0x04, 0xDB, 0xB1, 0x04, 0xDB, 
  /* RLE: 010 Pixels @ 002,011 */ 0x8A, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 012,011 */ 0x02, 0xFF, 0x15, 0x1C, 0xFF, 0x5D, 0xFD, 
  /* RLE: 003 Pixels @ 014,011 */ 0x83, 0xFF, 0x66, 0x1D, 
  /* ABS: 005 Pixels @ 017,011 */ 0x05, 0xFF, 0x5E, 0x1D, 0xFF, 0x7E, 0x5D, 0xFF, 0xFF, 0xFF, 0xFF, 0x9E, 0xDE, 0xFF, 0x55, 0xFD, 
  /* RLE: 007 Pixels @ 022,011 */ 0x87, 0xFF, 0x66, 0x1D, 
  /* ABS: 017 Pixels @ 029,011 */ 0x11, 0xFF, 0x55, 0xDD, 0xFF, 0x04, 0xFB, 0xFF, 0x04, 0xDB, 0xFF, 0x04, 0xDB, 0xFF, 0x04, 0xBB, 0xFF, 0x35, 0x7C, 0xFF, 0xFF, 0xFF, 0xFF, 0x4D, 0xBD, 0xFF, 0x04, 0x9B, 0xFF, 0x45, 0xBC, 0xFF, 0x15, 0x1C, 0xFF, 0x04, 0xDB, 0xFF, 0x04, 0xDB, 
        0xFF, 0x0C, 0xDB, 0xFF, 0xB6, 0xDE, 0xFF, 0xB6, 0xDE, 0xFF, 0x0C, 0xDB, 
  /* RLE: 010 Pixels @ 046,011 */ 0x8A, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,011 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 010 Pixels @ 058,011 */ 0x8A, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 068,011 */ 0x02, 0xFF, 0xC6, 0x38, 0xFF, 0xAD, 0x55, 
  /* RLE: 003 Pixels @ 070,011 */ 0x83, 0xFF, 0xAD, 0x75, 
  /* ABS: 005 Pixels @ 073,011 */ 0x05, 0xFF, 0xB5, 0x96, 0xFF, 0x8C, 0x71, 0xFF, 0x39, 0xC7, 0xFF, 0x94, 0xB2, 0xFF, 0xB5, 0xB6, 
  /* RLE: 006 Pixels @ 078,011 */ 0x86, 0xFF, 0xAD, 0x75, 
  /* ABS: 002 Pixels @ 084,011 */ 0x02, 0xFF, 0xBD, 0xF7, 0xFF, 0xF7, 0xBE, 
  /* RLE: 003 Pixels @ 086,011 */ 0x83, 0xFF, 0xFF, 0xFF, 
  /* ABS: 006 Pixels @ 089,011 */ 0x06, 0xFF, 0xF7, 0xBE, 0xFF, 0x39, 0xE7, 0xFF, 0xB5, 0x96, 0xFF, 0xFF, 0xFF, 0xFF, 0xD6, 0xBA, 0xFF, 0xF7, 0x9E, 
  /* RLE: 003 Pixels @ 095,011 */ 0x83, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 098,011 */ 0x02, 0xFF, 0xAD, 0x75, 0xFF, 0x63, 0x2C, 
  /* RLE: 010 Pixels @ 100,011 */ 0x8A, 0xFF, 0xFF, 0xFF, 
  /* ABS: 004 Pixels @ 110,011 */ 0x04, 0xFF, 0xAE, 0xFE, 0x83, 0x3D, 0x9C, 0x3C, 0x04, 0xDB, 0xD4, 0x04, 0xDB, 
  /* RLE: 010 Pixels @ 002,012 */ 0x8A, 0xFF, 0x04, 0xDB, 
  /* ABS: 003 Pixels @ 012,012 */ 0x03, 0xFF, 0x35, 0x3C, 0xFF, 0xEF, 0x7F, 0xFF, 0xFF, 0xFF, 
  /* RLE: 003 Pixels @ 015,012 */ 0x83, 0xFF, 0xFF, 0xDF, 
  /* ABS: 002 Pixels @ 018,012 */ 0x02, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  /* RLE: 008 Pixels @ 020,012 */ 0x88, 0xFF, 0xFF, 0xDF, 
  /* ABS: 017 Pixels @ 028,012 */ 0x11, 0xFF, 0xFF, 0xFF, 0xFF, 0xD7, 0x3E, 0xFF, 0x04, 0xFC, 0xFF, 0x04, 0xDB, 0xFF, 0x35, 0x5C, 0xFF, 0x4D, 0x9C, 0xFF, 0x35, 0x9C, 0xFF, 0xFF, 0xFF, 0xFF, 0x45, 0x9C, 0xFF, 0x5D, 0xFD, 0xFF, 0xF7, 0xBF, 0xFF, 0x4D, 0x9C, 0xFF, 0x04, 0xBB, 
        0xFF, 0x04, 0xDB, 0xFF, 0x04, 0xDB, 0xFF, 0xB6, 0xDE, 0xFF, 0xB6, 0xDE, 
  /* RLE: 011 Pixels @ 045,012 */ 0x8B, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,012 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 010 Pixels @ 058,012 */ 0x8A, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 068,012 */ 0x02, 0xFF, 0x84, 0x10, 0xFF, 0x42, 0x08, 
  /* RLE: 004 Pixels @ 070,012 */ 0x84, 0xFF, 0x4A, 0x69, 
  /* ABS: 004 Pixels @ 074,012 */ 0x04, 0xFF, 0x21, 0x24, 0xFF, 0x39, 0xE7, 0xFF, 0x52, 0x8A, 0xFF, 0x4A, 0x49, 
  /* RLE: 005 Pixels @ 078,012 */ 0x85, 0xFF, 0x4A, 0x69, 
  /* ABS: 012 Pixels @ 083,012 */ 0x0C, 0xFF, 0x42, 0x28, 0xFF, 0x6B, 0x4D, 0xFF, 0xEF, 0x7D, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0x9E, 0xFF, 0xD6, 0xBA, 0xFF, 0xEF, 0x7D, 0xFF, 0x39, 0xE7, 0xFF, 0xBD, 0xD7, 0xFF, 0xE7, 0x3C, 0xFF, 0x4A, 0x69, 0xFF, 0xC6, 0x38, 
  /* RLE: 003 Pixels @ 095,012 */ 0x83, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 098,012 */ 0x02, 0xFF, 0xAD, 0x75, 0xFF, 0x63, 0x2C, 
  /* RLE: 010 Pixels @ 100,012 */ 0x8A, 0xFF, 0xFF, 0xFF, 
  /* ABS: 004 Pixels @ 110,012 */ 0x04, 0xFF, 0xE7, 0xBF, 0xB1, 0x1D, 0x1C, 0x93, 0x04, 0xDB, 0xE7, 0x04, 0xDB, 
  /* RLE: 010 Pixels @ 002,013 */ 0x8A, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 012,013 */ 0x02, 0xFF, 0x04, 0xFC, 0xFF, 0x15, 0x1C, 
  /* RLE: 003 Pixels @ 014,013 */ 0x83, 0xFF, 0x1D, 0x1C, 
  /* ABS: 005 Pixels @ 017,013 */ 0x05, 0xFF, 0x15, 0x1C, 0xFF, 0xD7, 0x5E, 0xFF, 0xCF, 0x3E, 0xFF, 0x25, 0x1C, 0xFF, 0x15, 0x1C, 
  /* RLE: 007 Pixels @ 022,013 */ 0x87, 0xFF, 0x1D, 0x1C, 
  /* ABS: 010 Pixels @ 029,013 */ 0x0A, 0xFF, 0x15, 0x1C, 0xFF, 0x04, 0xDB, 0xFF, 0x04, 0x9B, 0xFF, 0x9E, 0xBE, 0xFF, 0xC6, 0xFE, 0xFF, 0x35, 0x9C, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x1E, 0xFF, 0xEF, 0xBF, 0xFF, 0x7E, 0x1D, 
  /* RLE: 003 Pixels @ 039,013 */ 0x83, 0xFF, 0x04, 0xDB, 
  /* ABS: 004 Pixels @ 042,013 */ 0x04, 0xFF, 0x0C, 0xDB, 0xFF, 0xB6, 0xDE, 0xFF, 0xB6, 0xDE, 0xFF, 0x0C, 0xDB, 
  /* RLE: 010 Pixels @ 046,013 */ 0x8A, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,013 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 010 Pixels @ 058,013 */ 0x8A, 0xFF, 0xFF, 0xFF, 
  /* ABS: 001 Pixels @ 068,013 */ 0x01, 0xFF, 0xF7, 0xBE, 
  /* RLE: 003 Pixels @ 069,013 */ 0x83, 0xFF, 0xF7, 0x9E, 
  /* ABS: 005 Pixels @ 072,013 */ 0x05, 0xFF, 0xF7, 0xBE, 0xFF, 0xD6, 0xBA, 0xFF, 0x39, 0xE7, 0xFF, 0xB5, 0x96, 0xFF, 0xFF, 0xFF, 
  /* RLE: 007 Pixels @ 077,013 */ 0x87, 0xFF, 0xF7, 0x9E, 
  /* ABS: 011 Pixels @ 084,013 */ 0x0B, 0xFF, 0xF7, 0xBE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAD, 0x75, 0xFF, 0x6B, 0x4D, 0xFF, 0xEF, 0x7D, 0xFF, 0x42, 0x28, 0xFF, 0x84, 0x10, 0xFF, 0x5A, 0xEB, 0xFF, 0x9C, 0xF3, 0xFF, 0xFF, 0xDF, 
  /* RLE: 003 Pixels @ 095,013 */ 0x83, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 098,013 */ 0x02, 0xFF, 0xB5, 0x96, 0xFF, 0x6B, 0x4D, 
  /* RLE: 010 Pixels @ 100,013 */ 0x8A, 0xFF, 0xFF, 0xFF, 
  /* ABS: 004 Pixels @ 110,013 */ 0x04, 0xFF, 0xF7, 0xFF, 0xD4, 0x55, 0xDD, 0xCC, 0x04, 0xDB, 0xF4, 0x04, 0xDB, 
  /* RLE: 015 Pixels @ 002,014 */ 0x8F, 0xFF, 0x04, 0xDB, 
  /* ABS: 004 Pixels @ 017,014 */ 0x04, 0xFF, 0x25, 0x3C, 0xFF, 0xFF, 0xDF, 0xFF, 0x86, 0x7D, 0xFF, 0x04, 0x9B, 
  /* RLE: 010 Pixels @ 021,014 */ 0x8A, 0xFF, 0x04, 0xDB, 
  /* ABS: 018 Pixels @ 031,014 */ 0x12, 0xFF, 0x04, 0xBB, 0xFF, 0xAE, 0xFE, 0xFF, 0xB6, 0xDE, 0xFF, 0x35, 0x7C, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xBF, 0xFF, 0x65, 0xFD, 0xFF, 0x04, 0xBB, 0xFF, 0x6D, 0xFD, 0xFF, 0xB6, 0xFE, 0xFF, 0xAE, 0xDE, 0xFF, 0xAE, 0xDE, 0xFF, 0xE7, 0x9F, 
        0xFF, 0xE7, 0x9F, 0xFF, 0xAE, 0xDE, 0xFF, 0xAE, 0xDE, 0xFF, 0xB6, 0xFE, 0xFF, 0x75, 0xFD, 
  /* RLE: 007 Pixels @ 049,014 */ 0x87, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,014 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 015 Pixels @ 058,014 */ 0x8F, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 073,014 */ 0x02, 0xFF, 0x84, 0x30, 0xFF, 0x52, 0xAA, 
  /* RLE: 012 Pixels @ 075,014 */ 0x8C, 0xFF, 0xFF, 0xFF, 
  /* ABS: 017 Pixels @ 087,014 */ 0x11, 0xFF, 0xA5, 0x14, 0xFF, 0x6B, 0x4D, 0xFF, 0xF7, 0x9E, 0xFF, 0x39, 0xC7, 0xFF, 0x39, 0xC7, 0xFF, 0xAD, 0x75, 0xFF, 0xFF, 0xFF, 0xFF, 0xDE, 0xDB, 0xFF, 0x8C, 0x51, 0xFF, 0x8C, 0x71, 0xFF, 0x8C, 0x71, 0xFF, 0x6B, 0x4D, 0xFF, 0x4A, 0x49, 
        0xFF, 0x8C, 0x71, 0xFF, 0x8C, 0x71, 0xFF, 0x84, 0x30, 0xFF, 0xAD, 0x75, 
  /* RLE: 007 Pixels @ 104,014 */ 0x87, 0xFF, 0xFF, 0xFF, 
  /* ABS: 003 Pixels @ 111,014 */ 0x03, 0xEB, 0x76, 0x5D, 0xED, 0x04, 0xDB, 0xFB, 0x04, 0xDB, 
  /* RLE: 014 Pixels @ 002,015 */ 0x8E, 0xFF, 0x04, 0xDB, 
  /* ABS: 005 Pixels @ 016,015 */ 0x05, 0xFF, 0x04, 0xBB, 0xFF, 0x96, 0x7D, 0xFF, 0xF7, 0xBF, 0xFF, 0x3D, 0x5C, 0xFF, 0x04, 0xBB, 
  /* RLE: 010 Pixels @ 021,015 */ 0x8A, 0xFF, 0x04, 0xDB, 
  /* ABS: 018 Pixels @ 031,015 */ 0x12, 0xFF, 0x14, 0xFB, 0xFF, 0xCF, 0x3E, 0xFF, 0x96, 0x7D, 0xFF, 0x35, 0x7C, 0xFF, 0xFF, 0xFF, 0xFF, 0x6D, 0xFD, 0xFF, 0x04, 0xBB, 0xFF, 0x04, 0xDB, 0xFF, 0x75, 0xFD, 0xFF, 0xB6, 0xFE, 0xFF, 0xAE, 0xDE, 0xFF, 0xAE, 0xDE, 0xFF, 0xE7, 0x9F, 
        0xFF, 0xE7, 0x9F, 0xFF, 0xAE, 0xDE, 0xFF, 0xAE, 0xDE, 0xFF, 0xB6, 0xFE, 0xFF, 0x75, 0xFD, 
  /* RLE: 007 Pixels @ 049,015 */ 0x87, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,015 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 014 Pixels @ 058,015 */ 0x8E, 0xFF, 0xFF, 0xFF, 
  /* ABS: 003 Pixels @ 072,015 */ 0x03, 0xFF, 0xCE, 0x79, 0xFF, 0x39, 0xC7, 0xFF, 0xAD, 0x75, 
  /* RLE: 012 Pixels @ 075,015 */ 0x8C, 0xFF, 0xFF, 0xFF, 
  /* ABS: 017 Pixels @ 087,015 */ 0x11, 0xFF, 0x8C, 0x71, 0xFF, 0x7B, 0xEF, 0xFF, 0xFF, 0xDF, 0xFF, 0x39, 0xC7, 0xFF, 0xA5, 0x14, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDE, 0xDB, 0xFF, 0x8C, 0x51, 0xFF, 0x8C, 0x71, 0xFF, 0x8C, 0x71, 0xFF, 0x6B, 0x4D, 0xFF, 0x4A, 0x49, 
        0xFF, 0x8C, 0x71, 0xFF, 0x8C, 0x71, 0xFF, 0x84, 0x30, 0xFF, 0xAD, 0x75, 
  /* RLE: 007 Pixels @ 104,015 */ 0x87, 0xFF, 0xFF, 0xFF, 
  /* ABS: 001 Pixels @ 111,015 */ 0x01, 0xF8, 0x86, 0x9E, 
  /* RLE: 016 Pixels @ 000,016 */ 0x90, 0xFF, 0x04, 0xDB, 
  /* ABS: 004 Pixels @ 016,016 */ 0x04, 0xFF, 0x1C, 0xFC, 0xFF, 0xE7, 0x9F, 0xFF, 0xC7, 0x3E, 0xFF, 0x14, 0xFC, 
  /* RLE: 008 Pixels @ 020,016 */ 0x88, 0xFF, 0x1D, 0x1C, 
  /* ABS: 010 Pixels @ 028,016 */ 0x0A, 0xFF, 0x04, 0xFC, 0xFF, 0x04, 0xDB, 0xFF, 0x04, 0xBB, 0xFF, 0x3D, 0x7C, 0xFF, 0xFF, 0xDF, 0xFF, 0x4D, 0x9C, 0xFF, 0x2D, 0x7C, 0xFF, 0xFF, 0xFF, 0xFF, 0x4D, 0xBC, 0xFF, 0x04, 0xBB, 
  /* RLE: 004 Pixels @ 038,016 */ 0x84, 0xFF, 0x04, 0xDB, 
  /* ABS: 004 Pixels @ 042,016 */ 0x04, 0xFF, 0x0C, 0xDB, 0xFF, 0xB6, 0xDE, 0xFF, 0xB6, 0xDE, 0xFF, 0x0C, 0xDB, 
  /* RLE: 010 Pixels @ 046,016 */ 0x8A, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,016 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 013 Pixels @ 058,016 */ 0x8D, 0xFF, 0xFF, 0xFF, 
  /* ABS: 004 Pixels @ 071,016 */ 0x04, 0xFF, 0xF7, 0x9E, 0xFF, 0x63, 0x0C, 0xFF, 0x52, 0xAA, 0xFF, 0xDE, 0xFB, 
  /* RLE: 007 Pixels @ 075,016 */ 0x87, 0xFF, 0xE7, 0x1C, 
  /* ABS: 010 Pixels @ 082,016 */ 0x0A, 0xFF, 0xE7, 0x3C, 0xFF, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xBE, 0xFF, 0x63, 0x0C, 0xFF, 0xA5, 0x14, 0xFF, 0xFF, 0xFF, 0xFF, 0x39, 0xE7, 0xFF, 0xB5, 0x96, 
  /* RLE: 006 Pixels @ 092,016 */ 0x86, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 098,016 */ 0x02, 0xFF, 0xB5, 0x96, 0xFF, 0x6B, 0x4D, 
  /* RLE: 011 Pixels @ 100,016 */ 0x8B, 0xFF, 0xFF, 0xFF, 
  /* ABS: 003 Pixels @ 111,016 */ 0x03, 0xFF, 0x96, 0x9E, 0xFB, 0x04, 0xDB, 0xFE, 0x04, 0xDB, 
  /* RLE: 013 Pixels @ 002,017 */ 0x8D, 0xFF, 0x04, 0xDB, 
  /* ABS: 004 Pixels @ 015,017 */ 0x04, 0xFF, 0x04, 0xBB, 0xFF, 0x7E, 0x3D, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  /* RLE: 003 Pixels @ 019,017 */ 0x83, 0xFF, 0xFF, 0xDF, 
  /* ABS: 016 Pixels @ 022,017 */ 0x10, 0xFF, 0xEF, 0xBF, 0xFF, 0xF7, 0xBF, 0xFF, 0xFF, 0xDF, 0xFF, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0xFF, 0x4D, 0xBC, 0xFF, 0x04, 0xBB, 0xFF, 0x04, 0xBB, 0xFF, 0x45, 0x9C, 0xFF, 0xCF, 0x1E, 0xFF, 0x1D, 0x1C, 0xFF, 0x2D, 0x7C, 
        0xFF, 0xFF, 0xFF, 0xFF, 0x4D, 0xBC, 0xFF, 0x04, 0xBB, 
  /* RLE: 005 Pixels @ 038,017 */ 0x85, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 043,017 */ 0x02, 0xFF, 0xB6, 0xDE, 0xFF, 0xB6, 0xDE, 
  /* RLE: 011 Pixels @ 045,017 */ 0x8B, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,017 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 013 Pixels @ 058,017 */ 0x8D, 0xFF, 0xFF, 0xFF, 
  /* ABS: 003 Pixels @ 071,017 */ 0x03, 0xFF, 0x84, 0x10, 0xFF, 0x21, 0x24, 0xFF, 0x31, 0xA6, 
  /* RLE: 007 Pixels @ 074,017 */ 0x87, 0xFF, 0x39, 0xE7, 
  /* ABS: 011 Pixels @ 081,017 */ 0x0B, 0xFF, 0x31, 0xA6, 0xFF, 0x39, 0xE7, 0xFF, 0xD6, 0x9A, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x7D, 0xFF, 0x8C, 0x51, 0xFF, 0xD6, 0xBA, 0xFF, 0xFF, 0xFF, 0xFF, 0x42, 0x08, 0xFF, 0xBD, 0xD7, 
  /* RLE: 006 Pixels @ 092,017 */ 0x86, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 098,017 */ 0x02, 0xFF, 0xAD, 0x75, 0xFF, 0x63, 0x2C, 
  /* RLE: 011 Pixels @ 100,017 */ 0x8B, 0xFF, 0xFF, 0xFF, 
  /* ABS: 003 Pixels @ 111,017 */ 0x03, 0xFE, 0x8E, 0x9E, 0xE7, 0x04, 0xDB, 0xFA, 0x04, 0xDB, 
  /* RLE: 012 Pixels @ 002,018 */ 0x8C, 0xFF, 0x04, 0xDB, 
  /* ABS: 004 Pixels @ 014,018 */ 0x04, 0xFF, 0x04, 0xBB, 0xFF, 0x35, 0x5C, 0xFF, 0xEF, 0x9F, 0xFF, 0xCF, 0x3E, 
  /* RLE: 004 Pixels @ 018,018 */ 0x84, 0xFF, 0x66, 0x1D, 
  /* ABS: 003 Pixels @ 022,018 */ 0x03, 0xFF, 0xF7, 0xBF, 0xFF, 0xC7, 0x5F, 0xFF, 0x55, 0xFD, 
  /* RLE: 003 Pixels @ 025,018 */ 0x83, 0xFF, 0x66, 0x1D, 
  /* ABS: 010 Pixels @ 028,018 */ 0x0A, 0xFF, 0x1D, 0x3C, 0xFF, 0x04, 0xDB, 0xFF, 0x04, 0xDB, 0xFF, 0x0C, 0xFB, 0xFF, 0x1D, 0x1C, 0xFF, 0x04, 0xDB, 0xFF, 0x65, 0xFD, 0xFF, 0xFF, 0xDF, 0xFF, 0x3D, 0x7C, 0xFF, 0x04, 0xBB, 
  /* RLE: 004 Pixels @ 038,018 */ 0x84, 0xFF, 0x04, 0xDB, 
  /* ABS: 004 Pixels @ 042,018 */ 0x04, 0xFF, 0x0C, 0xDB, 0xFF, 0xB6, 0xDE, 0xFF, 0xB6, 0xDE, 0xFF, 0x0C, 0xDB, 
  /* RLE: 010 Pixels @ 046,018 */ 0x8A, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,018 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 012 Pixels @ 058,018 */ 0x8C, 0xFF, 0xFF, 0xFF, 
  /* ABS: 005 Pixels @ 070,018 */ 0x05, 0xFF, 0x8C, 0x51, 0xFF, 0x4A, 0x69, 0xFF, 0x4A, 0x49, 0xFF, 0x5A, 0xEB, 0xFF, 0xD6, 0x9A, 
  /* RLE: 006 Pixels @ 075,018 */ 0x86, 0xFF, 0xD6, 0xBA, 
  /* ABS: 003 Pixels @ 081,018 */ 0x03, 0xFF, 0xB5, 0x96, 0xFF, 0x42, 0x28, 0xFF, 0xD6, 0x9A, 
  /* RLE: 003 Pixels @ 084,018 */ 0x83, 0xFF, 0xFF, 0xFF, 
  /* ABS: 005 Pixels @ 087,018 */ 0x05, 0xFF, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0x1C, 0xFF, 0x42, 0x28, 0xFF, 0xCE, 0x79, 
  /* RLE: 006 Pixels @ 092,018 */ 0x86, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 098,018 */ 0x02, 0xFF, 0xAD, 0x75, 0xFF, 0x63, 0x2C, 
  /* RLE: 011 Pixels @ 100,018 */ 0x8B, 0xFF, 0xFF, 0xFF, 
  /* ABS: 003 Pixels @ 111,018 */ 0x03, 0xF6, 0x86, 0x7E, 0xC1, 0x04, 0xDB, 0xF1, 0x04, 0xDB, 
  /* RLE: 012 Pixels @ 002,019 */ 0x8C, 0xFF, 0x04, 0xDB, 
  /* ABS: 005 Pixels @ 014,019 */ 0x05, 0xFF, 0x0C, 0xDB, 0xFF, 0xB6, 0xFE, 0xFF, 0xFF, 0xDF, 0xFF, 0x2D, 0x5C, 0xFF, 0x04, 0x9B, 
  /* RLE: 003 Pixels @ 019,019 */ 0x83, 0xFF, 0x04, 0xBB, 
  /* ABS: 003 Pixels @ 022,019 */ 0x03, 0xFF, 0xE7, 0x9F, 0xFF, 0xA6, 0xBE, 0xFF, 0x04, 0x5B, 
  /* RLE: 003 Pixels @ 025,019 */ 0x83, 0xFF, 0x04, 0xBB, 
  /* RLE: 006 Pixels @ 028,019 */ 0x86, 0xFF, 0x04, 0xDB, 
  /* ABS: 004 Pixels @ 034,019 */ 0x04, 0xFF, 0x9E, 0x7D, 0xFF, 0xFF, 0xFF, 0xFF, 0xBE, 0xFE, 0xFF, 0x14, 0xFB, 
  /* RLE: 004 Pixels @ 038,019 */ 0x84, 0xFF, 0x04, 0xDB, 
  /* ABS: 004 Pixels @ 042,019 */ 0x04, 0xFF, 0x0C, 0xDB, 0xFF, 0xB6, 0xDE, 0xFF, 0xB6, 0xDE, 0xFF, 0x0C, 0xDB, 
  /* RLE: 010 Pixels @ 046,019 */ 0x8A, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,019 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 010 Pixels @ 058,019 */ 0x8A, 0xFF, 0xFF, 0xFF, 
  /* ABS: 006 Pixels @ 068,019 */ 0x06, 0xFF, 0xEF, 0x5D, 0xFF, 0x73, 0xAE, 0xFF, 0x39, 0xE7, 0xFF, 0xD6, 0x9A, 0xFF, 0x84, 0x30, 0xFF, 0x63, 0x2C, 
  /* RLE: 007 Pixels @ 074,019 */ 0x87, 0xFF, 0xFF, 0xFF, 
  /* ABS: 003 Pixels @ 081,019 */ 0x03, 0xFF, 0xDE, 0xDB, 0xFF, 0x4A, 0x49, 0xFF, 0xD6, 0x9A, 
  /* RLE: 005 Pixels @ 084,019 */ 0x85, 0xFF, 0xFF, 0xFF, 
  /* ABS: 004 Pixels @ 089,019 */ 0x04, 0xFF, 0xCE, 0x59, 0xFF, 0x29, 0x65, 0xFF, 0x6B, 0x4D, 0xFF, 0xEF, 0x7D, 
  /* RLE: 005 Pixels @ 093,019 */ 0x85, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 098,019 */ 0x02, 0xFF, 0xAD, 0x75, 0xFF, 0x63, 0x2C, 
  /* RLE: 011 Pixels @ 100,019 */ 0x8B, 0xFF, 0xFF, 0xFF, 
  /* ABS: 003 Pixels @ 111,019 */ 0x03, 0xE7, 0x6E, 0x3D, 0x82, 0x04, 0xDB, 0xE3, 0x04, 0xDB, 
  /* RLE: 011 Pixels @ 002,020 */ 0x8B, 0xFF, 0x04, 0xDB, 
  /* ABS: 005 Pixels @ 013,020 */ 0x05, 0xFF, 0x04, 0xBB, 0xFF, 0x96, 0x7D, 0xFF, 0xFF, 0xFF, 0xFF, 0x7E, 0x1D, 0xFF, 0x04, 0xBB, 
  /* RLE: 003 Pixels @ 018,020 */ 0x83, 0xFF, 0x04, 0xDB, 
  /* ABS: 004 Pixels @ 021,020 */ 0x04, 0xFF, 0x04, 0xFC, 0xFF, 0xEF, 0x9F, 0xFF, 0xA6, 0xDE, 0xFF, 0x04, 0x9B, 
  /* RLE: 009 Pixels @ 025,020 */ 0x89, 0xFF, 0x04, 0xDB, 
  /* ABS: 005 Pixels @ 034,020 */ 0x05, 0xFF, 0xD7, 0x5E, 0xFF, 0xC7, 0x3E, 0xFF, 0xCF, 0x5F, 0xFF, 0xAE, 0xBE, 0xFF, 0x0C, 0xDB, 
  /* RLE: 003 Pixels @ 039,020 */ 0x83, 0xFF, 0x04, 0xDB, 
  /* ABS: 004 Pixels @ 042,020 */ 0x04, 0xFF, 0x0C, 0xDB, 0xFF, 0xB6, 0xDE, 0xFF, 0xB6, 0xDE, 0xFF, 0x0C, 0xDB, 
  /* RLE: 010 Pixels @ 046,020 */ 0x8A, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,020 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 009 Pixels @ 058,020 */ 0x89, 0xFF, 0xFF, 0xFF, 
  /* ABS: 007 Pixels @ 067,020 */ 0x07, 0xFF, 0xDE, 0xFB, 0xFF, 0x4A, 0x49, 0xFF, 0x42, 0x28, 0xFF, 0xC6, 0x38, 0xFF, 0xFF, 0xFF, 0xFF, 0x7B, 0xEF, 0xFF, 0x63, 0x0C, 
  /* RLE: 007 Pixels @ 074,020 */ 0x87, 0xFF, 0xFF, 0xFF, 
  /* ABS: 003 Pixels @ 081,020 */ 0x03, 0xFF, 0xD6, 0xBA, 0xFF, 0x4A, 0x49, 0xFF, 0xD6, 0x9A, 
  /* RLE: 005 Pixels @ 084,020 */ 0x85, 0xFF, 0xFF, 0xFF, 
  /* ABS: 005 Pixels @ 089,020 */ 0x05, 0xFF, 0x9C, 0xD3, 0xFF, 0x5A, 0xCB, 0xFF, 0x84, 0x10, 0xFF, 0x6B, 0x6D, 0xFF, 0xFF, 0xDF, 
  /* RLE: 004 Pixels @ 094,020 */ 0x84, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 098,020 */ 0x02, 0xFF, 0xAD, 0x75, 0xFF, 0x63, 0x2C, 
  /* RLE: 010 Pixels @ 100,020 */ 0x8A, 0xFF, 0xFF, 0xFF, 
  /* ABS: 004 Pixels @ 110,020 */ 0x04, 0xFF, 0xF7, 0xDF, 0xCE, 0x45, 0xBD, 0x29, 0x04, 0xDB, 0xCF, 0x04, 0xDB, 
  /* RLE: 011 Pixels @ 002,021 */ 0x8B, 0xFF, 0x04, 0xDB, 
  /* ABS: 003 Pixels @ 013,021 */ 0x03, 0xFF, 0x8E, 0x7D, 0xFF, 0xFF, 0xFF, 0xFF, 0x9E, 0x9E, 
  /* RLE: 005 Pixels @ 016,021 */ 0x85, 0xFF, 0x04, 0xDB, 
  /* ABS: 004 Pixels @ 021,021 */ 0x04, 0xFF, 0x04, 0xFC, 0xFF, 0xEF, 0x9F, 0xFF, 0xA6, 0xDE, 0xFF, 0x04, 0x9B, 
  /* RLE: 008 Pixels @ 025,021 */ 0x88, 0xFF, 0x04, 0xDB, 
  /* ABS: 006 Pixels @ 033,021 */ 0x06, 0xFF, 0x3D, 0x7C, 0xFF, 0xFF, 0xFF, 0xFF, 0x6D, 0xFD, 0xFF, 0x3D, 0x5C, 0xFF, 0xF7, 0xDF, 0xFF, 0x96, 0x7E, 
  /* RLE: 003 Pixels @ 039,021 */ 0x83, 0xFF, 0x04, 0xDB, 
  /* ABS: 004 Pixels @ 042,021 */ 0x04, 0xFF, 0x0C, 0xDB, 0xFF, 0xB6, 0xDE, 0xFF, 0xB6, 0xDE, 0xFF, 0x0C, 0xDB, 
  /* RLE: 010 Pixels @ 046,021 */ 0x8A, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,021 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 009 Pixels @ 058,021 */ 0x89, 0xFF, 0xFF, 0xFF, 
  /* ABS: 007 Pixels @ 067,021 */ 0x07, 0xFF, 0xDE, 0xDB, 0xFF, 0x8C, 0x71, 0xFF, 0xDE, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7B, 0xEF, 0xFF, 0x63, 0x0C, 
  /* RLE: 007 Pixels @ 074,021 */ 0x87, 0xFF, 0xFF, 0xFF, 
  /* ABS: 003 Pixels @ 081,021 */ 0x03, 0xFF, 0xD6, 0xBA, 0xFF, 0x4A, 0x49, 0xFF, 0xD6, 0x9A, 
  /* RLE: 005 Pixels @ 084,021 */ 0x85, 0xFF, 0xFF, 0xFF, 
  /* ABS: 005 Pixels @ 089,021 */ 0x05, 0xFF, 0x52, 0xAA, 0xFF, 0x9C, 0xD3, 0xFF, 0xFF, 0xDF, 0xFF, 0x52, 0xAA, 0xFF, 0x7B, 0xCF, 
  /* RLE: 004 Pixels @ 094,021 */ 0x84, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 098,021 */ 0x02, 0xFF, 0xAD, 0x75, 0xFF, 0x63, 0x2C, 
  /* RLE: 010 Pixels @ 100,021 */ 0x8A, 0xFF, 0xFF, 0xFF, 
  /* ABS: 004 Pixels @ 110,021 */ 0x04, 0xFF, 0xDF, 0x9F, 0xA9, 0x0D, 0x1C, 0x00, 0x04, 0xDB, 0x9F, 0x04, 0xDB, 
  /* RLE: 009 Pixels @ 002,022 */ 0x89, 0xFF, 0x04, 0xDB, 
  /* ABS: 005 Pixels @ 011,022 */ 0x05, 0xFF, 0x04, 0xBB, 0xFF, 0x6D, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0x9E, 0x9E, 0xFF, 0x04, 0xDB, 
  /* RLE: 005 Pixels @ 016,022 */ 0x85, 0xFF, 0x04, 0xBB, 
  /* ABS: 004 Pixels @ 021,022 */ 0x04, 0xFF, 0x04, 0xDB, 0xFF, 0xE7, 0x9F, 0xFF, 0xA6, 0xDE, 0xFF, 0x04, 0x7B, 
  /* RLE: 005 Pixels @ 025,022 */ 0x85, 0xFF, 0x04, 0xBB, 
  /* ABS: 019 Pixels @ 030,022 */ 0x13, 0xFF, 0x04, 0xDB, 0xFF, 0x04, 0xDB, 0xFF, 0x04, 0xBB, 0xFF, 0xAE, 0xDE, 0xFF, 0xE7, 0x9F, 0xFF, 0x1D, 0x1C, 0xFF, 0x04, 0xBB, 0xFF, 0x8E, 0x5D, 0xFF, 0xCF, 0x3E, 0xFF, 0x04, 0x9B, 0xFF, 0x04, 0xBB, 0xFF, 0x04, 0x9B, 0xFF, 0x04, 0xBB, 
        0xFF, 0xAE, 0xDE, 0xFF, 0xAE, 0xDE, 0xFF, 0x04, 0xBB, 0xFF, 0x04, 0x9B, 0xFF, 0x04, 0xBB, 0xFF, 0x04, 0xBB, 
  /* RLE: 007 Pixels @ 049,022 */ 0x87, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,022 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 014 Pixels @ 058,022 */ 0x8E, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 072,022 */ 0x02, 0xFF, 0x7B, 0xEF, 0xFF, 0x63, 0x2C, 
  /* RLE: 007 Pixels @ 074,022 */ 0x87, 0xFF, 0xFF, 0xFF, 
  /* ABS: 003 Pixels @ 081,022 */ 0x03, 0xFF, 0xDE, 0xDB, 0xFF, 0x4A, 0x49, 0xFF, 0xD6, 0x9A, 
  /* RLE: 004 Pixels @ 084,022 */ 0x84, 0xFF, 0xFF, 0xFF, 
  /* ABS: 007 Pixels @ 088,022 */ 0x07, 0xFF, 0xB5, 0xB6, 0xFF, 0x39, 0xE7, 0xFF, 0xE7, 0x3C, 0xFF, 0xFF, 0xFF, 0xFF, 0xCE, 0x79, 0xFF, 0x63, 0x0C, 0xFF, 0xF7, 0xBE, 
  /* RLE: 003 Pixels @ 095,022 */ 0x83, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 098,022 */ 0x02, 0xFF, 0xB5, 0xB6, 0xFF, 0x6B, 0x6D, 
  /* RLE: 010 Pixels @ 100,022 */ 0x8A, 0xFF, 0xFF, 0xFF, 
  /* ABS: 005 Pixels @ 110,022 */ 0x05, 0xFF, 0x8E, 0x9E, 0x73, 0x5D, 0xFD, 0x00, 0x04, 0xDB, 0x3F, 0x04, 0xDB, 0xFC, 0x04, 0xDB, 
  /* RLE: 009 Pixels @ 003,023 */ 0x89, 0xFF, 0x04, 0xDB, 
  /* ABS: 004 Pixels @ 012,023 */ 0x04, 0xFF, 0x2D, 0x5C, 0xFF, 0x76, 0x1D, 0xFF, 0x04, 0xDB, 0xFF, 0x15, 0x1C, 
  /* RLE: 006 Pixels @ 016,023 */ 0x86, 0xFF, 0x4D, 0xBC, 
  /* ABS: 003 Pixels @ 022,023 */ 0x03, 0xFF, 0xEF, 0xBF, 0xFF, 0xBF, 0x3E, 0xFF, 0x3D, 0x7C, 
  /* RLE: 004 Pixels @ 025,023 */ 0x84, 0xFF, 0x4D, 0xBC, 
  /* ABS: 021 Pixels @ 029,023 */ 0x15, 0xFF, 0x3D, 0x9C, 0xFF, 0x04, 0xFB, 0xFF, 0x04, 0xBB, 0xFF, 0x5D, 0xDD, 0xFF, 0xFF, 0xDF, 0xFF, 0x86, 0x3D, 0xFF, 0x04, 0xBB, 0xFF, 0x04, 0xDB, 0xFF, 0x04, 0xDB, 0xFF, 0x45, 0x7C, 0xFF, 0x66, 0x1D, 0xFF, 0x66, 0x1D, 0xFF, 0x5E, 0x1D, 
        0xFF, 0x66, 0x1D, 0xFF, 0xD7, 0x5E, 0xFF, 0xD7, 0x5E, 0xFF, 0x66, 0x1D, 0xFF, 0x5E, 0x1D, 0xFF, 0x66, 0x1D, 0xFF, 0x66, 0x3D, 0xFF, 0x15, 0x1C, 
  /* RLE: 006 Pixels @ 050,023 */ 0x86, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,023 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 014 Pixels @ 058,023 */ 0x8E, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 072,023 */ 0x02, 0xFF, 0x84, 0x10, 0xFF, 0x39, 0xE7, 
  /* RLE: 007 Pixels @ 074,023 */ 0x87, 0xFF, 0x8C, 0x71, 
  /* ABS: 003 Pixels @ 081,023 */ 0x03, 0xFF, 0x7B, 0xCF, 0xFF, 0x42, 0x28, 0xFF, 0xD6, 0x9A, 
  /* RLE: 003 Pixels @ 084,023 */ 0x83, 0xFF, 0xFF, 0xFF, 
  /* ABS: 003 Pixels @ 087,023 */ 0x03, 0xFF, 0xE7, 0x3C, 0xFF, 0x4A, 0x69, 0xFF, 0x8C, 0x71, 
  /* RLE: 003 Pixels @ 090,023 */ 0x83, 0xFF, 0xFF, 0xFF, 
  /* ABS: 012 Pixels @ 093,023 */ 0x0C, 0xFF, 0xEF, 0x5D, 0xFF, 0xB5, 0x96, 0xFF, 0xAD, 0x75, 0xFF, 0xAD, 0x75, 0xFF, 0xB5, 0x96, 0xFF, 0x7B, 0xEF, 0xFF, 0x4A, 0x69, 0xFF, 0xAD, 0x75, 0xFF, 0xB5, 0x96, 0xFF, 0xAD, 0x75, 0xFF, 0xAD, 0x55, 0xFF, 0xE7, 0x1C, 
  /* RLE: 005 Pixels @ 105,023 */ 0x85, 0xFF, 0xFF, 0xFF, 
  /* ABS: 005 Pixels @ 110,023 */ 0x05, 0xE3, 0x25, 0x3C, 0x21, 0x6E, 0x1D, 0x00, 0x04, 0xDB, 0x03, 0x04, 0xDB, 0xB8, 0x04, 0xDB, 
  /* RLE: 010 Pixels @ 003,024 */ 0x8A, 0xFF, 0x04, 0xDB, 
  /* ABS: 003 Pixels @ 013,024 */ 0x03, 0xFF, 0x04, 0xBB, 0xFF, 0x04, 0xBB, 0xFF, 0x55, 0xBD, 
  /* RLE: 013 Pixels @ 016,024 */ 0x8D, 0xFF, 0xFF, 0xFF, 
  /* ABS: 011 Pixels @ 029,024 */ 0x0B, 0xFF, 0xDF, 0x5F, 0xFF, 0x04, 0xDB, 0xFF, 0x25, 0x3C, 0xFF, 0xDF, 0x7F, 0xFF, 0xC7, 0x1E, 0xFF, 0x0C, 0xFB, 0xFF, 0x04, 0xDB, 0xFF, 0x04, 0xDB, 0xFF, 0x04, 0xBB, 0xFF, 0x2D, 0x5C, 0xFF, 0xFF, 0xFF, 
  /* RLE: 003 Pixels @ 040,024 */ 0x83, 0xFF, 0xFF, 0xDF, 
  /* ABS: 002 Pixels @ 043,024 */ 0x02, 0xFF, 0xEF, 0xBF, 0xFF, 0xEF, 0xBF, 
  /* RLE: 003 Pixels @ 045,024 */ 0x83, 0xFF, 0xFF, 0xDF, 
  /* ABS: 003 Pixels @ 048,024 */ 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0x2D, 0x7C, 0xFF, 0x04, 0xBB, 
  /* RLE: 005 Pixels @ 051,024 */ 0x85, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,024 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 014 Pixels @ 058,024 */ 0x8E, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 072,024 */ 0x02, 0xFF, 0x7B, 0xEF, 0xFF, 0x39, 0xC7, 
  /* RLE: 007 Pixels @ 074,024 */ 0x87, 0xFF, 0x8C, 0x71, 
  /* ABS: 003 Pixels @ 081,024 */ 0x03, 0xFF, 0x73, 0xAE, 0xFF, 0x42, 0x08, 0xFF, 0xD6, 0x9A, 
  /* RLE: 003 Pixels @ 084,024 */ 0x83, 0xFF, 0xFF, 0xFF, 
  /* ABS: 003 Pixels @ 087,024 */ 0x03, 0xFF, 0x7B, 0xEF, 0xFF, 0x5A, 0xCB, 0xFF, 0xF7, 0xBE, 
  /* RLE: 003 Pixels @ 090,024 */ 0x83, 0xFF, 0xFF, 0xFF, 
  /* ABS: 007 Pixels @ 093,024 */ 0x07, 0xFF, 0xFF, 0xDF, 0xFF, 0x52, 0x8A, 0xFF, 0x4A, 0x49, 0xFF, 0x4A, 0x69, 0xFF, 0x4A, 0x69, 0xFF, 0x52, 0x8A, 0xFF, 0x5A, 0xCB, 
  /* RLE: 003 Pixels @ 100,024 */ 0x83, 0xFF, 0x4A, 0x69, 
  /* ABS: 002 Pixels @ 103,024 */ 0x02, 0xFF, 0x39, 0xE7, 0xFF, 0xBD, 0xD7, 
  /* RLE: 004 Pixels @ 105,024 */ 0x84, 0xFF, 0xFF, 0xFF, 
  /* ABS: 007 Pixels @ 109,024 */ 0x07, 0xFF, 0x9E, 0xBE, 0x91, 0x1D, 0x1C, 0x00, 0xD7, 0x7F, 0x00, 0x04, 0xDB, 0x00, 0x04, 0xDB, 0x37, 0x04, 0xDB, 0xF7, 0x04, 0xDB, 
  /* RLE: 011 Pixels @ 004,025 */ 0x8B, 0xFF, 0x04, 0xDB, 
  /* ABS: 001 Pixels @ 015,025 */ 0x01, 0xFF, 0x0C, 0xFC, 
  /* RLE: 013 Pixels @ 016,025 */ 0x8D, 0xFF, 0x25, 0x5C, 
  /* ABS: 005 Pixels @ 029,025 */ 0x05, 0xFF, 0x1D, 0x3C, 0xFF, 0x04, 0xDB, 0xFF, 0x04, 0xFC, 0xFF, 0x45, 0x7C, 0xFF, 0x1D, 0x1C, 
  /* RLE: 004 Pixels @ 034,025 */ 0x84, 0xFF, 0x04, 0xDB, 
  /* ABS: 001 Pixels @ 038,025 */ 0x01, 0xFF, 0x04, 0xFB, 
  /* RLE: 010 Pixels @ 039,025 */ 0x8A, 0xFF, 0x1D, 0x1C, 
  /* ABS: 001 Pixels @ 049,025 */ 0x01, 0xFF, 0x04, 0xFB, 
  /* RLE: 006 Pixels @ 050,025 */ 0x86, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,025 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 014 Pixels @ 058,025 */ 0x8E, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 072,025 */ 0x02, 0xFF, 0xB5, 0x96, 0xFF, 0x9C, 0xF3, 
  /* RLE: 007 Pixels @ 074,025 */ 0x87, 0xFF, 0xFF, 0xFF, 
  /* ABS: 003 Pixels @ 081,025 */ 0x03, 0xFF, 0xEF, 0x5D, 0xFF, 0x8C, 0x71, 0xFF, 0xE7, 0x1C, 
  /* RLE: 003 Pixels @ 084,025 */ 0x83, 0xFF, 0xFF, 0xFF, 
  /* ABS: 002 Pixels @ 087,025 */ 0x02, 0xFF, 0xE7, 0x1C, 0xFF, 0xEF, 0x7D, 
  /* RLE: 005 Pixels @ 089,025 */ 0x85, 0xFF, 0xFF, 0xFF, 
  /* RLE: 010 Pixels @ 094,025 */ 0x8A, 0xFF, 0xF7, 0x9E, 
  /* ABS: 001 Pixels @ 104,025 */ 0x01, 0xFF, 0xFF, 0xDF, 
  /* RLE: 003 Pixels @ 105,025 */ 0x83, 0xFF, 0xFF, 0xFF, 
  /* ABS: 004 Pixels @ 108,025 */ 0x04, 0xFF, 0xDF, 0x9F, 0xDF, 0x14, 0xFC, 0x16, 0x45, 0xBC, 0x00, 0xFF, 0xFF, 
  /* RLE: 003 Pixels @ 000,026 */ 0x83, 0x00, 0x04, 0xDB, 
  /* ABS: 001 Pixels @ 003,026 */ 0x01, 0x77, 0x04, 0xDB, 
  /* RLE: 052 Pixels @ 004,026 */ 0xB4, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,026 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 049 Pixels @ 058,026 */ 0xB1, 0xFF, 0xFF, 0xFF, 
  /* ABS: 005 Pixels @ 107,026 */ 0x05, 0xFF, 0xF7, 0xDF, 0xFA, 0x4D, 0xDD, 0x4F, 0x45, 0xBC, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
  /* RLE: 003 Pixels @ 000,027 */ 0x83, 0x00, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 003,027 */ 0x02, 0x06, 0x04, 0xDB, 0xA2, 0x04, 0xDB, 
  /* RLE: 051 Pixels @ 005,027 */ 0xB3, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,027 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 049 Pixels @ 058,027 */ 0xB1, 0xFF, 0xFF, 0xFF, 
  /* ABS: 005 Pixels @ 107,027 */ 0x05, 0xFF, 0x66, 0x3D, 0x7A, 0x04, 0x9B, 0x00, 0xCF, 0x5F, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
  /* RLE: 004 Pixels @ 000,028 */ 0x84, 0x00, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 004,028 */ 0x02, 0x0D, 0x04, 0xDB, 0xA7, 0x04, 0xDB, 
  /* RLE: 050 Pixels @ 006,028 */ 0xB2, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,028 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 047 Pixels @ 058,028 */ 0xAF, 0xFF, 0xFF, 0xFF, 
  /* ABS: 004 Pixels @ 105,028 */ 0x04, 0xFF, 0xF7, 0xDF, 0xFF, 0x66, 0x1D, 0x83, 0x04, 0x9B, 0x00, 0x96, 0xBE, 
  /* RLE: 003 Pixels @ 109,028 */ 0x83, 0x00, 0xFF, 0xFF, 
  /* RLE: 005 Pixels @ 000,029 */ 0x85, 0x00, 0x04, 0xDB, 
  /* ABS: 003 Pixels @ 005,029 */ 0x03, 0x04, 0x04, 0xDB, 0x8C, 0x04, 0xDB, 0xF7, 0x04, 0xDB, 
  /* RLE: 048 Pixels @ 008,029 */ 0xB0, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,029 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 046 Pixels @ 058,029 */ 0xAE, 0xFF, 0xFF, 0xFF, 
  /* ABS: 004 Pixels @ 104,029 */ 0x04, 0xFF, 0xCF, 0x7F, 0xEC, 0x2D, 0x7C, 0x6A, 0x04, 0x9B, 0x00, 0x9E, 0xDE, 
  /* RLE: 004 Pixels @ 108,029 */ 0x84, 0x00, 0xFF, 0xFF, 
  /* RLE: 006 Pixels @ 000,030 */ 0x86, 0x00, 0x04, 0xDB, 
  /* ABS: 003 Pixels @ 006,030 */ 0x03, 0x02, 0x04, 0xDB, 0x53, 0x04, 0xDB, 0xD8, 0x04, 0xDB, 
  /* RLE: 047 Pixels @ 009,030 */ 0xAF, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,030 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 044 Pixels @ 058,030 */ 0xAC, 0xFF, 0xFF, 0xFF, 
  /* ABS: 005 Pixels @ 102,030 */ 0x05, 0xFF, 0xE7, 0xBF, 0xFF, 0x76, 0x5D, 0xBF, 0x04, 0xFB, 0x3A, 0x76, 0x5D, 0x00, 0xBF, 0x1E, 
  /* RLE: 005 Pixels @ 107,030 */ 0x85, 0x00, 0xFF, 0xFF, 
  /* RLE: 008 Pixels @ 000,031 */ 0x88, 0x00, 0x04, 0xDB, 
  /* ABS: 004 Pixels @ 008,031 */ 0x04, 0x11, 0x04, 0xDB, 0x77, 0x04, 0xDB, 0xDD, 0x04, 0xDB, 0xFB, 0x04, 0xDB, 
  /* RLE: 044 Pixels @ 012,031 */ 0xAC, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 056,031 */ 0x02, 0xFF, 0x04, 0xBB, 0xFF, 0xD7, 0x7F, 
  /* RLE: 041 Pixels @ 058,031 */ 0xA9, 0xFF, 0xFF, 0xFF, 
  /* ABS: 006 Pixels @ 099,031 */ 0x06, 0xFF, 0xF7, 0xDF, 0xFF, 0xBF, 0x3E, 0xF9, 0x5D, 0xFD, 0xD0, 0x15, 0x1C, 0x5E, 0x0C, 0xFC, 0x06, 0x8E, 0x9E, 
  /* RLE: 007 Pixels @ 105,031 */ 0x87, 0x00, 0xFF, 0xFF, 
  /* RLE: 010 Pixels @ 000,032 */ 0x8A, 0x00, 0x04, 0xDB, 
  /* ABS: 008 Pixels @ 010,032 */ 0x08, 0x0A, 0x04, 0xDB, 0x55, 0x04, 0xDB, 0x97, 0x04, 0xDB, 0xBD, 0x04, 0xDB, 0xD8, 0x04, 0xDB, 0xED, 0x04, 0xDB, 0xF8, 0x04, 0xDB, 0xFE, 0x04, 0xDB, 
  /* RLE: 039 Pixels @ 018,032 */ 0xA7, 0xFF, 0x04, 0xDB, 
  /* ABS: 002 Pixels @ 057,032 */ 0x02, 0xFF, 0x7E, 0x5D, 0xFF, 0x9E, 0xDE, 
  /* RLE: 036 Pixels @ 059,032 */ 0xA4, 0xFF, 0x96, 0xBE, 
  /* ABS: 008 Pixels @ 095,032 */ 0x08, 0xFD, 0x96, 0xBE, 0xF6, 0x8E, 0x9E, 0xE9, 0x76, 0x5D, 0xD5, 0x55, 0xFD, 0xB7, 0x1D, 0x3C, 0x8B, 0x3D, 0x9C, 0x45, 0x66, 0x1D, 0x03, 0x86, 0x7E, 
  /* RLE: 009 Pixels @ 103,032 */ 0x89, 0x00, 0xFF, 0xFF, 
};  //3696 pixels compress to 3717 bytes


GUI_CONST_STORAGE GUI_BITMAP bmcooker_left = {
  112,  //xSize
  33,  //ySize
  336,  //ByteBytesPerLine
  24,  //BitsPerPixel
  (unsigned char *)_accooker_left,  //Pointer to picture data
  NULL,  //Pointer to palette
  GUI_DRAW_AlphaRLEM16M
};  


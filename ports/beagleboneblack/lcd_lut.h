//------------------------------------------------------------------------
// lcd_lut.h: Lookup Table Values
//

uchar lcd_lut[256][3] = {
//    RED,  GREEN, BLUE		// Entry
	{ 0x0,  0x0, 0x0, },	// 00  
	{ 0x0,  0x0, 0xA, },	// 01 
	{ 0x0,  0xA, 0x0, },	// 02 
	{ 0x0,  0xA, 0xA, },	// 03 
	{ 0xA,  0x0, 0x0, },	// 04 
	{ 0xA,  0x0, 0xA, },	// 05 
	{ 0xA,  0xA, 0x0, },	// 06 
	{ 0xA,  0xA, 0xA, },	// 07 
	{ 0x5,  0x5, 0x5, },	// 08 
	{ 0x5,  0x5, 0xF, },	// 09 
	{ 0x5,  0xF, 0x5, },	// 0A 
	{ 0x5,  0xF, 0xF, },	// 0B 
	{ 0xF,  0x5, 0x5, },	// 0C 
	{ 0xF,  0x5, 0xF, },	// 0D 
	{ 0xF,  0xF, 0x5, },	// 0E 
	{ 0xF,  0xF, 0xF, },	// 0F 
	{ 0x0,  0x0, 0x0, },	// 10 
	{ 0x1,  0x1, 0x1, },	// 11 
	{ 0x2,  0x2, 0x2, },	// 12 
	{ 0x2,  0x2, 0x2, },	// 13 
	{ 0x3,  0x3, 0x3, },	// 14 
	{ 0x4,  0x4, 0x4, },	// 15 
	{ 0x5,  0x5, 0x5, },	// 16 
	{ 0x6,  0x6, 0x6, },	// 17 
	{ 0x7,  0x7, 0x7, },	// 18 
	{ 0x8,  0x8, 0x8, },	// 19 
	{ 0x9,  0x9, 0x9, },	// 1A 
	{ 0xA,  0xA, 0xA, },	// 1B 
	{ 0xB,  0xB, 0xB, },	// 1C 
	{ 0xC,  0xC, 0xC, },	// 1D 
	{ 0xE,  0xE, 0xE, },	// 1E 
	{ 0xF,  0xF, 0xF, },	// 1F 
	{ 0x0,  0x0, 0xF, },	// 20 
	{ 0x4,  0x0, 0xF, },	// 21 
	{ 0x7,  0x0, 0xF, },	// 22 
	{ 0xB,  0x0, 0xF, },	// 23 
	{ 0xF,  0x0, 0xF, },	// 24 
	{ 0xF,  0x0, 0xB, },	// 25 
	{ 0xF,  0x0, 0x7, },	// 26 
	{ 0xF,  0x0, 0x4, },	// 27 
	{ 0xF,  0x0, 0x0, },	// 28 
	{ 0xF,  0x4, 0x0, },	// 29 
	{ 0xF,  0x7, 0x0, },	// 2A 
	{ 0xF,  0xB, 0x0, },	// 2B 
	{ 0xF,  0xF, 0x0, },	// 2C 
	{ 0xB,  0xF, 0x0, },	// 2D 
	{ 0x7,  0xF, 0x0, },	// 2E 
	{ 0x4,  0xF, 0x0, },	// 2F 
	{ 0x0,  0xF, 0x0, },	// 30 
	{ 0x0,  0xF, 0x4, },	// 31 
	{ 0x0,  0xF, 0x7, },	// 32 
	{ 0x0,  0xF, 0xB, },	// 33 
	{ 0x0,  0xF, 0xF, },	// 34 
	{ 0x0,  0xB, 0xF, },	// 35 
	{ 0x0,  0x7, 0xF, },	// 36 
	{ 0x0,  0x4, 0xF, },	// 37 
	{ 0x7,  0x7, 0xF, },	// 38 
	{ 0x9,  0x7, 0xF, },	// 39 
	{ 0xB,  0x7, 0xF, },	// 3A 
	{ 0xD,  0x7, 0xF, },	// 3B 
	{ 0xF,  0x7, 0xF, },	// 3C 
	{ 0xF,  0x7, 0xD, },	// 3D 
	{ 0xF,  0x7, 0xB, },	// 3E 
	{ 0xF,  0x7, 0x9, },	// 3F 
	{ 0xF,  0x7, 0x7, },	// 40 
	{ 0xF,  0x9, 0x7, },	// 41 
	{ 0xF,  0xB, 0x7, },	// 42 
	{ 0xF,  0xD, 0x7, },	// 43 
	{ 0xF,  0xF, 0x7, },	// 44 
	{ 0xD,  0xF, 0x7, },	// 45 
	{ 0xB,  0xF, 0x7, },	// 46 
	{ 0x9,  0xF, 0x7, },	// 47 
	{ 0x7,  0xF, 0x7, },	// 48 
	{ 0x7,  0xF, 0x9, },	// 49 
	{ 0x7,  0xF, 0xB, },	// 4A 
	{ 0x7,  0xF, 0xD, },	// 4B 
	{ 0x7,  0xF, 0xF, },	// 4C 
	{ 0x7,  0xD, 0xF, },	// 4D 
	{ 0x7,  0xB, 0xF, },	// 4E 
	{ 0x7,  0x9, 0xF, },	// 4F 
	{ 0xB,  0xB, 0xF, },	// 50 
	{ 0xC,  0xB, 0xF, },	// 51 
	{ 0xD,  0xB, 0xF, },	// 52 
	{ 0xE,  0xB, 0xF, },	// 53 
	{ 0xF,  0xB, 0xF, },	// 54 
	{ 0xF,  0xB, 0xE, },	// 55 
	{ 0xF,  0xB, 0xD, },	// 56 
	{ 0xF,  0xB, 0xC, },	// 57 
	{ 0xF,  0xB, 0xB, },	// 58 
	{ 0xF,  0xC, 0xB, },	// 59 
	{ 0xF,  0xD, 0xB, },	// 5A 
	{ 0xF,  0xE, 0xB, },	// 5B 
	{ 0xF,  0xF, 0xB, },	// 5C 
	{ 0xE,  0xF, 0xB, },	// 5D 
	{ 0xD,  0xF, 0xB, },	// 5E 
	{ 0xC,  0xF, 0xB, },	// 5F 
	{ 0xB,  0xF, 0xB, },	// 60 
	{ 0xB,  0xF, 0xC, },	// 61 
	{ 0xB,  0xF, 0xD, },	// 62 
	{ 0xB,  0xF, 0xE, },	// 63 
	{ 0xB,  0xF, 0xF, },	// 64 
	{ 0xB,  0xE, 0xF, },	// 65 
	{ 0xB,  0xD, 0xF, },	// 66 
	{ 0xB,  0xC, 0xF, },	// 67 
	{ 0x0,  0x0, 0x7, },	// 68 
	{ 0x1,  0x0, 0x7, },	// 69 
	{ 0x3,  0x0, 0x7, },	// 6A 
	{ 0x5,  0x0, 0x7, },	// 6B 
	{ 0x7,  0x0, 0x7, },	// 6C 
	{ 0x7,  0x0, 0x5, },	// 6D 
	{ 0x7,  0x0, 0x3, },	// 6E 
	{ 0x7,  0x0, 0x1, },	// 6F 
	{ 0x7,  0x0, 0x0, },	// 70 
	{ 0x7,  0x1, 0x0, },	// 71 
	{ 0x7,  0x3, 0x0, },	// 72 
	{ 0x7,  0x5, 0x0, },	// 73 
	{ 0x7,  0x7, 0x0, },	// 74 
	{ 0x5,  0x7, 0x0, },	// 75 
	{ 0x3,  0x7, 0x0, },	// 76 
	{ 0x1,  0x7, 0x0, },	// 77 
	{ 0x0,  0x7, 0x0, },	// 78 
	{ 0x0,  0x7, 0x1, },	// 79 
	{ 0x0,  0x7, 0x3, },	// 7A 
	{ 0x0,  0x7, 0x5, },	// 7B 
	{ 0x0,  0x7, 0x7, },	// 7C 
	{ 0x0,  0x5, 0x7, },	// 7D 
	{ 0x0,  0x3, 0x7, },	// 7E 
	{ 0x0,  0x1, 0x7, },	// 7F 
	{ 0x3,  0x3, 0x7, },	// 80 
	{ 0x4,  0x3, 0x7, },	// 81 
	{ 0x5,  0x3, 0x7, },	// 82 
	{ 0x6,  0x3, 0x7, },	// 83 
	{ 0x7,  0x3, 0x7, },	// 84 
	{ 0x7,  0x3, 0x6, },	// 85 
	{ 0x7,  0x3, 0x5, },	// 86 
	{ 0x7,  0x3, 0x4, },	// 87 
	{ 0x7,  0x3, 0x3, },	// 88 
	{ 0x7,  0x4, 0x3, },	// 89 
	{ 0x7,  0x5, 0x3, },	// 8A 
	{ 0x7,  0x6, 0x3, },	// 8B 
	{ 0x7,  0x7, 0x3, },	// 8C 
	{ 0x6,  0x7, 0x3, },	// 8D 
	{ 0x5,  0x7, 0x3, },	// 8E 
	{ 0x4,  0x7, 0x3, },	// 8F 
	{ 0x3,  0x7, 0x3, },	// 90 
	{ 0x3,  0x7, 0x4, },	// 91 
	{ 0x3,  0x7, 0x5, },	// 92 
	{ 0x3,  0x7, 0x6, },	// 93 
	{ 0x3,  0x7, 0x7, },	// 94 
	{ 0x3,  0x6, 0x7, },	// 95 
	{ 0x3,  0x5, 0x7, },	// 96 
	{ 0x3,  0x4, 0x7, },	// 97 
	{ 0x5,  0x5, 0x7, },	// 98 
	{ 0x5,  0x5, 0x7, },	// 99 
	{ 0x6,  0x5, 0x7, },	// 9A 
	{ 0x6,  0x5, 0x7, },	// 9B 
	{ 0x7,  0x5, 0x7, },	// 9C 
	{ 0x7,  0x5, 0x6, },	// 9D 
	{ 0x7,  0x5, 0x6, },	// 9E 
	{ 0x7,  0x5, 0x5, },	// 9F 
	{ 0x7,  0x5, 0x5, },	// A0 
	{ 0x7,  0x5, 0x5, },	// A1 
	{ 0x7,  0x6, 0x5, },	// A2 
	{ 0x7,  0x6, 0x5, },	// A3 
	{ 0x7,  0x7, 0x5, },	// A4 
	{ 0x6,  0x7, 0x5, },	// A5 
	{ 0x6,  0x7, 0x5, },	// A6 
	{ 0x5,  0x7, 0x5, },	// A7 
	{ 0x5,  0x7, 0x5, },	// A8 
	{ 0x5,  0x7, 0x5, },	// A9 
	{ 0x5,  0x7, 0x6, },	// AA 
	{ 0x5,  0x7, 0x6, },	// AB 
	{ 0x5,  0x7, 0x7, },	// AC 
	{ 0x5,  0x6, 0x7, },	// AD 
	{ 0x5,  0x6, 0x7, },	// AE 
	{ 0x5,  0x5, 0x7, },	// AF 
	{ 0x0,  0x0, 0x4, },	// B0 
	{ 0x1,  0x0, 0x4, },	// B1 
	{ 0x2,  0x0, 0x4, },	// B2 
	{ 0x3,  0x0, 0x4, },	// B3 
	{ 0x4,  0x0, 0x4, },	// B4 
	{ 0x4,  0x0, 0x3, },	// B5 
	{ 0x4,  0x0, 0x2, },	// B6 
	{ 0x4,  0x0, 0x1, },	// B7 
	{ 0x4,  0x0, 0x0, },	// B8 
	{ 0x4,  0x1, 0x0, },	// B9 
	{ 0x4,  0x2, 0x0, },	// BA 
	{ 0x4,  0x3, 0x0, },	// BB 
	{ 0x4,  0x4, 0x0, },	// BC 
	{ 0x3,  0x4, 0x0, },	// BD 
	{ 0x2,  0x4, 0x0, },	// BE 
	{ 0x1,  0x4, 0x0, },	// BF 
	{ 0x0,  0x4, 0x0, },	// C0 
	{ 0x0,  0x4, 0x1, },	// C1 
	{ 0x0,  0x4, 0x2, },	// C2 
	{ 0x0,  0x4, 0x3, },	// C3 
	{ 0x0,  0x4, 0x4, },	// C4 
	{ 0x0,  0x3, 0x4, },	// C5 
	{ 0x0,  0x2, 0x4, },	// C6 
	{ 0x0,  0x1, 0x4, },	// C7 
	{ 0x2,  0x2, 0x4, },	// C8 
	{ 0x2,  0x2, 0x4, },	// C9 
	{ 0x3,  0x2, 0x4, },	// CA 
	{ 0x3,  0x2, 0x4, },	// CB 
	{ 0x4,  0x2, 0x4, },	// CC 
	{ 0x4,  0x2, 0x3, },	// CD 
	{ 0x4,  0x2, 0x3, },	// CE 
	{ 0x4,  0x2, 0x2, },	// CF 
	{ 0x4,  0x2, 0x2, },	// D0 
	{ 0x4,  0x2, 0x2, },	// D1 
	{ 0x4,  0x3, 0x2, },	// D2 
	{ 0x4,  0x3, 0x2, },	// D3 
	{ 0x4,  0x4, 0x2, },	// D4 
	{ 0x3,  0x4, 0x2, },	// D5 
	{ 0x3,  0x4, 0x2, },	// D6 
	{ 0x2,  0x4, 0x2, },	// D7 
	{ 0x2,  0x4, 0x2, },	// D8 
	{ 0x2,  0x4, 0x2, },	// D9 
	{ 0x2,  0x4, 0x3, },	// DA 
	{ 0x2,  0x4, 0x3, },	// DB 
	{ 0x2,  0x4, 0x4, },	// DC 
	{ 0x2,  0x3, 0x4, },	// DD 
	{ 0x2,  0x3, 0x4, },	// DE 
	{ 0x2,  0x2, 0x4, },	// DF 
	{ 0x2,  0x2, 0x4, },	// E0 
	{ 0x3,  0x2, 0x4, },	// E1 
	{ 0x3,  0x2, 0x4, },	// E2 
	{ 0x3,  0x2, 0x4, },	// E3 
	{ 0x4,  0x2, 0x4, },	// E4 
	{ 0x4,  0x2, 0x3, },	// E5 
	{ 0x4,  0x2, 0x3, },	// E6 
	{ 0x4,  0x2, 0x3, },	// E7 
	{ 0x4,  0x2, 0x2, },	// E8 
	{ 0x4,  0x3, 0x2, },	// E9 
	{ 0x4,  0x3, 0x2, },	// EA 
	{ 0x4,  0x3, 0x2, },	// EB 
	{ 0x4,  0x4, 0x2, },	// EC 
	{ 0x3,  0x4, 0x2, },	// ED 
	{ 0x3,  0x4, 0x2, },	// EE 
	{ 0x3,  0x4, 0x2, },	// EF 
	{ 0x2,  0x4, 0x2, },	// F0 
	{ 0x2,  0x4, 0x3, },	// F1 
	{ 0x2,  0x4, 0x3, },	// F2 
	{ 0x2,  0x4, 0x3, },	// F3 
	{ 0x2,  0x4, 0x4, },	// F4 
	{ 0x2,  0x3, 0x4, },	// F5 
	{ 0x2,  0x3, 0x4, },	// F6 
	{ 0x2,  0x3, 0x4, },	// F7 
	{ 0x0,  0x0, 0x0, },	// F8 
	{ 0x0,  0x0, 0x0, },	// F9 
	{ 0x0,  0x0, 0x0, },	// FA 
	{ 0x0,  0x0, 0x0, },	// FB 
	{ 0x0,  0x0, 0x0, },	// FC 
	{ 0x0,  0x0, 0x0, },	// FD 
	{ 0x0,  0x0, 0x0, },	// FE 
	{ 0x0,  0x0, 0x0, },	// FF 
};

// 16-bit pixels are RGB 565 - LSB of RED and BLUE are tied low at the 
// LCD Interface, while the LSB of GREEN is loaded as 0
//#define RED_SUBPIXEL(n)		(n & 0x1f) << 11
//#define GREEN_SUBPIXEL(n)	(n & 0x1f) << 6
//#define BLUE_SUBPIXEL(n)	(n & 0x1f) << 0

// define a simple VGA style 16-color pallette
//#define	LU_BLACK		RED_SUBPIXEL(0x00) | GREEN_SUBPIXEL(0x00) | BLUE_SUBPIXEL(0x00)
//#define	LU_BLUE			RED_SUBPIXEL(0x00) | GREEN_SUBPIXEL(0x00) | BLUE_SUBPIXEL(0x0f)
//#define	LU_GREEN		RED_SUBPIXEL(0x00) | GREEN_SUBPIXEL(0x0f) | BLUE_SUBPIXEL(0x00)
//#define	LU_CYAN			RED_SUBPIXEL(0x00) | GREEN_SUBPIXEL(0x0f) | BLUE_SUBPIXEL(0x0f)
//#define	LU_RED			RED_SUBPIXEL(0x0f) | GREEN_SUBPIXEL(0x00) | BLUE_SUBPIXEL(0x00)
//#define	LU_VIOLET		RED_SUBPIXEL(0x0f) | GREEN_SUBPIXEL(0x00) | BLUE_SUBPIXEL(0x0f)
//#define	LU_YELLOW		RED_SUBPIXEL(0x0f) | GREEN_SUBPIXEL(0x0f) | BLUE_SUBPIXEL(0x00)
//#define	LU_GREY			RED_SUBPIXEL(0x0f) | GREEN_SUBPIXEL(0x0f) | BLUE_SUBPIXEL(0x0f)
//#define	LU_WHITE		RED_SUBPIXEL(0x17) | GREEN_SUBPIXEL(0x17) | BLUE_SUBPIXEL(0x17)
//#define	LU_BRT_BLUE		RED_SUBPIXEL(0x00) | GREEN_SUBPIXEL(0x00) | BLUE_SUBPIXEL(0x1f)
//#define	LU_BRT_GREEN	RED_SUBPIXEL(0x00) | GREEN_SUBPIXEL(0x1f) | BLUE_SUBPIXEL(0x00)
//#define	LU_BRT_CYAN		RED_SUBPIXEL(0x00) | GREEN_SUBPIXEL(0x1f) | BLUE_SUBPIXEL(0x1f)
//#define	LU_BRT_RED		RED_SUBPIXEL(0x1f) | GREEN_SUBPIXEL(0x00) | BLUE_SUBPIXEL(0x00)
//#define	LU_BRT_VIOLET	RED_SUBPIXEL(0x1f) | GREEN_SUBPIXEL(0x00) | BLUE_SUBPIXEL(0x1f)
//#define	LU_BRT_YELLOW	RED_SUBPIXEL(0x00) | GREEN_SUBPIXEL(0x1f) | BLUE_SUBPIXEL(0x1f)
//#define	LU_BRT_WHITE	RED_SUBPIXEL(0x1f) | GREEN_SUBPIXEL(0x1f) | BLUE_SUBPIXEL(0x1f)


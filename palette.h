#define COLOR_NUM 128
typedef  struct {
	unsigned char r;
	unsigned char g;
	unsigned char b;
} Palette_t;
Palette_t Palette[COLOR_NUM] = {
		{ 0x00, 0x00, 0x00 }, 
		{ 0x22, 0x22, 0x22 }, 
		{ 0x44, 0x44, 0x44 }, 
		{ 0x66, 0x66, 0x66 }, 
		{ 0x89, 0x89, 0x89 }, 
		{ 0xAB, 0xAB, 0xAB }, 
		{ 0xCD, 0xCD, 0xCD }, 
		{ 0x00, 0x00, 0xFF }, 
		{ 0x00, 0x00, 0x00 }, 
		{ 0x24, 0x24, 0x00 }, 
		{ 0x48, 0x48, 0x00 }, 
		{ 0x6D, 0x6D, 0x00 }, 
		{ 0x91, 0x91, 0x00 }, 
		{ 0xB6, 0xB6, 0x00 }, 
		{ 0xDA, 0xDA, 0x00 }, 
		{ 0xFF, 0xFF, 0x00 }, 
		{ 0x40, 0x00, 0x00 }, 
		{ 0x5B, 0x24, 0x00 }, 
		{ 0x76, 0x48, 0x00 }, 
		{ 0x91, 0x6D, 0x00 }, 
		{ 0xAD, 0x91, 0x00 }, 
		{ 0xC8, 0xB6, 0x00 }, 
		{ 0xE3, 0xDA, 0x00 }, 
		{ 0xFF, 0xFF, 0xFF }, 
		{ 0xA4, 0x3B, 0x00 }, 
		{ 0xB6, 0x59, 0x00 }, 
		{ 0xC8, 0x76, 0x00 }, 
		{ 0xDA, 0x94, 0x00 }, 
		{ 0xEC, 0xB2, 0x00 }, 
		{ 0xFF, 0xD0, 0x00 }, 
		{ 0x80, 0x00, 0x00 }, 
		{ 0x92, 0x16, 0x0C }, 
		{ 0xA4, 0x2D, 0x18 }, 
		{ 0xB6, 0x44, 0x24 }, 
		{ 0xC8, 0x5B, 0x30 }, 
		{ 0xDA, 0x72, 0x3C }, 
		{ 0xEC, 0x89, 0x48 }, 
		{ 0xFF, 0xA0, 0x55 }, 
		{ 0x92, 0x10, 0x61 }, 
		{ 0xA4, 0x20, 0x6D }, 
		{ 0xB6, 0x30, 0x79 }, 
		{ 0xC8, 0x40, 0x85 }, 
		{ 0xEC, 0x60, 0x9D }, 
		{ 0xFF, 0x70, 0xAA }, 
		{ 0x40, 0x00, 0xAA }, 
		{ 0x76, 0x12, 0xC2 }, 
		{ 0x91, 0x1B, 0xCE }, 
		{ 0xAD, 0x24, 0xDA }, 
		{ 0xC8, 0x2D, 0xE6 }, 
		{ 0xFF, 0x40, 0xFF }, 
		{ 0x00, 0x00, 0xBF }, 
		{ 0x24, 0x09, 0xC7 }, 
		{ 0x48, 0x12, 0xCF }, 
		{ 0x91, 0x24, 0xDF }, 
		{ 0xB6, 0x2D, 0xE7 }, 
		{ 0xDA, 0x36, 0xEF }, 
		{ 0xFF, 0x40, 0xF7 }, 
		{ 0x00, 0x00, 0xBF }, 
		{ 0x1C, 0x10, 0xC7 }, 
		{ 0x39, 0x20, 0xCF }, 
		{ 0x55, 0x30, 0xD7 }, 
		{ 0x72, 0x40, 0xDF }, 
		{ 0x8E, 0x50, 0xE7 }, 
		{ 0xAB, 0x60, 0xEF }, 
		{ 0xC8, 0x70, 0xF7 }, 
		{ 0x00, 0x00, 0xBF }, 
		{ 0x14, 0x16, 0xC7 }, 
		{ 0x29, 0x2D, 0xCF }, 
		{ 0x3D, 0x44, 0xD7 }, 
		{ 0x52, 0x5B, 0xDF }, 
		{ 0x66, 0x72, 0xE7 }, 
		{ 0x7B, 0x89, 0xEF }, 
		{ 0x90, 0xA0, 0xF7 }, 
		{ 0x00, 0x20, 0x80 }, 
		{ 0x0C, 0x39, 0x92 }, 
		{ 0x19, 0x52, 0xA4 }, 
		{ 0x25, 0x6B, 0xB6 }, 
		{ 0x32, 0x84, 0xC8 }, 
		{ 0x3E, 0x9D, 0xDA }, 
		{ 0x4B, 0xB6, 0xEC }, 
		{ 0x58, 0xD0, 0xFF }, 
		{ 0x00, 0x40, 0x00 }, 
		{ 0x04, 0x5B, 0x24 }, 
		{ 0x09, 0x76, 0x48 }, 
		{ 0x0D, 0x91, 0x6D }, 
		{ 0x12, 0xAD, 0x91 }, 
		{ 0x16, 0xC8, 0xB6 }, 
		{ 0x1B, 0xE3, 0xDA }, 
		{ 0x20, 0xFF, 0xFF }, 
		{ 0x00, 0x40, 0x00 }, 
		{ 0x04, 0x5B, 0x18 }, 
		{ 0x09, 0x76, 0x30 }, 
		{ 0x0D, 0x91, 0x48 }, 
		{ 0x12, 0xAD, 0x61 }, 
		{ 0x16, 0xC8, 0x79 }, 
		{ 0x1B, 0xE3, 0x91 }, 
		{ 0x20, 0xFF, 0xAA }, 
		{ 0x00, 0x40, 0x00 }, 
		{ 0x0C, 0x5B, 0x0C }, 
		{ 0x19, 0x76, 0x18 }, 
		{ 0x25, 0x91, 0x24 }, 
		{ 0x32, 0xAD, 0x30 }, 
		{ 0x3E, 0xC8, 0x3C }, 
		{ 0x4B, 0xE3, 0x48 }, 
		{ 0x58, 0xFF, 0x55 }, 
		{ 0x00, 0x40, 0x00 }, 
		{ 0x14, 0x5B, 0x00 }, 
		{ 0x29, 0x76, 0x00 }, 
		{ 0x3D, 0x91, 0x00 }, 
		{ 0x52, 0xAD, 0x00 }, 
		{ 0x66, 0xC8, 0x00 }, 
		{ 0x7B, 0xE3, 0x00 }, 
		{ 0x90, 0xFF, 0x00 }, 
		{ 0x00, 0x20, 0x00 }, 
		{ 0x1C, 0x3F, 0x00 }, 
		{ 0x39, 0x5F, 0x00 }, 
		{ 0x55, 0x7F, 0x00 }, 
		{ 0x8E, 0xBF, 0x00 }, 
		{ 0xFF, 0x00, 0xFF }, 
		{ 0xAB, 0xDF, 0x00 },
		{ 0x92, 0x16, 0x0C },
		{ 0x76, 0x12, 0xC2 },
		{ 0xDA, 0x50, 0x19 },
		{ 0xE9, 0x51, 0x19 },
		{ 0xC0, 0xC0, 0xC0 },
		{ 0xFF, 0xC8, 0x19 },
		{ 0x00, 0x00, 0x00 },
		{ 0x00, 0x00, 0x00 }
	};
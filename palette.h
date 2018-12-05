typedef  struct {
	unsigned char r;
	unsigned char g;
	unsigned char b;
} Palette_t;
Palette_t Palette[] = {
		{ 0x00, 0x00, 0x00 }, // 00
		{ 0x22, 0x22, 0x22 }, // 02
		{ 0x44, 0x44, 0x44 }, // 04
		{ 0x66, 0x66, 0x66 }, // 06
		{ 0x89, 0x89, 0x89 }, // 08
		{ 0xAB, 0xAB, 0xAB }, // 0A
		{ 0xCD, 0xCD, 0xCD }, // 0C
		{ 0xF0, 0xF0, 0xF0 }, // 0E
		{ 0x00, 0x00, 0x00 }, // 10
		{ 0x24, 0x24, 0x00 }, // 12
		{ 0x48, 0x48, 0x00 }, // 14
		{ 0x6D, 0x6D, 0x00 }, // 16
		{ 0x91, 0x91, 0x00 }, // 18
		{ 0xB6, 0xB6, 0x00 }, // 1A
		{ 0xDA, 0xDA, 0x00 }, // 1C
		{ 0xFF, 0xFF, 0x00 }, // 1E
		{ 0x40, 0x00, 0x00 }, // 20
		{ 0x5B, 0x24, 0x00 }, // 22
		{ 0x76, 0x48, 0x00 }, // 24
		{ 0x91, 0x6D, 0x00 }, // 26
		{ 0xAD, 0x91, 0x00 }, // 28
		{ 0xC8, 0xB6, 0x00 }, // 2A
		{ 0xE3, 0xDA, 0x00 }, // 2C
		{ 0xFF, 0xFF, 0x00 }, // 2E
		{ 0x80, 0x00, 0x00 }, // 30
		{ 0x92, 0x1D, 0x00 }, // 32
		{ 0xA4, 0x3B, 0x00 }, // 34
		{ 0xB6, 0x59, 0x00 }, // 36
		{ 0xC8, 0x76, 0x00 }, // 38
		{ 0xDA, 0x94, 0x00 }, // 3A
		{ 0xEC, 0xB2, 0x00 }, // 3C
		{ 0xFF, 0xD0, 0x00 }, // 3E
		{ 0x80, 0x00, 0x00 }, // 40
		{ 0x92, 0x16, 0x0C }, // 42
		{ 0xA4, 0x2D, 0x18 }, // 44
		{ 0xB6, 0x44, 0x24 }, // 46
		{ 0xC8, 0x5B, 0x30 }, // 48
		{ 0xDA, 0x72, 0x3C }, // 4A
		{ 0xEC, 0x89, 0x48 }, // 4C
		{ 0xFF, 0xA0, 0x55 }, // 4E
		{ 0x80, 0x00, 0x55 }, // 50
		{ 0x92, 0x10, 0x61 }, // 52
		{ 0xA4, 0x20, 0x6D }, // 54
		{ 0xB6, 0x30, 0x79 }, // 56
		{ 0xC8, 0x40, 0x85 }, // 58
		{ 0xDA, 0x50, 0x91 }, // 5A
		{ 0xEC, 0x60, 0x9D }, // 5C
		{ 0xFF, 0x70, 0xAA }, // 5E
		{ 0x40, 0x00, 0xAA }, // 60
		{ 0x5B, 0x09, 0xB6 }, // 62
		{ 0x76, 0x12, 0xC2 }, // 64
		{ 0x91, 0x1B, 0xCE }, // 66
		{ 0xAD, 0x24, 0xDA }, // 68
		{ 0xC8, 0x2D, 0xE6 }, // 6A
		{ 0xE3, 0x36, 0xF2 }, // 6C
		{ 0xFF, 0x40, 0xFF }, // 6E
		{ 0x00, 0x00, 0xBF }, // 70
		{ 0x24, 0x09, 0xC7 }, // 72
		{ 0x48, 0x12, 0xCF }, // 74
		{ 0x6D, 0x1B, 0xD7 }, // 76
		{ 0x91, 0x24, 0xDF }, // 78
		{ 0xB6, 0x2D, 0xE7 }, // 7A
		{ 0xDA, 0x36, 0xEF }, // 7C
		{ 0xFF, 0x40, 0xF7 }, // 7E
		{ 0x00, 0x00, 0xBF }, // 80
		{ 0x1C, 0x10, 0xC7 }, // 82
		{ 0x39, 0x20, 0xCF }, // 84
		{ 0x55, 0x30, 0xD7 }, // 86
		{ 0x72, 0x40, 0xDF }, // 88
		{ 0x8E, 0x50, 0xE7 }, // 8A
		{ 0xAB, 0x60, 0xEF }, // 8C
		{ 0xC8, 0x70, 0xF7 }, // 8E
		{ 0x00, 0x00, 0xBF }, // 90
		{ 0x14, 0x16, 0xC7 }, // 92
		{ 0x29, 0x2D, 0xCF }, // 94
		{ 0x3D, 0x44, 0xD7 }, // 96
		{ 0x52, 0x5B, 0xDF }, // 98
		{ 0x66, 0x72, 0xE7 }, // 9A
		{ 0x7B, 0x89, 0xEF }, // 9C
		{ 0x90, 0xA0, 0xF7 }, // 9E
		{ 0x00, 0x20, 0x80 }, // A0
		{ 0x0C, 0x39, 0x92 }, // A2
		{ 0x19, 0x52, 0xA4 }, // A4
		{ 0x25, 0x6B, 0xB6 }, // A6
		{ 0x32, 0x84, 0xC8 }, // A8
		{ 0x3E, 0x9D, 0xDA }, // AA
		{ 0x4B, 0xB6, 0xEC }, // AC
		{ 0x58, 0xD0, 0xFF }, // AE
		{ 0x00, 0x40, 0x00 }, // B0
		{ 0x04, 0x5B, 0x24 }, // B2
		{ 0x09, 0x76, 0x48 }, // B4
		{ 0x0D, 0x91, 0x6D }, // B6
		{ 0x12, 0xAD, 0x91 }, // B8
		{ 0x16, 0xC8, 0xB6 }, // BA
		{ 0x1B, 0xE3, 0xDA }, // BC
		{ 0x20, 0xFF, 0xFF }, // BE
		{ 0x00, 0x40, 0x00 }, // C0
		{ 0x04, 0x5B, 0x18 }, // C2
		{ 0x09, 0x76, 0x30 }, // C4
		{ 0x0D, 0x91, 0x48 }, // C6
		{ 0x12, 0xAD, 0x61 }, // C8
		{ 0x16, 0xC8, 0x79 }, // CA
		{ 0x1B, 0xE3, 0x91 }, // CC
		{ 0x20, 0xFF, 0xAA }, // CE
		{ 0x00, 0x40, 0x00 }, // D0
		{ 0x0C, 0x5B, 0x0C }, // D2
		{ 0x19, 0x76, 0x18 }, // D4
		{ 0x25, 0x91, 0x24 }, // D6
		{ 0x32, 0xAD, 0x30 }, // D8
		{ 0x3E, 0xC8, 0x3C }, // DA
		{ 0x4B, 0xE3, 0x48 }, // DC
		{ 0x58, 0xFF, 0x55 }, // DE
		{ 0x00, 0x40, 0x00 }, // E0
		{ 0x14, 0x5B, 0x00 }, // E2
		{ 0x29, 0x76, 0x00 }, // E4
		{ 0x3D, 0x91, 0x00 }, // E6
		{ 0x52, 0xAD, 0x00 }, // E8
		{ 0x66, 0xC8, 0x00 }, // EA
		{ 0x7B, 0xE3, 0x00 }, // EC
		{ 0x90, 0xFF, 0x00 }, // EE
		{ 0x00, 0x20, 0x00 }, // F0
		{ 0x1C, 0x3F, 0x00 }, // F2
		{ 0x39, 0x5F, 0x00 }, // F4
		{ 0x55, 0x7F, 0x00 }, // F6
		{ 0x72, 0x9F, 0x00 }, // F8
		{ 0x8E, 0xBF, 0x00 }, // FA
		{ 0xAB, 0xDF, 0x00 }, // FC
		{ 0xC8, 0xFF, 0x00 }  // FE
	};
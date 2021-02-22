#pragma once
#include <stdint.h>
enum vgaMode {
    VGA_TEXT_80x25 = 0x2,
    VGA_TEXT_80x50 = 0x3
};

#define VGA_TXT_PTR = 0xb800;

#define VGA_MODE_PORT 0x03C0
#define VGA_RESET_PORT 0x03D8
#define VGA_MODE_INDEX 0x10


void vgaInit();
void vgaSetMode(uint8_t modeID);
void vgaResetModePort();


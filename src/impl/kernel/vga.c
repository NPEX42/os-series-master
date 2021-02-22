#include "io.h"
#include "vga.h"


void vgaInit() {
    ioReadPortByte(VGA_RESET_PORT);
}

void vgaSetMode(uint8_t modeID) {
    vgaResetModePort();
    ioWritePortByte(VGA_MODE_PORT, VGA_MODE_INDEX);
    ioWritePortByte(VGA_MODE_PORT, modeID);
}

void vgaResetModePort() {
    ioReadPortByte(VGA_RESET_PORT);
}
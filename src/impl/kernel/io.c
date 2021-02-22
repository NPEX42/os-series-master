#include "io.h"

uint8_t ioReadPortByte(uint16_t portNumber) {
    uint8_t output = 0x00;
    __asm__("inb %1, %0" : "=a" (output) : "d" (portNumber));
    return output;
}

void ioWritePortByte(uint16_t portNumber, uint8_t data) {
    __asm__("outb %1, %0" :: "d" (portNumber), "a" (data));
}
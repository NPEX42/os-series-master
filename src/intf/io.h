#pragma once
#include <stdint.h>
uint8_t ioReadPortByte(uint16_t portNumber);
void ioWritePortByte(uint16_t portNumber, uint8_t data);

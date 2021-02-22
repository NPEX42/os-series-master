#pragma once
#include <stdint.h>


void print(char* message);
void println(char* message);
void print8(uint8_t value);
void print16(uint16_t value);
void print32(uint32_t value);
void print64(uint64_t value);

void printBin8(uint8_t value);
void printBin16(uint16_t value);
void printBin32(uint32_t value);
void printBin64(uint64_t value);

void printDigit(uint8_t digit);

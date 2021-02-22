#include "stdout.h"
#include "print.h"
#include <math.h>

void print(char* message) {

}

void println(char* message) {

}

void print8(uint8_t value) {

}

void print16(uint16_t value) {

}

void print32(uint32_t value) {

}

void print64(uint64_t value) {

}

void printBin8(uint8_t value) {
    for(int i = 0; i < 8; i++) {
        uint8_t bitState = value & (0x80 >> i);
        print_char((bitState) ? '1' : '0');
    }
}

void printBin16(uint16_t value) {
    for(int i = 0; i < 16; i++) {
        uint8_t bitState = value & (0x80 >> i);
        print_char((bitState) ? '1' : '0');
    }
}

void printBin32(uint32_t value) {
    for(int i = 0; i < 32; i++) {
        uint8_t bitState = value & (0x80 >> i);
        print_char((bitState) ? '1' : '0');
    }
}

void printBin64(uint64_t value) {
    for(int i = 0; i < 64; i++) {
        uint8_t bitState = value & (0x80 >> i);
        print_char((bitState) ? '1' : '0');
    }
}

uint8_t GetLastDigit(uint64_t number) {
    // float x = number / 10f;
    // float digit = fmod(x, 1) * 10;

}

void printDigit(uint8_t digit) {
    digit %= 10;
    print_char(digit + '0');
}


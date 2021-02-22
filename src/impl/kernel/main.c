#include "io.h"
#include "print.h"
#include "stdout.h"
void kernel_main() {
    //vgaSetMode(VGA_TEXT_80x50);
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Welcome to our 64-bit kernel V0.2.0!\n");
    for(;;) {
        printBin8(ioReadPortByte(0x60));
        print_char('\n');
    }
}

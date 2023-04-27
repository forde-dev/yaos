#include "../cpu/isr.h"
#include "../drivers/screen.h"
#include "kernel.h"
#include "../lib/string.h"

void main() {
    isr_install();
    irq_install();

    clear_screen();

    print("Welcome to Yet Another Operating System(YaOS)!!!\n\n\n");
    print("\nRunning on 32-bit Mode.\n");
    print("What's this about now Ted?\n");
    print("Type HELP for a list of commands.\n");
    print("Version 0.42.1\n\n\n\n\n\n");
    print("prompt> ");
}

void user_input(char *input) {
    if (strcmp(input, "END") == 0) {
        print("Halting the CPU. Bye!\n");
        asm volatile("hlt");
    }
    if (strcmp(input, "CLEAR") == 0) {
        clear_screen();
    }
    if (strcmp(input, "VERSION") == 0) {
        print("Version 0.42.1");
    }
    if (strcmpfunc(input, "ECHO") == 0) {
        // print(str_strip_start(input, "ECHO"));
    }
    if (strcmp(input, "HELP") == 0) {
        print("END - halts the cpu\n");
        print("CLEAR - clears the screen\n");
        print("VERSION - displays the verison\n");
        print("ECHO - repeats what you ask\n");
        print("HELP - list of commands");

    }
    print("\nprompt> ");
}
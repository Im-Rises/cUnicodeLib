#include "cUnicodeLib.h"

int main() {
    initUnicodeLib();

    printf("кошка 日本国\n");
    printf(ESC_FG_MAGENTA ESC_BG_BLUE "кошка 日本国\n" ESC_RESET_ALL);
    printf(ESC_FG_RED ESC_BG_BLUE "кошка 日本国\n" ESC_RESET_ALL);
    printf(ESC_FG_B_GREEN "кошка 日本国 %d " ESC_FG_YELLOW "%s\n", 42, "Hello World" ESC_RESET_ALL);

    return 0;
}

#include "cUnicodeLib.h"

int main() {
    initUnicodeLib();

    /* Examples using the printf varyings parameters */

    // Print UTF8 characters
    printf("Print UTF8 characters: кошка 日本国\n");

    // Print text with colored background and colored foreground
    printf("%s%sPrint text with colored background and colored foreground%s\n", ESC_FG_BLUE, ESC_BG_B_MAGENTA, ESC_RESET_ALL);

    // Print utf8 text with colored background
    printf("%sPrint utf8 text with colored background%s\n", ESC_BG_B_YELLOW, ESC_RESET_ALL);

    // Print utf8 text with colored foreground
    printf("%sPrint utf8 text with colored foreground: кошка 日本国%s\n", ESC_FG_B_GREEN, ESC_RESET_ALL);

    // Print utf8 text with changing colored foreground and colored background
    printf("%s%sPrint utf8 text with colored foreground %s%sand colored background: кошка 日本国%s\n", ESC_FG_B_BLUE, ESC_BG_B_RED, ESC_FG_RED, ESC_BG_BLUE, ESC_RESET_ALL);

    // Print bold text
    printf("%sBold: Bold text - %sNormal: Normal text\n", ESC_BOLD_ON, ESC_BOLD_FAINT_OFF);

    /* Example with string concatenations */

    // Print text with colored background and colored foreground
    printf(ESC_BOLD_ON ESC_BG_B_WHITE ESC_FG_BLUE "Print text with colored background and colored foreground" ESC_RESET_ALL "\n");

    // Print utf8 text with colored background
    printf(ESC_BG_B_GREEN "Print utf8 text with colored background" ESC_RESET_ALL "\n");

    // Print utf8 text with colored foreground
    printf(ESC_FG_B_YELLOW "Print utf8 text with colored foreground: кошка 日本国" ESC_RESET_ALL "\n");

    // Use with varying parameters
    printf(ESC_FG_B_BLUE ESC_BG_B_RED "Varying argument %d and %d" ESC_RESET_ALL "\n",1 , 2 );

    return 0;
}

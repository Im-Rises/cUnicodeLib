#include <stdio.h>
#include <stdarg.h>

#ifdef _WIN32
#include <Windows.h>
#endif

#define ESC_PREFIX "\x1b["
#define ESC_SUFFIX "m"

#define ESC_FG_BLACK ESC_PREFIX "30" ESC_SUFFIX
#define ESC_BG_BLACK ESC_PREFIX "40" ESC_SUFFIX

#define ESC_FG_RED ESC_PREFIX "31" ESC_SUFFIX
#define ESC_BG_RED ESC_PREFIX "41" ESC_SUFFIX

#define ESC_FG_GREEN ESC_PREFIX "32" ESC_SUFFIX
#define ESC_BG_GREEN ESC_PREFIX "42" ESC_SUFFIX

#define ESC_FG_YELLOW ESC_PREFIX "33" ESC_SUFFIX
#define ESC_BG_YELLOW ESC_PREFIX "43" ESC_SUFFIX

#define ESC_FG_BLUE ESC_PREFIX "34" ESC_SUFFIX
#define ESC_BG_BLUE ESC_PREFIX "44" ESC_SUFFIX

#define ESC_FG_MAGENTA ESC_PREFIX "35" ESC_SUFFIX
#define ESC_BG_MAGENTA ESC_PREFIX "45" ESC_SUFFIX

#define ESC_FG_CYAN ESC_PREFIX "36" ESC_SUFFIX
#define ESC_BG_CYAN ESC_PREFIX "46" ESC_SUFFIX

#define ESC_FG_WHITE ESC_PREFIX "37" ESC_SUFFIX
#define ESC_BG_WHITE ESC_PREFIX "47" ESC_SUFFIX

#define ESC_FG_B_BLACK ESC_PREFIX "90" ESC_SUFFIX
#define ESC_BG_B_BLACK ESC_PREFIX "100" ESC_SUFFIX

#define ESC_FG_B_RED ESC_PREFIX "91" ESC_SUFFIX
#define ESC_BG_B_RED ESC_PREFIX "101" ESC_SUFFIX

#define ESC_FG_B_GREEN ESC_PREFIX "92" ESC_SUFFIX
#define ESC_BG_B_GREEN ESC_PREFIX "102" ESC_SUFFIX

#define ESC_FG_B_YELLOW ESC_PREFIX "93" ESC_SUFFIX
#define ESC_BG_B_YELLOW ESC_PREFIX "103" ESC_SUFFIX

#define ESC_FG_B_BLUE ESC_PREFIX "94" ESC_SUFFIX
#define ESC_BG_B_BLUE ESC_PREFIX "104" ESC_SUFFIX

#define ESC_FG_B_MAGENTA ESC_PREFIX "95" ESC_SUFFIX
#define ESC_BG_B_MAGENTA ESC_PREFIX "105" ESC_SUFFIX

#define ESC_FG_B_CYAN ESC_PREFIX "96" ESC_SUFFIX
#define ESC_BG_B_CYAN ESC_PREFIX "106" ESC_SUFFIX

#define ESC_FG_B_WHITE ESC_PREFIX "97" ESC_SUFFIX
#define ESC_BG_B_WHITE ESC_PREFIX "107" ESC_SUFFIX

#define ESC_RESET ESC_PREFIX "0m"

void initUnicodeLib() {
#ifdef _WIN32
    // Set ANSI escape codes
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0;
    GetConsoleMode(hOut, &dwMode);
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hOut, dwMode);
    // Set UTF8
    SetConsoleOutputCP(CP_UTF8);
#endif
}

int printf_test_varargs(char* colorCode, char* fontCode, const char* format, ...) {
    printf("%s%s", colorCode, fontCode);
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
    printf(ESC_RESET);
}


int main() {
    initUnicodeLib();

    printf("%s%sColored BG %s no more colored BG\n\n", ESC_FG_RED, ESC_BG_RED, ESC_RESET);
    printf("кошка 日本国\n");

    printf(ESC_FG_B_RED "кошка 日本国\n");
    printf(ESC_FG_RED "кошка 日本国\n");

    printf(ESC_FG_B_GREEN "кошка 日本国\n");
    printf(ESC_FG_GREEN "кошка 日本国\n");

    return 0;
}

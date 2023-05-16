#include <stdio.h>
#include <stdarg.h>

#ifdef _WIN32
#include <Windows.h>
#endif

#define PREFIX "\x1b["

#define ANSI_COLOR_RED PREFIX "31m"
#define ANSI_COLOR_BLUE PREFIX "34m"
#define ANSI_COLOR_RESET PREFIX "0m"

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

static const char* getAnsiColor(int colorCode) {
    static char code[10];
#ifdef _WIN32
    sprintf_s(code, sizeof(code), PREFIX "%dm", colorCode);
#else
    snprintf(code, sizeof(code), PREFIX "%dm", colorCode);
#endif
    return code;
}

#define GET_ANSI_COLOR(colorCode) getAnsiColor(colorCode)


int printf_test_varargs(int colorCode, int fontCode, const char* format, ...) {
    printf("%s%s", getAnsiColor(colorCode), getAnsiColor(fontCode));
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
    //    printf("%s", getAnsiColor(0));
    printf("%s", GET_ANSI_COLOR(0));
}


int main() {
    initUnicodeLib();

    // Test vargars and get ansi code
    printf_test_varargs(31, 44, "Printf test varargs кошка 日本国 %s, %d\n\n", "Windows", 10);
    printf("Test normal printf кошка 日本国\n\n");

    // Test get Ansi Code
    printf("%s Get Ansi code кошка 日本国%s\n", getAnsiColor(92), getAnsiColor(0));
    printf("кошка 日本国\n");
    printf("%s Get Ansi code кошка 日本国%s\n", getAnsiColor(92), ANSI_COLOR_RESET);
    printf("кошка 日本国\n");
    printf("%s Get Ansi code кошка 日本国%s\n", GET_ANSI_COLOR(92), ANSI_COLOR_RESET);
    printf("кошка 日本国\n");

    // Test
    printf("%s Windows\n", ANSI_COLOR_RED);
    printf("%s Windows%s\n", ANSI_COLOR_BLUE, ANSI_COLOR_RESET);
    printf("%s Windows\n", ANSI_COLOR_RED);

    return 0;
}

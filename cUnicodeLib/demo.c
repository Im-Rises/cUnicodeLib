#include <stdio.h>

#ifdef _WIN32
#include <Windows.h>
#endif

#ifdef _WIN32
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_BLUE "\x1b[44m"
#define ANSI_COLOR_RESET "\x1b[0m"
#else
#define ANSI_COLOR_RED "\033[31m"
#define ANSI_COLOR_BLUE "\033[44m"
#define ANSI_COLOR_RESET "\033[0m"
#endif

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

#include <stdarg.h>

int printf_test(int colorCode, int fontCode, const char* format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}


int main() {
    initUnicodeLib();

    printf_test(0, 0, "Printf test varargs кошка 日本国 %s, %d\n\n", "Windows", 10);

    printf("кошка 日本国\n");
    printf("%s Windows\n", ANSI_COLOR_RED);
    printf("%s Windows%s\n", ANSI_COLOR_BLUE, ANSI_COLOR_RESET);
    printf("%s Windows\n", ANSI_COLOR_RED);

    return 0;
}

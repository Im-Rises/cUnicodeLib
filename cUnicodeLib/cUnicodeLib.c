#ifndef DEF_CUNICODELIB
#define DEF_CUNICODELIB

#ifdef _WIN32
#include <Windows.h>
#endif

int initUnicodeLib() {
    int result = 0;
#ifdef _WIN32
    // Set ANSI escape codes
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0;
    result |= GetConsoleMode(hOut, &dwMode);
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    result |= SetConsoleMode(hOut, dwMode);
    // Set UTF8
    result |= SetConsoleOutputCP(CP_UTF8);
    return result == 1 ? 0 : 1;
#endif
    return result;
}

#endif // !DEF_CUNICODELIB

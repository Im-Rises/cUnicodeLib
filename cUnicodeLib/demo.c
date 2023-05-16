#include <stdio.h>

#ifdef _WIN32
#include <io.h>
#include <fcntl.h>
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

int main() {
#ifdef _WIN32
    //    // Working for UTF8 but no ANSI escape codes (colors)
    //    SetConsoleOutputCP(CP_UTF8);
    //    printf("кошка 日本国\n");

    //    // Working for ANSI escape codes (colors) but no UTF8
    //    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    //    DWORD dwMode = 0;
    //    GetConsoleMode(hOut, &dwMode);
    //    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    //    SetConsoleMode(hOut, dwMode);
    //    printf("кошка 日本国\n");

    // Working for UTF8 and ANSI escape codes (colors)
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0;
    GetConsoleMode(hOut, &dwMode);
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hOut, dwMode);
    SetConsoleOutputCP(CP_UTF8);
    printf("кошка 日本国\n");



    printf("\x1b[44m Windows\n");
    printf("%sWindows%s\n", "\x1b[44m", "\x1b[0m");
    printf("\x1b[44m Windows\n");
#else
    printf("%s Linux\n", ANSI_COLOR_RED);
    printf("%s Linux%s\n", ANSI_COLOR_BLUE, ANSI_COLOR_RESET);
    printf("%s Linux\n", ANSI_COLOR_RED);
#endif


    return 0;
}

// #ifdef _WIN32
// #include <windows.h>
// #else
// #include <unistd.h>
// #endif
//
// #include <stdio.h>
//
// enum colors {
//     BLACK,
//     RED,
//     GREEN,
//     YELLOW,
//     BLUE,
//     MAGENTA,
//     CYAN,
//     WHITE
// };
//
// void print_utf(enum colors foreground, enum colors background, const char* text) {
// #ifdef _WIN32
//     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//     int color = foreground + (background * 16);
//     SetConsoleTextAttribute(hConsole, color);
//     printf("%s", text);
//     SetConsoleTextAttribute(hConsole, 0x70);
// #else
//     printf("\033[0;%d;%dm%s\033[0m", 30 + foreground, 40 + background, text);
// #endif
// }
//
// int main()
//{
//     print_utf(RED, 0, "My demo text\n");
//     print_utf(BLUE, 0, "My demo text\n");
//     print_utf(CYAN, 0, "My demo text\n");
//     return 0;
// }
//
//
//
////#include "cUnicodeLib.h"
////
////int main(int argc, char* argv[])
////{
////	initUnicodeLib();
////
////    //Working on both
////	PRINTF_UNICODE("кошка 日本国 ╔ %d\n", 1);
////	PUTS_UNICODE("кошка 日本国 ╔");
////	PRINTF_UNICODE_COLOR(BLUE, "кошка 日本国 ╔ %d\n", 2);
////	PUTS_UNICODE_COLOR(RED, "кошка 日本国 ╔");
////    PRINTF_UNICODE_COLOR(WHITE, "кошка 日本国 ╔ %d\n", 3);
////
////    PRINTF_UNICODE("\n\n");
////    PRINTF_UNICODE_COLOR(HIGHLIGHT_CYAN, "sqdsdsq\n");
////    PRINTF_UNICODE_COLOR(GREEN, "кошка 日本国 ╔ %d\n", 4);
////    PRINTF_UNICODE("кошка 日本国 ╔ %d\n", 5);
////    PRINTF_UNICODE_COLOR(HIGHLIGHT_YELLOW, "кошка 日本国 ╔ %d\n", 6);
////
////	return 0;
////}

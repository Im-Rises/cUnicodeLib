#include <stdio.h>
#include <windows.h>  // for Windows-specific functions and types

#define RED      0x04
//#define GREEN    0x02
//#define YELLOW   0x06
#define BLUE     0x01

// ANSI escape sequences for Linux
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_HL      "\x1b[7m"

// WinAPI constants and types for Windows
#define WIN_COLOR_RED      FOREGROUND_RED
#define WIN_COLOR_BLUE     FOREGROUND_BLUE
#define WIN_COLOR_HL       BACKGROUND_BLUE
#define HANDLE             void*

void print_utf(int color, int hl_color, const char* text) {
#ifdef _WIN32
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    WORD win_color = 0;
    if (color == RED) {
        win_color |= WIN_COLOR_RED;
    }
    if (color == BLUE) {
        win_color |= WIN_COLOR_BLUE;
    }
    if (hl_color == 0) {
        win_color |= WIN_COLOR_HL;
    }
    SetConsoleTextAttribute(hConsole, win_color);
    printf("%s", text);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
#else
    const char* ansi_color = (color == RED) ? ANSI_COLOR_RED : ANSI_COLOR_BLUE;
    const char* ansi_hl = (hl_color == HIGHLIGHT) ? ANSI_COLOR_HL : "";
    printf("%s%s%s%s", ansi_hl, ansi_color, text, ANSI_COLOR_RESET);
#endif
}

int main() {
    print_utf(RED, 0, "My demo text\n");
    print_utf(BLUE, 1, "My demo text\n");
    return 0;
}

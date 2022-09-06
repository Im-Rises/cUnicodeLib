#ifndef DEF_CUNICODELIB
#define DEF_CUNICODELIB

#include <fcntl.h>
#include <stdio.h>

#ifdef _WIN32

#include <io.h>
#include <Windows.h>

/*
Code system:

	0xXY : X=BG, Y=Text

0 = Black       8 = Gray
1 = Blue        9 = Light Blue
2 = Green       A = Light Green
3 = Aqua        B = Light Aqua
4 = Red         C = Light Red
5 = Purple      D = Light Purple
6 = Yellow      E = Light Yellow
7 = White       F = Bright White

*/

//https://docs.microsoft.com/en-us/windows/console/char-info-str

#define RED      0x04
#define GREEN    0x02
#define YELLOW   0x06
#define BLUE     0x01
#define MAGENTA  0x05
#define CYAN     0x09
#define WHITE    0x07
#define HIGHLIGHT_BLACK      0x00
#define HIGHLIGHT_RED        0x40
#define HIGHLIGHT_GREEN      0x20
#define HIGHLIGHT_YELLOW     0x60
#define HIGHLIGHT_BLUE       0x10
#define HIGHLIGHT_MAGENTA    0x50
#define HIGHLIGHT_CYAN       0x90

//typedef wchar_t* stringUnicode;

#define PRINTF_UNICODE(...) wprintf(L##__VA_ARGS__)
#define PUTS_UNICODE(STRING) _putws(L##STRING)

#define PRINTF_UNICODE_COLOR(COLOR,...) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR); wprintf(L##__VA_ARGS__)
#define PUTS_UNICODE_COLOR(COLOR, STRING) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR); _putws(L##STRING)

#define SET_CONSOLE_COLORS(COLOR) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR)

//#define PRINTF_UNICODE(COLOR, ...) system("color 1"); wprintf(L##__VA_ARGS__)
//#define PUTS_UNICODE(COLOR, STRING) system("color 2"); _putws(L##STRING)

#elif defined(__unix__) || defined(__APPLE__)

/*
Code system:

Color	Foreground Code	Background Code
Black	30				40
Red		31				41
Green	32				42
Yellow	33				43
Blue	34				44
Magenta	35				45
Cyan	36				46
White	37				47

*/

#define RED      "\x1b[31m"
#define GREEN    "\x1b[32m"
#define YELLOW   "\x1b[33m"
#define BLUE     "\x1b[34m"
#define MAGENTA  "\x1b[35m"
#define CYAN     "\x1b[36m"
#define WHITE    "\x1b[0m"
#define HIGHLIGHT_BLACK      "\x1b[40m"
#define HIGHLIGHT_RED        "\x1b[41m"
#define HIGHLIGHT_GREEN      "\x1b[42m"
#define HIGHLIGHT_YELLOW     "\x1b[43m"
#define HIGHLIGHT_BLUE       "\x1b[44m"
#define HIGHLIGHT_MAGENTA    "\x1b[45m"
#define HIGHLIGHT_CYAN       "\x1b[46m"

//typedef char* stringUnicode;

#define PRINTF_UNICODE(...) printf(__VA_ARGS__)
#define PUTS_UNICODE(STRING) puts(STRING)

#define PRINTF_UNICODE_COLOR(COLOR,...) printf(COLOR); printf(__VA_ARGS__)
#define PUTS_UNICODE_COLOR(COLOR, STRING) puts(COLOR STRING)

#define SET_CONSOLE_COLORS(COLOR) prinf(COLOR)

#else

#error ERROR : cUnicodeLib, UNSUPPORTED PLATFORM

//#define RED      "\x1b[31m"
//#define GREEN    "\x1b[32m"
//#define YELLOW   "\x1b[33m"
//#define BLUE     "\x1b[34m"
//#define MAGENTA  "\x1b[35m"
//#define CYAN     "\x1b[36m"
//#define WHITE    "\x1b[0m"
//
//#define PRINTF_UNICODE(...) printf(__VA_ARGS__)
//#define PUTS_UNICODE(STRING) puts(STRING)

#endif

void initUnicodeLib();

#endif  // !DEF_CUNICODELIB

#include "cUnicodeLib.h"

int main(int argc, char* argv[])
{
	initUnicodeLib();

//	Windows not working
//	SET_CONSOLE_COLORS(RED);
//	PRINTF_UNICODE("кошка 日本国 ╔ %d\n", 12121);
//	SET_CONSOLE_COLORS(BLUE);
//	PUTS_UNICODE("кошка 日本国 ╔");
//
//	Linux working
//	PRINTF_UNICODE(RED "кошка 日本国 ╔ %d\n", 12121);
//	PUTS_UNICODE_COLOR(RED, "кошка 日本国 ╔");


    //Working on both
	PRINTF_UNICODE("кошка 日本国 ╔ %d\n", 1);
	PUTS_UNICODE("кошка 日本国 ╔");
	PRINTF_UNICODE_COLOR(BLUE, "кошка 日本国 ╔ %d\n", 2);
	PUTS_UNICODE_COLOR(RED, "кошка 日本国 ╔");
    PRINTF_UNICODE_COLOR(WHITE, "кошка 日本国 ╔ %d\n", 3);

//    // Debug
//    PRINTF_UNICODE_COLOR(HIGHLIGHT_CYAN, "sqdsdsq\n");  // Set background color to cyan
////    wprintf(L" This text has a cyan background color.");
//    printf("This text has a cyan background color.\n");
//    printf("\x1b[49m");  // Reset background color to default
//    printf(" This text has the default background color.\n");
//    printf("sddqsqsd\n");

    //Not working on both
//    printf("\n\n-----BUG\n");
//	PRINTF_UNICODE_COLOR(HIGHLIGHT_CYAN, "кошка 日本国 ╔ %d\n", 121213);
//    PUTS_UNICODE_COLOR(HIGHLIGHT_YELLOW, "кошка 日本国 ╔");
//    PRINTF_UNICODE_COLOR(HIGHLIGHT_BLACK, "кошка 日本国 ╔ %d\n", 12121);
//    printf("\n-----BUG\n");

	return 0;
}

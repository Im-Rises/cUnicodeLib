#include "cUnicodeLib.h"

int main(int argc, char* argv[])
{
	initUnicodeLib();

    //Working on both
	PRINTF_UNICODE("кошка 日本国 ╔ %d\n", 1);
	PUTS_UNICODE("кошка 日本国 ╔");
	PRINTF_UNICODE_COLOR(BLUE, "кошка 日本国 ╔ %d\n", 2);
	PUTS_UNICODE_COLOR(RED, "кошка 日本国 ╔");
    PRINTF_UNICODE_COLOR(WHITE, "кошка 日本国 ╔ %d\n", 3);

    PRINTF_UNICODE("\n\n");
    PRINTF_UNICODE_COLOR(HIGHLIGHT_CYAN, "sqdsdsq\n");
    PRINTF_UNICODE_COLOR(GREEN, "кошка 日本国 ╔ %d\n", 4);
    PRINTF_UNICODE("кошка 日本国 ╔ %d\n", 5);
    PRINTF_UNICODE_COLOR(HIGHLIGHT_YELLOW, "кошка 日本国 ╔ %d\n", 6);

	return 0;
}

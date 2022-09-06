#include "cUnicodeLib.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	initUnicodeLib();

	//Windows not working
	//SET_CONSOLE_COLORS(RED);
	//PRINTF_UNICODE("кошка 日本国 ╔ %d\n", 12121);
	//SET_CONSOLE_COLORS(BLUE);
	//PUTS_UNICODE("кошка 日本国 ╔");


	//Linux working
	//PRINTF_UNICODE(RED "кошка 日本国 ╔ %d\n", 12121);
	//PUTS_UNICODE_COLOR(RED, "кошка 日本国 ╔");


	//Working on both
	PRINTF_UNICODE("кошка 日本国 ╔ %d\n", 12121);
	PUTS_UNICODE("кошка 日本国 ╔");
	PRINTF_UNICODE_COLOR(BLUE, "кошка 日本国 ╔ %d\n", 121213);
	PUTS_UNICODE_COLOR(RED, "кошка 日本国 ╔");
	PRINTF_UNICODE_COLOR(HIGHLIGHT_BLUE, "кошка 日本国 ╔ %d\n", 121213);
	PUTS_UNICODE_COLOR(HIGHLIGHT_YELLOW, "кошка 日本国 ╔");

	return 0;
}

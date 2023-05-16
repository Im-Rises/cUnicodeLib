#include "cUnicodeLib.h"

void initUnicodeLib()
{
#ifdef _WIN32
	if (!_setmode(_fileno(stdout), _O_U8TEXT))
	{
		printf("Cannot enable UTF8 in console.");
		exit(1);
	}
#endif
}


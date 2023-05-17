#ifndef DEF_CUNICODELIB
#define DEF_CUNICODELIB

#ifdef _WIN32

#elif __linux__ || __unix__ || __APPLE__

#else

#error ERROR : cUnicodeLib, UNSUPPORTED PLATFORM

#endif

#endif // !DEF_CUNICODELIB

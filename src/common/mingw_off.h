/*

Undefines various Mingw/win32 structures


*/
#if defined(_WIN32) && defined(__GNUC__)

#undef PropertySheet
#undef SendMessage
#undef PostMessage
#undef GetClassName
#undef ShellExecute
#undef GetCurrentTime
#undef ShellExecuteEx

#endif
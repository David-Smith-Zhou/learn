#include <stdio.h>

// 打开打印
#define Debug

// 定义打印函数
#ifdef Debug
#define Debug_Info(msg) \
	_debug_base(__TIME__, __FILE__, __LINE__, "Info", #msg)
#define Debug_Warn(msg) \
	_debug_base(__TIME__, __FILE__, __LINE__, "Warn,", #msg)
#define Debug_Error(msg) \
	_debug_base(__TIME__, __FILE__, __LINE__, "Error", #msg)
#else
#define Debug_Info(msg)
#define Debug_Warn(msg)
#define Debug_Error(msg)
#endif

void _debug_base(const char* cTime, const char* cFile, const int iLine, const char* level, const char* msg);
char* _debug_get_full_time_string();
void _debug_print_current_time();

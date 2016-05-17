#include <stdio.h>
#include "debug.h"
#include <time.h>

char* _debug_get_full_time_string() {
	time_t now;
	now = time(NULL);
	char* char_time = ctime(&now);
	return char_time;
}

void _debug_print_current_time() {
	time_t now = time(NULL);
	struct tm temp_ts;
	struct tm * point_ts;
	//
	//	point_ts = gmtime(&now);
	//	格林威治时间
	point_ts = localtime(&now);
	temp_ts = *point_ts;
	printf("[%d-%d-%d %d:%d:%d]", temp_ts.tm_year - 100, temp_ts.tm_mon, temp_ts.tm_mday, temp_ts.tm_hour, temp_ts.tm_min, temp_ts.tm_sec);
}

void _debug_base(const char* cTime, const char* cFile, const int iLine, const char* level, const char* msg) {
	_debug_print_current_time();
	printf("[%s][line:%d][%s]:%s\n", cFile, iLine, level, msg);
}

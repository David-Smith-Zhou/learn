#include <stdio.h>
#include "debug.h"
#include <time.h>

char* getTime() {
	time_t now;
	time(&now);
	struct tm timeStruct;
	timeStruct = gmtime(&now);
	//undone
}
void DEBUG_INFO(char* message) {
#ifdef IS_DEBUG
	time_t now;
	time(&now);
	printf("%s: DEBUG_INFO: %s\n",ctime(&now), message);
#endif
}
void DEBUG_WARNING(char* message) {
#ifdef IS_DEBUG
	printf("DEBUG_WARNING: %s\n",message);
#endif
}
void DEBUG_ERROR(char* message) {
#ifdef IS_DEBUG
	printf("DEBUG_ERROR: %s\n",message);
#endif
}

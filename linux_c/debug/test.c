#include <stdio.h>
#include "debug.h"

int main(int argc, char* argv[]) {
//	printf("%s, %s, %d", __TIME__, __FILE__, __LINE__);
	Debug_Info(123);
	printf("123\n");
	return 0;
}

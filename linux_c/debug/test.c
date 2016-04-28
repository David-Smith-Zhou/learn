#include <stdio.h>
#include "debug.h"

int main(int argc, char* argv[]) {

	DEBUG_WARNING(__FILE__, __LINE__, "456");
	DEBUG_INFO(__FILE__, __LINE__, "123");
	DEBUG_ERROR(__FILE__, __LINE__, "789");
	return 0;

}

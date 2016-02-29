#include <stdio.h>
#include "debug.h"

int main(int argc, char* argv[]) {
	DEBUG_WARNING("456");
	DEBUG_INFO("123");
	DEBUG_ERROR("789");
	return 0;

}

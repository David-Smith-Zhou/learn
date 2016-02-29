#ifndef DEBUG
#define DEBUG

#define IS_DEBUG

//struct tm getTimeStruct();
char* debug_get_full_time_string();
void debug_print_current_time();
void DEBUG_INFO(char* message);
void DEBUG_WARNING(char* message);
void DEBUG_ERROR(char* message);


#endif

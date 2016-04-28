#ifndef DEBUG
#define DEBUG

#define IS_DEBUG

//struct tm getTimeStruct();
char* debug_get_full_time_string();
void debug_print_current_time();
void DEBUG_INFO(char* file_name, int line_num, char* message);
void DEBUG_WARNING(char* file_name, int line_num, char* message);
void DEBUG_ERROR(char* file_name, int line_num, char* message);


#endif

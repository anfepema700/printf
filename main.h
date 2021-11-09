#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
*struct convert - defines a structure
*@sym: pointer avaluesin string
*@f: the function pointer associated
 **/

typedef struct convert
{
	char *sym;
	int (*f)(va_list);
} conver_t;

/*prototypes*/

int concat(const char *format, convert_t func_list[], va_list arg_list);
int _printf(const char *format, ...);
int _putchar(char);
int print_char(va_list);
int print_string(va_list);
int print_perent(va_list);


/**/

static const conver_t func_list[] = {
	{"c", print_char},
	{"s", print_string},
	{"%", print_percent},
	{NULL, NULL}
};

#endif

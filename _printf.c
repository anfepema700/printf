#include "main.h"

/**
 * _printf- function that produces output according to a format
 * @format: character string that defines the data type to print
 * Return: The number of characters printed
 * or, on failure, returns -1
 */

int _printf(const char *format, ...)
{
	int count_char; /* counts the number of char printed */

	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	count_char = concat(format, func_list, arg_list);

	return (count_char);

}

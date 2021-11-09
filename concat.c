#include "main.h"

/**
 * concat- concatenates the string passed to _printf as argument
 * before and after the format specifier
 * @format:  is a character string. Is composed of zero or more directives
 * @func_list: list of variadic functions
 * @arg_list: list of arguments passed to the variadic functions
 * Return: the number of characters printed
 */

int concat(const char *format, conver_t func_list, arg_list)
{
	int i, j, return_val, count_char;

	count_char = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
   /*Iterates through struct to find the right func*/
			for (j = 0; func_list[j].sym != NULL; j++)
			{
				if (format[i + 1] == func_list[j].sym[0])
				{
					r_val = func_list[j].f(arg_list);
					if (return_val == -1)
						return (-1);
					count_char += return_val;
					break;
				}
			}
			if (func_list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
			{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count_char = count_char + 2;
			}
			else
				return (-1);
			}
			i = i + 1; /*Updating i to skip format symbols*/
		}
		else
		{
			_write_char(format[i]); /*call the write function*/
			count_char++;
		}
	}
	return (count_char);
}

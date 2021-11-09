#include "main.h"

/**
 * concat - concatenates the string before and after the format
 * character % is passed to the function
 * @format: is a character string.
 * The format string is composed of zero or more directives
 * @f_list: A list of all the posible functions.
 * @arg_list: A list containing all the argumentents passed to the functions
 * Return: the number of characters printed
 */
int concat(const char *format, conver_t f_list[], va_list arg_list)
{
	int i, j, r_val, printed_chars;

	printed_chars = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_list[j].sym != NULL; j++)
			{
				if (format[i + 1] == f_list[j].sym[0])
				{
					r_val = f_list[j].f(arg_list);
					if (r_val == -1)
						return (-1);
					printed_chars += r_val;
					break;
				}
			}
			if (f_list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')

					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed_chars = printed_chars + 2;
			}
			else
				return (-1);
		}
		i = i + 1;
	}
	else
	{
		_putchar(format[i]);
		printed_chars++;
	}
		return (printed_chars);
}

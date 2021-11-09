#include "main.h"

/**
 *print_char - prints  a character
 *@list: list of argument
 *Return: 1 success;
 **/


int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
*print_string - prints all string received.
*@list: list of arguments
*Return: the number of printed characters;
**/

int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 *print_percent - print a perecent symbol
 *@list: list of argument
 *Return: 0 success
 **/

int print_percent(_attribute_((unused)) va_list list)
{
	_putchar('%');
	return (1);
}

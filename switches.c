#include "holberton.h"

/**
 * switch - iterates through specifiers
 * @specify: type of specifier
 * @list: list of specifiers
 * Return: count of strings
 */

int switch_c(char specify, va_list list)
{
	int count = 0;

	switch (specify)
	{
		case '%':
			count = _putchar('%');
			break;
		case 's':
			count = _puts(va_arg(list, char *));
			break;
		case 'c':
			count = _putchar(va_arg(list, int));
			break;
		case 'd':
			count = _print_di(va_arg(list, int));
			break;
		case 'i':
			count = _print_di(va_arg(list, int));
			break;
//		case 'b':
//			count = _print_b(va_arg(list, int));
//			break;
	}
	count++;
	return (count);
}

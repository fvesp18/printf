#include "holberton.h"
/**
 * _printf - produces formatted output
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int counter = 0;
	int outcome = 0;
	char specify;
	char buffer[1024];

	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (format && format[counter])
		{
		if (format[counter] == '%')
		{
			counter++; /* increment to specifier */
			specify = format[counter];
			outcome += switch_c(specify, list);
		}
		else
		{
		       	_print_di(_strlen(buffer) - 1);
			_putchar(format[counter]);
		}
		counter += 1; /* increment past specifier */
		outcome += 1;
		}
	_puts(buffer);
	va_end(list);
	return(outcome);
}


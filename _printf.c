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
			specify = format[counter + 1];
			counter = switch(specify, list);
		}
		else
		{
		       	_puts(_strlen - 1(buffer));
		}
		counter += 1;
		outcome += 1;
		}
	_puts(buffer);
	va_end(list);
	return(outcome);
}

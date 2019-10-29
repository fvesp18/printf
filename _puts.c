#include "holberton.h"

/**
 * _puts - will print the string *str
 * @str: location of str
 * Return: void
 */

int _puts(char *str)
{
	int begin = 0;

	while (str[begin] != '\0')
	{
		_putchar(str[begin]);
		begin++;
	}
	begin--;
	return (begin);
}

#include "holberton.h"

/**
 * _print_di - prints digits of base 10
 * @di: digit
 * Return: integer
 */

void _print_di(int di)
{
	if (di >= '9')
	{
		_putchar(di);
		di++;
	}
	if (di < '9')
	{
		_putchar((di / 10) + '0');
		_putchar((di % 10) + '0');
		di++;
	}

}

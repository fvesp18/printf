#include "holberton.h"
/**
 * _print_di - prints digits of base 10
 * @di: digit
 * Return: integer
 */
int _print_di(int di)
{
	int counter = 0;

	if (di < 0)
	{
		di *= -1;
		_putchar('-');
	}
	if (di != 0)
	{
		counter++;
		_print_di(di / 10);
		_putchar((di % 10) + '0');
	}
	return (counter);
}

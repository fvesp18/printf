#include "holberton.h"
/**
 * print_hex - prints hex
 * @n: input int
 * Return: numb of characts printed
 */

int print_hex(unsigned int n)
{
	int rem, counter;

	if (n < 10)
		counter = _putchar(n + '0');
	else
	{
		rem = n % 10;
		counter = _putchar(rem + 'a');
	}
	return (counter);
}

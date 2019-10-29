#include "holberton.h"
/**
 * strtobin - convert a string to binary
 * @toconvert: characters to be converted
 * @ones: pointer for ones in binary output
 * Return: output
 */
void strtobin(unsigned int toconvert, unsigned int *ones)
{
	char b;

	if (toconvert == 1)
	{
		_putchar('1');
		(*ones)++;
		return;
	}
	else
	{
		if ((toconvert % 2) == 0)
		{
			b = '0';
			toconvert = toconvert / 2;
		}
		else
		{
			b = '1';
			toconvert = toconvert / 2;
			(*ones)++;
		}
		strtobin(toconvert, ones);
		_putchar(b);
	}
}

#include "holberton.h"

/**
 * _strlen - print length of string
 * @s: string
 * Return: void
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count])
		count++;
	count++;
	return (count);
}

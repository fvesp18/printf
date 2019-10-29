#include "holberton.h"
/**
 * _itoa - convert int to string
 * @s: int to convert
 * Return: Outcome
 */
char* _itoa(int incoming, char* buff, int rad)
{
	int tempincoming;
	int strlength = 1;

	tempincoming = incoming;

	while ((int)tempincoming / rad != 0)
	{
		tempincoming = (int)tempincoming / rad;
		strlength++;
	}
	tempincoming = incoming;
	do
	{
		*(buff + strlength - 1) = (tempincoming % rad) + '0';
		tempincoming = (int)tempincoming / rad;
	}
	while (strlength++);
	return (buff);
}

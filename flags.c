#include "holberton.h"
/**
 * zeroflag - handle zero flag
 * @flag: flag character being checked
 * Return: flag if not cleared
 */
int zeroflag(int flag)
{
	if (flag == '0')
	{
		return (0);
	}
	else
		return (1);
}

/**
 * minusflag - left-justify within field
 * @flag: flag character being checked
 * Return: left-justify if cleared
 */
int minusflag(int flag)
{
	if (flag == '-')
	{
		return (0);
	}
	else
		return (1);
}

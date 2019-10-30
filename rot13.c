#include "holberton.h"
/**
 * rot13 - prints string in rot13
 * @letter: character being encrypted
 * Return: Output
 */
void rot13(char *letter)
{
	int R;
	int n;
	int length = _strlen(letter);

	for (n = 0; n < length; n++)
	{
		if ((*(letter + n) >= 'a' && *(letter + n) < 'n')
		    || (*(letter + n) >= 'A' && *(letter + n) < 'N'))
			R = *(letter + n) += 13;
		else if ((*(letter + n) > 'm' && *(letter + n) < 'z')
			 || (*(letter + n) > 'M' && *(letter + n) < 'Z'))
			R = *(letter + n) -= 13;
	}
	_putchar(R);
}

#include "main.h"

/**
 * _islower - Function that checks for lowercase character
 * @c: representing alphabet
 *
 * Return: 1 if lowercase. 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

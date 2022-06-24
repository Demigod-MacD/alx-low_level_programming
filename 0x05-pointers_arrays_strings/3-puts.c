#include "main.h"

/**
 * _puts - function that prints a string
 * @str: String
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

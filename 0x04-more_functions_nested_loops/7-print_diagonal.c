#include "main.h"

/**
 * print_diagonal - Print \ n times
 * @n: number of times
 *
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}

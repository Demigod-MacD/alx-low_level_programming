#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 * @a: first integer
 * @b: second integer
 * Return: swapped integers
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

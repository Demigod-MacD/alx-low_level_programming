#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - function that prints square root of a number
 * @n: number for sqrt function
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root function
 * @n: number
 * @i: iterator
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}

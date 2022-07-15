#include <stdio.h>
#include <unistd.h>

/**
 * main - prints all possible combinations of two digit numbers
 * the numbers should range from 0 to 99 and separated by space
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);

					if (a == 56 && a + b + c + d == 227)
					{
						break;
					}
					else
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}

	putchar(10);
	return (0);
}

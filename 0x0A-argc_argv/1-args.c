#include <stdio.h>

/**
 * main - prints number of argument passed to it
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

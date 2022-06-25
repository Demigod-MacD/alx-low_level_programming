#include <stdio.h>

/**
 * main - function to print its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

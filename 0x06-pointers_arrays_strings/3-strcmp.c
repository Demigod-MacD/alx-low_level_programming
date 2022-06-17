#include "main.h"

/**
 * _strcmp - function for comparing
 * @s1: 1st parameter
 * @s2: 2nd parameter
 * Return: string
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

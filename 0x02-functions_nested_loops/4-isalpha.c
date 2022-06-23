#include "main.h"

/**
 * _isalpha - checks for alphabetical letters
 * @c: representing alphabet
 *
 * Return: Returns 1 for letters. returns 0 for otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

#include "main.h"

/**
 * _isupper - function that verifies wheather a character is uppercase or not
 * @c: character to be tested
 *
 * Return: returns 1 if it is uppercase, and 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}


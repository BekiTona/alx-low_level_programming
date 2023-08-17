#include "main.h"

/**
 * _isdigit - function that checks if a character is a digit or not
 * @c: character to be tested
 * Return: 1 if it's digit 0 to 9 else return 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}



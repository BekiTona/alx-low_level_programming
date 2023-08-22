#include "main.h"

/**
 * _strlen: this is a function that returns the length of a string
 * s: string
 * longy: variable name
 * Return: lenth
*/

int _strlen(char *s)
{
	int longy = 0;

	while (*s != '\0')
	{
		longy++;
		s++;
	}

	return (longy);
}

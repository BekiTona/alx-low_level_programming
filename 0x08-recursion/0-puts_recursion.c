#include "main.h"
/**
 *  _puts_recursion - recursive function to print the string to the screen
 *
 *  s: is pointer to the string, that will be printed
 *
 *  Return: nothing
 */
void _puts_recursion(char *s);
{
	if (*s != '\0') 
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_numbers – this is a function that print numbers from 0 to 9.
 * return: it returns void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}



#include "main.h"

/**
 * print_most_numbers – this function will print most numbers except 2and 4 
 *
 * return: it returns nothing
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}


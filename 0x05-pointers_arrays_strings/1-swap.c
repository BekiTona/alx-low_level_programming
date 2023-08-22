#include "main.h"

/**
 * swap_int: this function swaps
 * values of 2 integers.
 * a: integer to be swapped
 * b: another integer to be swapped
 * return void
*/
void swap_int(int *a, int *b)
	{
		int c;
		
		c = *a;
		*a = *b;
		*b = c;
	}

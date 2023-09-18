#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: int 1
 * @b: int 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}

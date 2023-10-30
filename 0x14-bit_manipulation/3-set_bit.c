#include "main.h"

/**
 * set_bit- changes the value of a bit at a given index to 1
 * @n: pointer unsigned long int to change
 * @index: index
 * Return: 1 or -1 on failure
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL;

	if (index > sizeof(unsigned long int) * 8 - 1)
	return (-1);

	mask <<= index;
	*n = mask | *n;
	return (1);
	}

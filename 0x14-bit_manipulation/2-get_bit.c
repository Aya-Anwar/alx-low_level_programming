#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int to find index at
 * @index: index
 * Return: index of -1 on failure
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL;

	if (index > sizeof(unsigned long int) * 8 - 1)
	return (-1);

	mask <<= index;
	if (mask & n)
	return (1);
	else
	return (0);
	}

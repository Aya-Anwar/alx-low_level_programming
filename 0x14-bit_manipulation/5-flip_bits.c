#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another
 * @n: unsigned long int n
 * @m: unsigned long int m
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int temp = n ^ m;

	while (temp != 0)
	{
		temp &= (temp - 1);
		count++;
	}
	return (count);
}

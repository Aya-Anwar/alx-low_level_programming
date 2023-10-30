#include"main.h"

/**
 * print_binary - function that converts a binary number to an unsigned int
 * @n: unsigned long int n number that should converted
 * Return: (void)
*/

void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL;

if (n == 0)
{
_putchar('0');
return;
}

mask <<= 63;

while ((mask & n) == 0)
	mask >>= 1;
while (mask)
{
	_putchar(mask & n ? '1' : '0');
	mask >>= 1;
}
return;
}

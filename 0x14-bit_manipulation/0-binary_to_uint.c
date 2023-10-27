#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary number as a string
 * Return: the unsigned int form of b
*/
unsigned int binary_to_uint(const char *b)
{
int decimal = 0;
int base = 1;
int rem;
if (!*b)
{
return (0);
}
while (*b)
{
rem = *b % 10;
decimal += (rem)*(base);
*b /= 10;
base *= 2;
}
return (decimal);
}

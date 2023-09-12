#include "main.h"
/**
 * print_sign -  prints the sign of a number
 * @n: the number
 * Return: 1 (is greater than zero) or 0 (is zero)
 * or  -1 is less than zero)
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(43);
		return (0);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number os times the ( _ ) printed
*/

void print_line(int n)
{
	int lch;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lch = 1; lch <= n; lch++)
			_putchar('_');
		_putchar('\n');
	}
}

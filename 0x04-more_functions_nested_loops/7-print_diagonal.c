#include "main.h"

/**
 * print_diagonal - print diagonal line
 *
 * @n: is the number of times the \ printed
*/

void print_diagonal(int n)
{
	int p, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 0; p < n; p++)
		{
			for (space = 0; space < p; space++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}

#include "main.h"
/**
* print_diagonal - print digit line
* @n: is the number os times the ( _ ) printed
*/
void print_diagonal(int n)
{
	int lch, p;

		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (lch = 1; lch <= n; lch++)
			{
				for (p = 0; p < lch; p++)
				{
				_putchar(32);
				}
				_putchar(92);
				_putchar('\n');
			}
		}
}

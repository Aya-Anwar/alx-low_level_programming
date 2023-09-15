#include "main.h"
/**
 * more_numbers - print from 0 to 14 ten times using _putchar
 * Return: 0 (Success)
 */
void more_numbers(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				n = j % 10;
				_putchar(1 + 48);
			}
			_putchar(n + 48);
		}
		_putchar('\n');
	}
}

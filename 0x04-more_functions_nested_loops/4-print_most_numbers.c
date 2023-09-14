#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9 without print 2 or 4
 * Return: 0 (success)
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar (i + 48);
		i++;
		if (i == 2 || i == 4)
			i++;
	}
	_putchar('\n');
}

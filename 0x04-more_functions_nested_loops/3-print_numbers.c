#include "main.h"
/**
 * print_numbers -  prints the numbers, from 0 to 9
 * Return: 0(success)
 */
void print_numbers(void)
{
	int i = 0;


	while (i >= 0 && i <= 9)
	{
		putchar(i + 48);
		 i++;
	}
	putchar('\n');
}

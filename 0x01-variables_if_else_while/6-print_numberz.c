#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints all single digit numbers of base 10 starting from 0
 * Return: 0 (Success)
 */
int main(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		putchar (digit);
		digit++;
	}
	putchar ('\n');
	return (0);
}

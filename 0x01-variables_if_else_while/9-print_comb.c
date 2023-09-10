#include<stdio.h>
/**
 * main -Entry point
 * Description: prints all possible combinations of single-digit numbers
 *Return: 0 (Success)
 */
int main(void)
{
	int digit = 48;

	while (digit <= 57)
	{
		putchar(digit);
		if (digit != 57)
		{
		putchar(',');
		putchar(' ');
		}
		digit++;
	}
	putchar('\n');
	return (0);
}


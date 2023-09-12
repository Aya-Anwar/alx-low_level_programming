#include<stdio.h>
/**
 * main - Entry point
 * Description: prints all possible combinations of two two-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int num_1, num_2;

	for (num_1 = 0; num_1 < 99; num_1++)
	{
		for (num_2 = 0; num_2 < 100; num_2++)
		{
			putchar((num_1 / 10) + '0');
			putchar((num_1 % 10) + '0');
			putchar(' ');
			putchar((num_2 / 10) + '0');
			putchar((num_2 % 10) + '0');
			if (num_1 == 98 && num_2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

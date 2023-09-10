#include<stdio.h>
/**
 * main - Entry point
 * Description: prints all possible different combinations of two digits
 * Return:  (Success)
 */
int main(void)
{
	int digit_1 = '0', digit_2;

	while (digit_1 <= '9')
	{
		digit_2 = '0';
		while (digit_2 <= '9')
		{
			if (digit_1 != digit_2 && digit_1 < digit_2)
			{
				putchar(digit_1);
				putchar(digit_2);
				if (digit_1 != '8' || digit_2 != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
			digit_2++;
		}
		digit_1++;
	}
	putchar('\n');
	return (0);
}

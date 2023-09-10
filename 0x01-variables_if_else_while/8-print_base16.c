#include<stdio.h>
/**
 * main - Entry point
 * Description: Write a program that prints all the numbers of base 16
 * Return: 0 (Success)
 */
int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);
		digit++;
		if (digit == 57)
			digit += 40;
	}
	putchar('\n');
	return (0);
}

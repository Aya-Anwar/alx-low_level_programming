#include <stdio.h>
/**
 * main - Entry point
 * Description:  prints all single digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int num = '0';
		while (num <= '9')
		{
			putchar(num);
			num++;
		}
	putchar('\n');
	return (0);
}

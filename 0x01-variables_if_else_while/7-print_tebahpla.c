#include<stdio.h>
/**
 * main - Entry point
 * Description: Write a program that prints the lowercase alphabet in reverse
 * Return: 0 (success)
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}

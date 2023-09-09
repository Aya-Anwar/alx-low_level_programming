#include <stdio.h>
/**
 * main - Entry point
 * Description: Write a program that prints the alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar (ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

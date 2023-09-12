#include "main.h"
/**
 * main - Entry point
 * Description: Write a program that prints _putchar prototype
 * Return: 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
	return (0);
}

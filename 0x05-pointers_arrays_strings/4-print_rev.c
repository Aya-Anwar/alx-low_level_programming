#include"main.h"
/**
 * print_rev -  prints a string, in reverse
 * @s: pointer to the strig to print
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	while (length > 0)
	{
		s--;
		_putchar(*s + 0);
		length--;
	}
	_putchar('\n');
}

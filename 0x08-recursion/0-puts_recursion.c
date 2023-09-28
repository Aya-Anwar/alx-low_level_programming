#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line
 * @s: pointer to the string
 * Return: void
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s + 0);
		s++;
	}
	_putchar('\n');
}

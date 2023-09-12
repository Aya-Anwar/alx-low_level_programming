#include "main.h"
/**
 * print_alphabet_x10 - function print a to z 0 times
 *
 * Return: void
*/
void print_alphabet_x10(void)
{
	int line;
	char ch;

	for (line = 1; line <= 10; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}

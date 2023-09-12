#include "main.h"
/**
 * main - Entry point
 * Description: prints 10 times the alphabet, in lowercase
 * Return: 0 (Success)
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

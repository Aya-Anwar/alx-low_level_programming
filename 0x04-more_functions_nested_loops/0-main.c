#include <stdio.h>
#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	for (c = 'A'; c <= 'Z'; ++c)
		printf("%c: %d\n", c, _isupper(c));
	return (0);
}

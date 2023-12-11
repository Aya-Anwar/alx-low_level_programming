#include "main.h"

/**
 * _strlen - print the length of string
 *
 * @s: string parameter
 *
 * Return: lengh of string
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;
	return (count);
}

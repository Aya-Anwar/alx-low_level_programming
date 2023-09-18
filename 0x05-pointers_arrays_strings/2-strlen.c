#include "main.h"
/**
 * _strlen - print the length of a string
 * @s: string parameter
 * Return: lengh of string
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		counter++;
	return (counter);
}

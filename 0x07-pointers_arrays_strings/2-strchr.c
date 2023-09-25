#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: The string to check
 * @c: The character to find
 * Return: Pointer to @s or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return &s[i];
	}
	return (NULL);
}

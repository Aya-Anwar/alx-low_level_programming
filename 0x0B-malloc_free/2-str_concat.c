#include "main.h"

/**
 * str_concat - Concatenate two strings
 *
 * @s1: A string to be concatenated
 *
 * @s2: A string to be concatenated
 *
 * Return: Pointer to newly allocated memory
 * which is equal to @s1 + @s2 (SUCCESS) OR
 * NULL (FAILURE)
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	size_t total_len;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2 + 1;
	result = (char *)malloc(total_len);
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}

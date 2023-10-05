#include"main.h"
/**
 * _strdup - Copies a string to new allocated space in memory
 * @str: The string to be copied
 * Return: Pointer to allocated memory containing copy of @str (SUCCESS)
 * OR NULL if @str is empty (FAILURE) OR
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	size_t len;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	ptr = malloc(len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, str);
	return (ptr);
}

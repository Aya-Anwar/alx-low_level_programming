#include "main.h"
/**
 * create_array - Create an array, and initialiazes it with a specific
 * char @c
 *
 * @size: Size of the array of chars to be created
 *
 * @c: Char value to initialize the array with
 *
 * Return: Pointer to the array created OR NULL if @size = 0 OR
 * the creation of the array fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

#include "main.h"

/**
 * _strncat - Concatenates two strings using @ bytes
 *
 * @dest: Destination String; src string is appended to it
 *
 * @src: Source string; gets appended to dest string
 *
 * @n: Number of bytes of src that should be concatenated with dest
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}

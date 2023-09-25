#include"main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: A pointer to the memory block you want to set
 * @b: The value you want to set. It's usually an integer
 * @n: The number of bytes you want to set to the specified value
 * Return: char with result of memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

#include "main.h"
/**
 * _islower - chech lowercase char
 *
 * @c: number to be checke
 * Return: 0 (success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

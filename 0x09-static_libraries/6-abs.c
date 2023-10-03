#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @a: the integer computed
 *
 * Return: absolute value
*/

int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (a * -1);
}

#include "main.h"
/**
 * _isupper - check is upper
 * @c: input for alphabet
 * Return:  1 upper 0 is not
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}

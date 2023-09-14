#include "main.h"
/**
 * _isupper - check is upper
 * @c: input for alphabet
 * Return:  1 upper 0 is not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

#include <unistd.h>

/**
 * _putchar - write character using header file
 *
 * Return: Success = 1 , error = -1.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

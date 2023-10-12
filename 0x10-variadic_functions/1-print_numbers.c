#include "variadic_functions.h"
/**
 * print_numbers - prints numbers with separator
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the integers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	if (separator == NULL)
	{
		separator = "\0";
	}
	va_start(args, n);
	if (separator == NULL)
	{
		separator = "\0";
	}
	for (i = 0; i < n ; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}

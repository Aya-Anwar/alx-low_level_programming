#include "variadic_functions.h"


/**
 * print_strings - prints strings with separator
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the strings to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	const char *str;
	va_list args;

	if (separator == NULL)
	{
		separator = "\0";
	}

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		printf("%s", str);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}


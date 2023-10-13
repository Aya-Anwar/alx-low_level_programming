#include "variadic_functions.h"
/**
 * print_all - Entry Point
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: list of arg types
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int num;
	char ch;
	float fl;
	char *str;
	int j = 0;
	int string_printed = 0;
	char *sep = ", ";

	va_start(args, format);
	for (j = 0; format[j]; j++)
	{
		if (format[j] == 'c')
		{
			ch = va_arg(args, int);
			printf("%c", ch);
			if (format[j + 1] != '\0')
			{
				printf("%s", sep);
			}
		}
		else if (format[j] == 'i')
		{
			num = va_arg(args, int);
			printf("%d", num);
			if (format[j + 1] != '\0')
			{
				printf("%s", sep);
			}
		}
		else if (format[j] == 'f')
		{
			fl =(float) va_arg(args, double);
			printf("%f", fl);
			if (format[j + 1] != '\0')
			{
				printf("%s", sep);
			}
		}
		else if (format[j] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("nil");
			}
			else
			{
				printf("%s", str);
				if (format[j + 1] != '\0')
				{
					printf("%s", sep);
				}
				string_printed = 1;
			}
		}
		va_end(args);
		if (string_printed == 1)
		{
			printf("\n");
		}
	}
}

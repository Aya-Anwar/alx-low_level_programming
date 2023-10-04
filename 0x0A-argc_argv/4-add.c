#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * is_digit_only - checks if a string contains only digits
 * @s: pointer to the string
 * Return: 1 if a only digits, 0 otherwise
 */

int is_digit_only(char *s)
{
	while (*s)
	{
		if (isdigit(*s++) == 0)
			return (0);
	}
	return (1);
}

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: array of pointers to argument names
 * Return: 0 on success, 1 if at least one argument is not digits only
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc == 1)
	{
		sum = 0;
	}

	for (i = 1; i <= argc - 1; i++)
	{
		if (is_digit_only(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}

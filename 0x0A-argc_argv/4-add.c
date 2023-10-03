#include<stdio.h>
#include<stdlib.h>
/**
 * main - adds numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
		sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

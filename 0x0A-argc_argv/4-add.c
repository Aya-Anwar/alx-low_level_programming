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

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}
		for (i = 1; i < argc; i++)
		{
		sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
}

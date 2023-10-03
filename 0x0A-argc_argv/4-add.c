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
	if (argc != 1)
	{
		printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
	}
	else
	{
		printf("0\n");
		return (1);
	}
	return (0);
}

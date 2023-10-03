#include<stdio.h>
/**
 * main - Prints all arguments it receives
 *
 * @argc: Length of @argv, integer
 *
 * @argv: Array of strings of the arguments of this program
 *
 * Return: 0, success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

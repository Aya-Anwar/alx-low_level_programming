#include<stdio.h>
/**
 * main - Prints the number of arguments passed into it
 *
 * @argc: Length of @argv
 *
 * @argv: Array of strings of the programs arguments
 *
 * Return: 0, Success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

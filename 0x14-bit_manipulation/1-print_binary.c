#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a number
 * @n: the number to print
 * Return: void
*/
void print_binary(unsigned long int n)
{
int binary[32];
int i = 0;
int j;

while (n > 0)
{
binary[i] = n % 2;
n = n / 2;
i++;
}

for (j = i - 1; j >= 0; j--)
{
_putchar(binary[j] + '0');
}
return;
}

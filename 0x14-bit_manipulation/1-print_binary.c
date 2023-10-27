#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a number
 * @n: the number to print
 * Return: void
*/
void print_binary(unsigned long int n) {
int numBits = sizeof(n) * 8; // Assuming 8 bits per byte

for (int i = numBits - 1; i >= 0; i--) {
unsigned long int mask = 1UL << i;
putchar((n & mask) ? '1' : '0');
}
putchar('\n');
}

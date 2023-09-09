#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all the letters except q and e
 * Return: 0(Success)
 */
int main(void)
{
	char ch = 'a';

	if (ch != 'e' && ch != 'q')
	{
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');
	return (0);
}

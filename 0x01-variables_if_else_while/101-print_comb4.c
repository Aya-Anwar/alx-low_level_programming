#include<stdio.h>
/**
 * main - Entry point
 * Description: prints all possible different combinations of three digits
 * Return: 0 (Success)
 */
int main(void)
{
	int n_1 = '0', n_2, n_3;

	while (n_1 <= '9')
	{
		n_2 = '0';
		while (n_2 <= '9')
		{
			n_3 = '0';
			while (n_3 <= '9')
			{
				if ((n_1 != n_2) && (n_1 < n_2) && (n_2 != n_3) && (n_2 < n_3))
				{
					putchar(n_1);
					putchar(n_2);
					putchar(n_3);
					if (n_1 != '7' || n_2 != '8' || n_3 != '9')
					{
						putchar(',');
					putchar(' ');
					}
				}
			n_3++;
		}
		n_2++;
	}
	n_1++;
}
putchar('\n');
return (0);
}

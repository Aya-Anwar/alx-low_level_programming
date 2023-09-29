/**
 * prime_check - Checks to see if number is prime
 *
 * @i: Factor check
 *
 * @c: Possible prime number
 *
 * Return: 1 if prime, 0 if not
 *
 */
int prime_check(int i, int c)
{
	if (c < 2 || c % i == 0)
	{
		return (0);
	}
	else if (i > c / 2)
	{
		return (1);
	}
	else
	{
		return (prime_check(i + 1, c));
	}
}
/**
 * is_prime_number - States if number is prime
 *
 * @n: Number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	else
	{
		return (prime_check(2, n));
	}
}

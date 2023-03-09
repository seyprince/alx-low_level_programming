#include "main.h"
int actual_prime(int n, int x);

/**
 * is_prime_number - Shows if an int is a prime number or not
 * @n: The number to analyse
 *
 * Return: 1 if n is prime number and 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - will calculate if a number is prime recursively
 * @n: The number to analyse
 * @x: The iterator
 *
 * Return: 1 if n is Prime number and 0 if not.
 */

int actual_prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (actual_prime(n, x - 1));
}

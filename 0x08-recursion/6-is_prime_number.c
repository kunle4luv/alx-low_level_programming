#include "main.h"

/**
 * is_divisible - Checks if num is divisible by any number
 * from divisor to sqrt(num)
 * @num: The number to check for divisibility
 * @divisor: The divisor to start checking from
 *
 * Return: 1 if divisible & 0 otherwise
 */
int is_divisible(int num, int divisor)
{
	if (divisor <= 1)
	{
		return (0);
	}
	if (divisor * divisor > num)
	{
		return (0);
	}
	if (num % divisor == 0)
	{
		return (1);
	}
	return (is_divisible(num, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if prime & 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (!is_divisible(n, 2));
}

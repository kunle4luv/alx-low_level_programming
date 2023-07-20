#include "main.h"

/**
 * print_sign - A function that prints the sign of a number
 * @n: the int to check
 * Return: 1 and print + if n is greter than zero
 * 0 if zero and -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1 * 1);
	}
}

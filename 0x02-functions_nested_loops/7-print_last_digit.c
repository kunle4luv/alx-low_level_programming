#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: the int to take the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int num;

	if (n < 0)
		n *= -1;
	num = n % 10;
	_putchar('0' + num);
	return (num);
}

#include "main.h"
/**
   * print_number -  A function that prints an integer.
    * @n: integer
     * Return: Nothing
 */
void print_number(int n)
{
	/**
	 *Handles negative number
	 *  and overflow
	 */
	int last_digit, rev, ch;

	if (n < 0)
	{
		_putchar('-');
		last_digit = ('0' - n % 10);
		n = n / -10;
	}
	else
	{
		last_digit = ('0' + n % 10);
		n = n / 10;
	}
	/*Reverse number*/
	rev = 0;
	while (n > 0)
	{
		rev = (rev * 10) + (n % 10);
		n = n / 10;
	}
	/*Outputs reversed number*/
	while (rev > 0)
	{
		ch = rev % 10 + '0';
		rev = rev / 10;
		_putchar(ch);
	}
	_putchar(last_digit);
}

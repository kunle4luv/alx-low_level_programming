#include "main.h"

/**
 * binary_to_uint - A function that converts binary numbers
 * to unsigned int
 * @b: pointer to binary numbers
 * Auth:Ayokunle Ajisafe
 * Return: converted number or 0 if otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	int rem, numb = 0, i = 0;
	unsigned int deci = 0;

	while (b[i] != '\0')
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		numb = numb * 10 + b[i] - '0';
		i++;
	}
	i = 0;
	while (numb)
	{
		rem = numb % 10;
		numb = numb / 10;
		deci = deci + (rem << i);
		i++;
	}
	return (deci);
}

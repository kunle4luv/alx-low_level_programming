#include "main.h"

/**
   * rev_string - A function that returns a string in reverse.
    * @s: string
     * Return: Nothing
      */

void rev_string(char *s)
{
	int i = 0;
	int j, k;
	int count;
	char str[*s];

	while (s[i] != '\0')
		i++;

	count = i;
	while (i > 0)
	{
		j = 0;
		while (j < i || j > i)
		{
			if (i < 0)
				break;
			str[j] = s[i - 1];
			j++;
			i--;
		}
	}
	k = 0;
	while (count > k)
	{
		s[k] = str[k];
		k++;
	}
	_putchar('\n');
}

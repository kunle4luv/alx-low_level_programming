#include <stdio.h>
#include <stdlib.h>

/**
 * Main - A program that adds positive number
 * followed by a new line.
 * @argc: The number of arguments supplied to the program
 * @argv: an array of pointer to d arguments
 *
 * Return: 1 If one of the number contains symbols that are not digits
 * and 0 if otherwise.
 */
int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}

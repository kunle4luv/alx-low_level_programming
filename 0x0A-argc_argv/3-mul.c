#include <stdio.h>
#include <stdlib.h>

/* main - A program that multiplies two numbers
 * followed by a new line.
 * @argc: The number of arguments supplied to the program
 * @argv: an array of pointer to d arguments
 *
 * Return: 0 - if the program recieves two arguments and
 *  1 if the program does not recieve two arguments.
 */
int main(int argc, char *argv[])
{
	int numX, numY, result;

	if (argc < 3)
	{
		printf("Error\n");
		return(1);
	}

	numX = atoi(argv[1]);
	numY = atoi(argv[2]);
	result = numX * numY;

	printf("%d\n", result);
	
	return(0);
}

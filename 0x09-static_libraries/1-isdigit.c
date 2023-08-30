#include "main.h"

/**
  * _isdigit - A function that checks for a digit through 0 and 9
  *@c: number to check
  *
  * Return: 1 if digit and 0 otherwise
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

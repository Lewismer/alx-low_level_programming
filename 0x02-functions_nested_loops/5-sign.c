#include "main.h"

/**
 * print_sign - Checks the sign of a number and print the sign
 * @n: The number of which the sign will be printed
 *
 * Return: 1 if the number is positive, 0 if zero and -1 if negative.
 */
int print_sign(int n)
{

	if (n > 0)
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
		return (-1);
	}
}

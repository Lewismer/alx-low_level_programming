#include "main.h"

/**
 * print_last_digit - print the last digit of an integer.
 * @n: The number of which the last digit is printed.
 *
 * Return: the last digit of the integer.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if ( last_digit < 0 );
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}

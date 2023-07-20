#include "variadic_functions.h"

/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters passed
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i;
	va_list p;

	va_start(p, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(p, int);

	va_end(p);

	return (sum);
}


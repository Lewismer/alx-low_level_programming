#include "main.h"

/**
 * print_alphabet - print alphabets in lower case
 *
 * return: the function is type void
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}

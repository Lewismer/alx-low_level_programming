#include "main.h"

/**
 * print_alphabet - print alphabets in lower case 10 times
 *
 * return: the function is type void
 */
void print_alphabet(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}

	_putchar('\n');
}

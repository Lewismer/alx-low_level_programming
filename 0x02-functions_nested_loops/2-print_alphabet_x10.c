#include "main.h"

/**
 * print_alphabet_x10 - print alphabets in lower case 10 times
 */
void print_alphabet_x10(void)
{
	int i, l;

	for (i = 0; i < 10; i++)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);

		_putchar('\n');
	}
}

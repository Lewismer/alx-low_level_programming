#include "main.h"

/**
 * times_table - print the times table from 0 to 9
 */
void times_table(void)
{
	int l, c, res;

	for (l = 0; l < 10; l++)
	{
		_putchar('0');
		for (c = 1; c < 10; c++)
		{
			res = l * c;
			if (c <= 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res > 9)
				_putchar((res / 10) + '0');
			else
				_putchar('0');
			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string to reversed
 */
void rev_string(char *s)
{
	int i = 0;
	int len = 0;

	while (s[i++] != '\0')
		len++;

	char temp_s[len+1];

	for (i = 0; i < len; i++)
		temp_s[i] = s[i];

	temp_s[i] = '\0';

	for (i = len - 1; i >= 0; i--)
		s[len - i - 1] = temp_s[i];

	_putchar('\n');
}

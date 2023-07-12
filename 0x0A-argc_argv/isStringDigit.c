#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * isStringDigit - fucntion that check is a string is a digit
 * @str: the string to be checked
 *
 * Return: 0 is the string is not digit, 1 if digit
*/

int isStringDigit(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

#include "main.h"
#include <stdio.h>

/**
 * _putchar - print string
 * @*message: the string to be printed
 */
void _putchar(char *message)
{	int i;
	while(message[i] != '\0')
	{
		putchar(message[i++]);
	}
}

#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: the string of which we calculate the length
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i++] != '\0')
		len++;

	return (len);

}

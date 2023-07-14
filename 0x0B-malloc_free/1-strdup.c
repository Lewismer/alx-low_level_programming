#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return:  Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
*/

char *_strdup(char *str)
{
	char *temp;
	unsigned int len = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		len++;

	temp = malloc(sizeof(char) * (len + 1));

	if (temp == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		temp[i] = str[i];

	temp[i] = '\0';
	return (temp);
}

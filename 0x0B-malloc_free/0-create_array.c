#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array -creates an array of chars
 *		and initializes it with a specific char.
 * @size: the size of the array
 * @c: the char to be filled in the array
 *
 * Return: NULL if the size is 0, the array if not
*/

char *create_array(unsigned int size, char c)
{
	char *memory;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	memory = malloc(sizeof(char) * size);

	if (memory == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		memory[i] = c;

	memory[i] = '\0';
	return (memory);
}

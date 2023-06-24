#include "main.h"

/**
 * _isalpha - Checks if a character is alphabet.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{

	if ((c <= 'z' && c >= 'a') || (c >= 'A' && c <= 'Z'))

		return (1);
	else
		return (0);

}

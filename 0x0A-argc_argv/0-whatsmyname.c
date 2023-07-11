#include <stdio.h>

/**
 * main - the entry point of this program
 * @argc: the number of arguments
 * @argv: the vector of arguments
 * Description:		this function aim to prints the name of the program file
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);

	return (0);
}

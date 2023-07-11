#include <stdio.h>

/**
 * main - the entry point of this program
 * @argc: the number of arguments
 * @argv: the vector of arguments
 * Description:		this program prints all the arguments of main
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

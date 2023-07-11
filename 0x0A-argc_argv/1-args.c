#include <stdio.h>

/**
 * main - the entry point of this program
 * @argc: the number of arguments
 * @argv: the vector of arguments
 * Description:		this program aim to prints the number of arguments
 *			passed into main function
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}

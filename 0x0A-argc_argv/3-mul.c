#include <stdio.h>
#include <stdlib.h>

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
	int result;

	if (argc > 1)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

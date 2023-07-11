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
	int a, b, result;

	if (argc > 1)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

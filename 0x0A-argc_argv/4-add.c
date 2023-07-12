#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

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
	int i, a, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isStringDigit(argv[i]))
			{

				a = atoi(argv[i]);
				sum += a;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	else
	{
		printf("0\n");
	}

	printf("%d\n", sum);

	return (0);
}

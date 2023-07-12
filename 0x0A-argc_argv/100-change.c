#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point of this program
 * @argc: the number of arguments
 * @argv: the vector of arguments
 * Description:		prints the minimum number of coins to make change
 *			for an amount of money
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i, amount, count = 0;
	int change[5] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		amount = atoi(argv[1]);

		if (amount >= 0)
		{
			i = 0;
			while (amount != 0)
			{
				if (amount / change[i] > 0)
				{
					count += amount / change[i];
					amount = amount % change[i];
				}
				else
					i++;
			}
			printf("%d\n", count);
		}
		else
		{
			 printf("0\n");
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

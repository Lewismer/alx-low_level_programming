#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/*
 * main -Entry point of the program
 *
 * Description : this function generate an integer random number
 * 		 and determines whether it's positive, zero or negative
 * 		 and prints corresponding message
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf(" the number %d is positive\n",n);
	}
	else
	{
		if(n==0)
		{
			printf("the number %d is zero\n",n);
		}
		else
		{
			printf("the number %d is negative\n",n);
	    	}
	}
		
	return (0);
}

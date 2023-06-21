#include "main.h"

 /**
  * main : check the code 
  *
  * Description:	This function serves to print _putchar
  *
  * Return: 0 on successful execution
 */
int main(void)
{
	int i = 0;
	char message[] = "_putchar";

	while (message[i] != '\0')
	{
		_putchar(message[i++]);
	}

	_putchar('\n');

	return (0);
}

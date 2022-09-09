#include <stdlib.h>
#include <time.h>
#include  <stdio.h>

/**
 * main - print if the number is posetive, zero or negative
 *
 * Description- using the main function
 * This program prints "programming is posetive, zero or negative
 * Return: 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
		/* your code goes here */
	if (n > 0)
	{
		printf ("%i is posetive\n", n);
	}
	else if (n==0)
	{
		printf ("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf ("%i is negative\n", n);
	}
return (0)	
}

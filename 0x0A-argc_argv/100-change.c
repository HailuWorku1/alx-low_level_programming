#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * coinConverter - Helper function that does all the mathematics
 * @i: Passed in variable from main for calculations
 * Return: The number of coins needed minimum for the passed in variable
 */
int main(int argc, char **argv)
{
	int a = 0; /* money */
	int b = 0; /* times */
	int c = 0; /* storage*/

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		putchar('0');
		putchar('\n');
		return (0);
	}
	b = a / 25;
	if (a % 25 != 0)
	{
		c = a % 25;
		b = b + c / 10;
		if (c % 10 != 0)
		{
			a = c % 10;
			b = b + a / 5;
			if (a % 5 != 0)
			{
				c = a % 5;
				b = b + c / 2;
				if (c % 2 != 0)
				{
					a = c % 2;
					b = b + a / 1;
				}
			}
		}
	}
	printf("%d\n", b);
	return (0);
}

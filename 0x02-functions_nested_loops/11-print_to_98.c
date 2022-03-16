#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: integer
 * Return: Void
 **/
void print_to_98(int n)
{
	int i = 98;

	if (n > i)
	{
		while (n >= i)
		{
			printf("%d", n);
			if (n > i)
			{
				putchar(',');
				putchar(' ');
			}
			n--;
		}
		putchar('\n');
	}
	else
	{
		while (n <= i)
		{
			printf("%d", n);
			if (n < i)
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		putchar('\n');
	}
}

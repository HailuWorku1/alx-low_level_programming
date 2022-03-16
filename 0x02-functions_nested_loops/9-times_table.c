#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 * Return: void
 **/

void times_table(void)
{
	int i = 0;
	int x = 0;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (x = 1; x <= 9; x++)
		{
			if (i * x > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(i * x / 10 + '0');
				_putchar(i * x % 10 + '0');
			}
			else if (i * x <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(i * x + '0');
			}
		}
		_putchar('\n');
	}
}

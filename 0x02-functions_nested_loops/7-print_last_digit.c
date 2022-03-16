#include "main.h"
/**
 *print_last_digit - print the last digit
 *@n: function
 *Return: valve 0
 */
int print_last_digit(int n)
{
int j;
j = (n % 10);
if (j < 0)
{
j = j * (-1);
}
_putchar(j + 48);
return (j);
}

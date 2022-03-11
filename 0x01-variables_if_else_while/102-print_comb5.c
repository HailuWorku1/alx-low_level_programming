#include <stdio.h>
/**
 *main - function
 *Return: valve 0
 */
int main(void)
{
    int a;
    int b;
    int c;
    int d;
    for (d = 0; d < 100; d++)
    {
      b = d / 10;
      c = d % 10;
      putchar(b + '0');
      putchar(c + '0');
      if (d < 99) 
      {
          putchar(' ');
      }
      for (a = 0; a < 100; a++)
      {
          b = a / 10;
          c = a % 10;
          putchar(b + '0');
          putchar(c + '0');
          if (a < 99) 
          {
              putchar(',');
              putchar(' ');
          }
      }
    }
    putchar('\n');
    return (0);
} 

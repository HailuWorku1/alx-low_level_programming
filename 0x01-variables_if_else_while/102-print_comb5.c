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
for (b = 0; b < 10; b++)
{
  for (a = 0; a < 10; a++)
  {
    
    putchar(b +'0');
    putchar(a +'0');
    putchar(' ');
    
  }
}
putchar('\n');
return (0);
} 

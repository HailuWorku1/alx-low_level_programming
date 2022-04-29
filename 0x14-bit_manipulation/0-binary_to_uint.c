#include "main.h"

unsigned int binary_to_uint(const char *b)
{
int i, j, x, c;
unsigned int n = 0;
if (b == NULL)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != 48 && b[i] != 49)
return (0);
}
j = 1;
for (c = i - 1; c >= 0; c--)
{
x = b[c] - '0';
x = x *j;
j = j * 2;
n = n + x;
}
return (n);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an array of chars,
* and initializes it with a specific char.
*
* @size: input size.
*
* @c: input character
*
* Return: a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;

ptr = malloc(sizeof(char) * size);
if (size == 0 || ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 *
 *
 */

int main(void)
{
	srand((unsigned int)(time(NULL)));

	int index = 0;
	char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789/,.-+=~`<>:";
	for(index = 0; index < 12; index++)
	{
		printf("%c", characters[rand() % (sizeof characters - 1)]);
	}
}

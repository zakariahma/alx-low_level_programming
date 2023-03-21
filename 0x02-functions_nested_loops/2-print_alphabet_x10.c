#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */

void print_alphabet(void)
{
        int i;
	int j;

	for (j = 1; j <= 10; j++)
	{
        	for (i = 97; i <= 122; i++)
		{
                	_putchar(i);
        		_putchar('\n');
		}
	}
}

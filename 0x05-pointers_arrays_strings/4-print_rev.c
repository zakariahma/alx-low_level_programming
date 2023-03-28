#include "main.h"

/**
* print_rev -> printing a string in reverse
* @s: the string to be printed in rev
*/

void	print_rev(char *s)
{
	int	i;
	int	n;

	n = 0;
	while (s[n] != '\0')
		n++;
	i = n - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

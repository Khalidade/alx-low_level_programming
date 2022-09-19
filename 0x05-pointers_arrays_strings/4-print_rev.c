#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: string to be reserved.
 */
void print_rev(char *s)
{
	int len = 0, i;

	while (*s != '\0')
	{
		len++;
	++s;
	}
	s--;

	for (i = len; i > 0; i--)
	{
		_putchar(*s);
	s--;
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, n = 0;

	while (s[n] != '\0')
		n++;
	for (i = n - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

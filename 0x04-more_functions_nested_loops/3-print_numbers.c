#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 */

void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
		_putchar(ch);
	_putchar('\n');
}

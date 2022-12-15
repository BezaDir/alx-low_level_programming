#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, and new line
 */

void more_numbers(void)
{
	char ch;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (ch = '0'; ch <= '14'; ch++)
		{
			_putchar('ch');
		}
	}
	_putchar('\n');
}

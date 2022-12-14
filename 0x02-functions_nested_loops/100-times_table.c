#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: number of time table (0 < n <= 15)
 */
void print_times_table(int n)
{
	int a, b, prod;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				prod = a * b;
				_putchar(',');
				_putchar(' ');
				if (prod <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + '0');
				}
				else if (prod <= 99)
				{
					_putchar(' ');
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
				else
				{
					_putchar(((prod / 100) % 10) + '0');
					_putchar(((prod / 10) % 10) + '0');
					_putchar((prod % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

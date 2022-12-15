#include "main.h"

/**
 * print_triangle -  prints a triangle, followed by a new line
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int i, j, z;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 1; j--)
			{
				_putchar(' ');
			}
			for (z = 0; z <= i; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

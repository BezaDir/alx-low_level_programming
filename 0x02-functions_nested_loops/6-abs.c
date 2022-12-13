#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @c: number
 * Return: absolute value of an integer
 */
int _abs(int c)
{
	if (c < 0)
		return (c * (-1));
	return (c);
}

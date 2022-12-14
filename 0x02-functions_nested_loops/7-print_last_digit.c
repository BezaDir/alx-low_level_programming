#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number
 * Return: last digit of a anumber
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (n < 0)
		ld = ld * -1;
	_putchar(ld + '0');
	return (ld);
}

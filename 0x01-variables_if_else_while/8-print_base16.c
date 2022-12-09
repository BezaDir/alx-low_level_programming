#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints hexadecimal numbers
 * Return: Always 0
 */
int main(void)
{
	char num;
	char hex;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');
	return (0);
}


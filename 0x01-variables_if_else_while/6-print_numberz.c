#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints all single digit numbers
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar (num % 10);
	putchar ('\n');
	return (0);
}

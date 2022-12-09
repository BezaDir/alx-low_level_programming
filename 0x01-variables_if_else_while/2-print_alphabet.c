#include <stdio.h>
/**
 *main - Entry point
 *Description: Prints lowercase alphabets
 *Return: Always 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

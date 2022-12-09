#include <stdio.h>
/**
 *main - Entry point
 *Description: Prints lowercase alphabets
 *Return: Always 0
 */
int main(void)
{
	for (char i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

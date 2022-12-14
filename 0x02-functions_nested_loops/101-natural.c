#include <stdio.h>
/**
 * main - Entry point
 * Description: prints natural number below 1024
 * i.e, multiples of 3 and 5
 * Return: 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 3; i < 1024; i += 3)
		sum += i;
	printf("%d\n", sum);
	return (0);
}

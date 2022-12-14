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

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}

#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of the number 612852475143
 * Return: 0
 */
int main(void)
{
	long i, largestf, num = 612852475143;
	double squareR = sqrt(num);

	for (i = 1; i <= squareR; i++)
	{
		if (num % i == 0)
		{
			largestf = num / i;
		}
	}
	printf("%ld\n", largestf);
	return (0);
}

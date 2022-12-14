#include <stdio.h>

/**
 * main - Entry point
 * Descriptiom : print the first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long int n1 = 0, n2 = 1, fn;
	int i;

	for (i = 1; i <= 98; i++)
	{
		fn = n1 + n2;
		if (i == 98)
			printf("%ld\n", fn);
		else
			printf("%ld, ", fn);
		n1 = n2;
		n2 = fn;
	}
	return (0);
}

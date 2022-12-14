#include <stdio.h>

/**
 * main - Entry point
 * Descriptiom : print the first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long int n1 = 1, n2 = 2, fn;
	int i;

	for (i = 3; i <= 98; i++)
	{
		fn = n1 + n2;
		if (i == 98)
			printf("%ld\n", fn);
		else
			printf("%ld, ", fn);
		n1 = n2;
		n2 = fn;
		fn = n1 + n2;
	}
	return (0);
}

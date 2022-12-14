#include <stdio.h>

/**
 * main - Entry point
 * Descriptiom : print the first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long int n1 = 1, n2 = 2;
	long int fn = n1 + n2;
	int count = 3;

	printf("%ld, ", n1);
	printf("%ld, ", n2);
	while (count <= 98)
	{
		if (count == 98)
			printf("%ld\n", fn);
		else
			printf("%ld, ", fn);
		n1 = n2;
		n2 = fn;
		fn = n1 + n2;
		count++;
	}
	return (0);
}

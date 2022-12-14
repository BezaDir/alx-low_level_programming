#include <stdio.h>
/**
 * main - Entry point
 * Description: print the first 50 fibonacci nums
 * Return: 0
 */
int main(void)
{
	int count = 3;
	long int n1 = 1, n2 = 2;
	long int fn = n1 + n2;

	printf("%ld, %ld, " n1, n2);
	while (count <= 50)
	{
		if (count == 50)
			printf("%ld\n", fn);
		else
			printf("%ld, ", fn);
		n1 = n2;
		n2 = fn;
		fn = n1 + n2;
		count++;
	}
	printf("\n");
	return (0);
}

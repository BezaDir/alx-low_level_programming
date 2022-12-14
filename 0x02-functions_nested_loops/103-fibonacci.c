#include <stdio.h>

/**
 * main - main block
 * Description: prints the sum of the even-valued fibonacci nums
 * Return: 0
 */
int main(void)
{
	long int n1 = 1, n2 = 2, fn = 0, sfn = 0;

	while (fn <= 4000000)
	{
		fn = n1 + n2;
		n1 = n2;
		n2 = fn;
		if ((n1 % 2) == 0)
		{
			sfn += n1;
		}
		printf("%ld\n", sfn);
		return (0);
	}

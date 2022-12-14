#include <stdio.h>
/**
 * main - Entry point
 * Description: print the first 50 fibonacci nums
 * Return: 0
 */
int main(void)
{
	int count = 3;
	int first = 1, second = 2;
	int next = first + second;

	printf("%d, ", first);
	printf("%d, ", second);
	while (count <= 50)
	{
		if (count == 50)
			printf("%d\n", next);
		else
			printf("%d, ", next);
		first = second;
		second = next;
		next = first + second;
		count++;
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min num of coins to make change for an amount of money
 * @argc: number of cmmand line arguments
 * @argv: array that contains the program command line argumets
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num, ncoins = 0, i;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= cents[i])
		{
			ncoins += 1;
		}
	}
	printf("%d\n", ncoins);
	return (0);
}

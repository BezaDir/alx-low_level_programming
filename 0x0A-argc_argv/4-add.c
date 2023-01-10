#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check the string ifit has digit
 * @s: array
 * Return: 0 (success)
 */
int check_num(char *s)
{
	unsigned int count;

	count =  0;
	while (count < strlen(s))
	{
		if (!isdigit(s[count]))
			return (0);
		count++;
	}
	return (1);
}

/**
 * main - Prints the sum of args positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0, j;

	i = 1;
	while (i < argc)
	{
		if (check_num(argv[i]))
		{
			j = atoi(argv[i]);
			sum += j;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

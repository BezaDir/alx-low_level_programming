#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible combinations of two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int num1, num2, num3, num4;

	for (num1 = 0; num1 < 99; num1++)
	{
		for (num2 = num1 + 1; num2 < 100; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 + num2 < 197)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

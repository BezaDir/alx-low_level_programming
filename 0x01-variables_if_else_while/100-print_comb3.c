#include <stdio.h>
/**
 * main - main block
 * Description: prints all possible combinations of two digits
 * Return: 0
 */
int main(void)
{
	char num1;
	char num2;

	for (num1 = '0'; num1 < '9'; num1++)
	{
		for (num2 = num1 + 1; num2 <= '9'; num2++)
		{
			putchar(num1);
			putchar(num2);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

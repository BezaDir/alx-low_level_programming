#include <stdlib.h>
#include <time.h>
/**
 *main -Entry point
 *Description: Prints if the number is positive,negative or zero
 *Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RANDMAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}

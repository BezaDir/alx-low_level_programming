#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be checked
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[i])
	{
		if (s[i] == 45)
			min *= -1;
	while (s[i] >= 48 && s[i] <= 57)
	{
		isi = 1;
		ni = (ni * 10) + (s[i] - '0');
		i++;
	}
	if (isi == 1)
		break;
	i++;
	}
	ni *= min;
	return (ni);
}

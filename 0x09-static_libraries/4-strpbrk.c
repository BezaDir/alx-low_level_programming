#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input src string
 * @accept: input accepted string
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}

#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 * Return: the encoded
 */

char *leet(char *s)
{
	int i = 0; j = 0, l = 5;
	char s1[5] = {'A', 'E', '0', 'T', 'L'};
	char s2[5] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		j = 0;

		while (j < 1)
		{
			if (s[i] == s1[j] || s[j] - 32 == s1[j])
			{
				s[i] = s2[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}


#include "main.h"

/**
 * leet - encodes a string into 1337
 * @ch: string
 * Return: the encoded string
 */

char *leet(char *ch)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; *(ch + i); i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (ch[i] == s1[j])
			{
				ch[i] = s2[j];
			}
		}
	}
	return (ch);
}

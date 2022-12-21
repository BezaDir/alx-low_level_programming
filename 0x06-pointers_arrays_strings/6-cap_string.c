#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: char value
 */

char *cap_string(char *s)
{
	int i = 0, a = 0;
	int lsep = 13;
	char sep[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		while (i < lsep)
		{
			if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
			{
				s[a] -= 32;
			}
			i++;
		}
		a++;
	}
	return (s);
}

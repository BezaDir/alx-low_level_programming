#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - convert the params passed to the program to string
 * @ac: the argument count
 * @av: the argument vector
 * Return: Pointer to the new string (Success), NULL (Error)
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	return (s);
}

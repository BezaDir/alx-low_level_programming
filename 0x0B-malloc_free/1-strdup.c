#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string
 * @str: the string to duplicate
 * Return: the string duplicated
 */
char *_strdup(char *str)
{
	unsigned int i, len;
	char *s;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len])
		len++;
	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
		return (NULL);

	i = 0;
	while ((s[i] = str[i]) != '\0')
		i++;
	return (s);
}

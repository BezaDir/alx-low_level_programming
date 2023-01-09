#include "main.h"

/**
 * _strncat - concatenate two strings with n bytes
 * @dest: destination
 * @src: source
 * @n: the length of concatenations
 * Return: pointer to the resulting string des
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

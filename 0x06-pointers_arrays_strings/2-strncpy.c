#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of char to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int p;

	for (p = 0; p < n && *(src + p); p++)
	{
		*(dest + p) = *(src + p);
	}
	for (; p  < n; p++)
	{
		*(dest + p) = '\0';
	}
	return (dest);
}

#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to check
 * Return: string length
 */

int _strlen(char *s)
{
	int ch = 0;

	for (; *s != '\0'; s++)
		ch++;
	return (ch);
}

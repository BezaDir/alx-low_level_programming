#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: the character
 * Return: 1 if c is a letter, or 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' || c <= 'Z') || (c == ' '))
		return (1);
	return (0);
}

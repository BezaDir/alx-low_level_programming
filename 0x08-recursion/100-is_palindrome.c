#include "main.h"
#include <stdio.h>

int check_palindrome(char *s);

/**
 * is_palindrome - Returns if a string is palindrome
 * @s: the string value to be checked
 * Return: integer value
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int count = 0;

	return (check_palindrome(s, len - 1, count));
}
/**
 * check_palindrome - Check if a string is palindrome
 *  @s: the string value to be checked
 *  Return: 1 or 0
 */
int check_palindrome(char *s)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (check_palindrome(str, len - 1, count + 1));
	return (0);
}
/**
 * _strlen_recursion - Get the length of a string
 * @s: the string to get the length
 * Return: the string length
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}

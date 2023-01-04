#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: the value to mdodify (double pointer)
 * @to: the value to assign (pointer char)
 */
void set_string(char **s, char *to)
{
	*s = to;
}

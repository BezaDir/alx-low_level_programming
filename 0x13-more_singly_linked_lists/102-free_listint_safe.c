#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp = NULL;
	size_t i = 0;

	if (h == NULL)
		return (0);
	if (*h == NULL)
		return (0);

	tmp = *h;

	while (tmp != NULL)
	{
		i++;
		tmp = (*h)->next;
		free(*h);
		if (tmp >= *h)
		{
			*h = NULL;
			return (i);
		}
		*h = tmp;
	}
	return (i);
}

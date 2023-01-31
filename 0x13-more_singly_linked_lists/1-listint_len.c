#include "lists.h"

/**
 * listint_len - Counts the elements in a linked list
 * @h: The head of the linked list
 *
 * Return: The number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t cont = 0;

	for (; h != NULL; cont++)
	{
		h = h->next;
	}
	return (cont);
}

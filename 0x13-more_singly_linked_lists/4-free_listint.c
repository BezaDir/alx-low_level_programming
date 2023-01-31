#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: listint_t list to be free
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}

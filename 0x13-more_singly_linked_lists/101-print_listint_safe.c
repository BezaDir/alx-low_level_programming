#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *temp;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		temp = head;
		head = head->next;
		i++;
		if (temp <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (i);
}

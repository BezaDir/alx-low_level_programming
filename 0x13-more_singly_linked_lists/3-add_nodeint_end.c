#include "lists.h"

/**
 * add_nodeint_end - Adds a new node to the end of a linked list
 * @head: The head of the linked list
 * @n: The value to add to the end of the linked list
 *
 * Return: The address of the new element, or NULL it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
	return (temp);
}

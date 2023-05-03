#include "lists.h"

/**
 * get_nodeint_at_index - finds the node at a given index in a linked list
 * @head: pointer to the first node in the list
 * @index: index of the node to find
 *
 * Return: pointer to the node at the given index, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	return (current == NULL ? NULL : current);
}


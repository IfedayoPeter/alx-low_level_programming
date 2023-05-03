#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: double pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (i < index && current != NULL)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}


#include "lists.h"

/**
 * free_listint_safe - Frees a linked list.
 * @h: A pointer to a pointer to the first node in the list.
 *
 * Return: The number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp = NULL;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		if (*h > (*h)->next)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	return (count);
}


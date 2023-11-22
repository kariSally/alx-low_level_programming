#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes a node at given position
 * @head: pointer to head pointer
 * @index: index to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pointr, *prev;
	unsigned int a = 0;

	if (!head)
		return (-1);
	pointr = *head;
	prev = NULL;
	while (pointr)
	{
		if (a == index)
		{
			if (!prev)
				*head = pointr->next;
			else
				prev->next = pointr->next;
			free(pointr);
			return (1);
		}
		prev = pointr;
		pointr = pointr->next;
		a++;
	}
	return (-1);
}

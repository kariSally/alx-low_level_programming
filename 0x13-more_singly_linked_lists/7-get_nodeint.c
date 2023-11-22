#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a listint_t linked list
 * @head: head pointer
 * @index: index of the node
 *
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *pointr = head;
	unsigned int a = 0;

	while (pointr)
	{
		if (a == index)
			return (pointr);
		pointr = pointr->next;
		a++;
	}
	return (NULL);
}

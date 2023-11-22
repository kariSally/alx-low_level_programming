#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts new node at a given position
 * @head: pointer to head pointer
 * @idx: index to be inserted at
 * @n: data of the new node
 *
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *pointr, *prev, *nNode;
	unsigned int a = 0;

	if (!head)
		return (NULL);
	pointr = *head;
	prev = NULL;
	nNode = malloc(sizeof(*nNode));
	if (nNode == NULL)
		return (NULL);
	nNode->n = n;
	nNode->next = NULL;
	if (!pointr && idx == 0)
	{
		*head = nNode;
		return (nNode);
	}
	while (pointr)
	{
		if (a == idx)
		{
			if (!prv)
				*head = nNode;
			else
				prev->next = nNode;
			nNode->next = pointr;
			return (nNode);
		}
		prev = pointr;
		pontr = pointr->next;
		a++;
	}
	if (a == idx)
	{
		prev->next = nNode;
		return (nNode);
	}
	free(nNode);
	return (NULL);
}

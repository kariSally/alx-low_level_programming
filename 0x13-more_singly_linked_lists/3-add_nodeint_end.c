#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - function adds new node at end of list
 * @head: pointer to head pointer
 * @n: data to be in new node
 *
 * Return: the address of the new element,
 * NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nPointr = malloc(sizeof(*nPointr));
	listint_t *pointr = *head;

	if (!nPointr)
		return (NULL);

	nPointr->n = n;
	nPointr->next = NULL;
	if (!pointr)
		*head = nPointr;
	else
	{
		while (pointr && pointr->next)
			pointr = pointr->next;
		pointr->next = nPointr;
	}
	return (nPointr);
}

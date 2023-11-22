#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - function adds new node at start of list
 * @head: pointer to head pointer
 * @n: data to be in new node
 *
 * Return: address of the new element,
 * NULL if  fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nPointr = malloc(sizeof(*nPointr));

	if (!nPointr)
		return (NULL);

	nPointr->n = n;
	nPointr->next = *head;
	*head = nPointr;
	return (nPointr);
}

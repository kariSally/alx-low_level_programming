#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function deletes head node of listint_t linked list
 * @head: pointer to head pointer
 *
 * Return: the head node’s data (a)
 */
int pop_listint(listint_t **head)
{
	listint_t *pointr = *head;
	int a;

	if (!pointr)
		return (0);

	*head = pointr->next;
	a = pointr->a;
	free(pointr);
	return (a);
}

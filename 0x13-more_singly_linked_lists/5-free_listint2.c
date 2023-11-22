#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - function frees a listint_t list
 * @head: pointer to head pointer
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *pointr, *cur;

	if (!head)
		return;

	pointr = *head;
	cur = *head;
	while (pointr)
	{
		pointr = pointr->next;
		free(cur);
		cur = pointr;
	}
	*head = NULL;
}

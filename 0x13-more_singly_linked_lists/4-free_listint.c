#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - function frees a listint_t list
 * @head: head pointer
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *pointr = head, *cur = head;

	while (pointr)
	{
		pointr = pointr->next;
		free(cur);
		cur = pointr;
	}
}

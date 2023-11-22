#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - function finds loop in a linked list
 * @head: head pointer
 *
 * Return: address of the node where the loop starts
 * Or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pointr = head, *pointr_f = head;

	while (pointr)
	{
		pointr = pointr->next;
		if (pointr_f && pointr_f->next)
		{
			pointr_f = pointr_f->next->next;
			if (pointr == pointr_f)
			{
				pointr = head;
				while (pointr != pointr_f)
					pointr = pointr->next, pointr_f = pointr_f->next;
				return (pointr);
			}
		}
	}
	return (NULL);
}

#include "lists.h"

/**
 * print_listint_safe - function prints a linked list (safe version)
 * @head: head pointer
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t a = 0;
	const listint_t *pointr = head, *pointr_f = head;
	int b = 0;

	while (pointr)
	{
		if (pointr_f && pointr_f->next)
		{
			pointr_f = pointr_f->next->next;
			b = 1;
		}
		printf("[%p] %i\n", (void *)pointr, pointr->n);
		pointr = pointr->next;
		if (b && pointr == pointr_f)
		{
			pointr = head;
			while (pointr != pointr_f)
			{
				printf("[%p] %i\n", (void *)pointr_f, pointr_f->n);
				pointr = pointr->next, pointr_f = pointr_f->next, i++;
			}
			printf("-> [%p] %i\n", (void *)pointr, pointr->n);
			return (a);
		}
		b = 0;
		a++;
	}
	return (a);
}

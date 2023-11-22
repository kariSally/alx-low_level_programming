#include "lists.h"

/**
 * print_listint - function outputs all the elements of listint_t list
 * @h: head pointer
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *pointr = h;
	int a = 0;

	while (ptr)
	{
		printf("%i\n", pointr->n);
		pointr = pointr->next;
		a++;
	}
	return (a);
}

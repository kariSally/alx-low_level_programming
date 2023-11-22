#include "lists.h"

/**
 * sum_listint - function gets sum of all the data (n)
 * @head: head pointer
 *
 * Return: sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	listint_t *pointr = head;
	int sum = 0;

	while (pointr)
	{
		sum += pointr->n;
		ptr = pointr->next;
	}
	return (sum);
}

#include "lists.h"

/**
 * free_listint_safe - function frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t numb = 0;
	listint_t *temp;
	int a;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		a = *h - (*h)->next;
		if (a > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			numb++;
		}
		else
		{
			free(*h);
			*h = NULL;
			numb++;
			break;
		}
	}

	*h = NULL;

	return (numb);
}

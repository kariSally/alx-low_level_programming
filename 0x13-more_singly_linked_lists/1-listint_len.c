#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function computes number of elements in linked list
 * @h: head pointer
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *pointr = h;
	int a = 0;

	while (pointr)
	{
		pointr = pointr->next;
		a++;
	}
	return (a);
}

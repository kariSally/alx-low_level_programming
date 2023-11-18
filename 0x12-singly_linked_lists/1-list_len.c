#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that computes num of elements in a linked list
 * @h: head pointer
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	int a = 0;

	while (ptr)
	{
		ptr = ptr->next;
		a++;
	}
	return (a);
}

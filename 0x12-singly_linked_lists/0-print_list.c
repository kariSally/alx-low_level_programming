#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all elements of a list_t list
 * @h: head pointer
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	int a = 0;

	while (ptr)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		a++;
	}
	return (a);
}

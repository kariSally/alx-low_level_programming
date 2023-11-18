#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - function that adds new node at end of a list
 * @head: pointer to head pointer
 * @str: data to be in new node
 *
 * Return: address of the new element
 * or NULL if fail occurs
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nPtr = malloc(sizeof(*nPtr));
	list_t *ptr = *head;

	if (!nPtr)
		return (NULL);
	if (!str)
	{
		nPtr->str = NULL;
		nPtr->len = 0;
	}
	else
	{
		nPtr->str = strdup(str);
		if (nPtr->str == NULL)
		{
			free(nPtr);
			return (NULL);
		}
		nPtr->len = strlen(str);
	}
	nPtr->next = NULL;
	if (!ptr)
		*head = nPtr;
	else
	{
		while (ptr && ptr->next)
			ptr = ptr->next;
		ptr->next = nPtr;
	}
	return (nPtr);
}

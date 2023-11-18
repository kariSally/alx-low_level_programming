#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - function that adds new node at beginning of a list
 * @head: pointer to head pointer
 * @str: data to be in new node
 *
 * Return: the address of the new element
 * or NULL if it fail occurs
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nPtr = malloc(sizeof(*nPtr));

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
	nPtr->next = *head;
	*head = nPtr;
	return (nPtr);
}

#include<stdlib.h>
#include"lists.h"

/**
 *add_nodeint - add node at beginnig of a linked list
 *@head : pointer
 *@n : value
 * Return : node
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *New;
	New = malloc(sizeof(listint_t));
	if (New == NULL)
		return (NULL);
	New->n = n;
	New->next = *head;
*head = New;
	return (New);
}


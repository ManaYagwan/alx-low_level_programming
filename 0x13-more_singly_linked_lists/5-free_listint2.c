#include<stdlib.h>
#include"lists.h"

/**
 * free_listint2 - function to free node
 * @head : pointer
 * Return : null
 */



void free_listint2(listint_t **head)
{
	listint_t *nextnode;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		nextnode = (*head)->next;
		free(*head);
		*head = nextnode;
	}
}

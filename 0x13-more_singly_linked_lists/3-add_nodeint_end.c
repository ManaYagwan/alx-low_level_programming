#include<stdlib.h>
#include"lists.h"

/**
 * add_nodeint_end - add node to the end of linked list
 *@head : pointer
 *@n : value
 *Return : null
 */



listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *End;
	listint_t *tmp;

	tmp = *head;

	End = malloc(sizeof(listint_t));
	if (End == NULL)
		return (NULL);

	End->n = n;
	End->next = NULL;

	if (*head == NULL)
	{
		*head = End;
		return (End);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = End;
	return (End);
}

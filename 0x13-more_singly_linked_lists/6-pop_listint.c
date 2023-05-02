#include<stdlib.h>
#include"lists.h"

/**
 * pop_listint - delete node nd return (n)
 *@head : pointer
 * Return : null
 */



int pop_listint(listint_t **head)
{
	listint_t *alx;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	alx = *head;
	*head = alx->next;
	n = alx->n;
	free(alx);
	return (n);
}

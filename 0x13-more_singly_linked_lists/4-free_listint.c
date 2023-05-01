#include<stdlib.h>
#include"lists.h"

/**
 * free_listint - free node
 * @head : pointer
 *Return : 0
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

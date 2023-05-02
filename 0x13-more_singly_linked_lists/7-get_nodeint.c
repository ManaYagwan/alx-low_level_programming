#include<stdlib.h>
#include"lists.h"
/**
 * get_nodeint_at_index - function name function that
 * @head :pointer
 * @index : int
 * Return : null
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int alx;


	if (head == NULL)
		return (NULL);
	for (alx = 0; alx < index; alx++)
	{
			head = head->next;
			if (head == NULL)
				return (NULL);
	}
	return (head);
}

#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints elements
 *
 * @h: pointer
 * Return: number of element
 */

size_t print_listint(const listint_t *h)
{
	int co = 0;
	
	if (h == NULL)
		printf("empty list 😥😥");
	while (h != NULL)
	{
	    	 printf("%d \n", h->n);
	
		h = h->next;
		co += 1;
	}
	return (co);
}

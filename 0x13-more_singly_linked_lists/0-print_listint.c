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
	size_t co = 0;
	
	while (h != NULL)
	{
	    	 printf("%d \n", h->n);
	
		h = h->next;
		co++;
	}
	return (co);
}

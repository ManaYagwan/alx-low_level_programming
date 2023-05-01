#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * print_listint - name of function
 * @h: integer value
 *
 * Return: 0
 */



size_t print_listint(const listint_t *h)
{
	int ct = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		ct++;
		h = h->next;
	}
	return (ct);
}

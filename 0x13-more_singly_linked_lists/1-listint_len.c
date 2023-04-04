#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function that print lenght
 * @h: pointer
 *
 * Return: number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t co = 0;

	while (h != NULL)
	{
		co += 1;
		h = h->next;
	}
	return (co);
}

#include<stddef.h>
#include<stdio.h>
#include"lists.h"
/**
 * listint_len - function name
 * @h: pointer to nobe
 * Return: numb of element
 */

size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h != NULL)
	{
		numb++;
		h = h->next;
	}
	return (numb);
}

#ifndef LISTS_H
#define LISTS_H
 /**
  * struct listint_s - singy linked list
  * @n: integer
  * @next: pointer
  *
  * Description: singy linked list node structure
  *
  */

typedef struct listint_s 
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);


#endif

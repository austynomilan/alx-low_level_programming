#include "lists.h"

size_t print_listint(const listint_t *h)
{

	size_t y = 0;

	while (h)
	{
		printf("%d\n", h->n);
		y++;
		h = h->next;
	}
	
	return (y);
}





#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the element of a listint_t list
 * @h: a pointer to the listint_t list
 *
 * Return: the number of nodes in the listint_t list
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}

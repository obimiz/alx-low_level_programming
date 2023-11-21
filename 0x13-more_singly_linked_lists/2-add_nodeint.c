#include "lists.h"

/**
 * add_nodeint - adds a new node at the begining
 * @head: a pointer to the address
 * @n: the integer to the new node to contain
 *
 * Return: if the function fails - NULL
 * otherwise - the address to the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}

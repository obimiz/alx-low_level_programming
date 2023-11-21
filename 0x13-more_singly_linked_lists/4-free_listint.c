#include "lists.h"
/**
 * free_listint - frees a list int_t list
 * @head: a pointer to the head of the listint_t
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

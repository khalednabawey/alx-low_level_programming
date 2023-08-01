#include "lists.h"

/**
 * free_listint - free's a linked list.
 *
 * @head: listint_t lists to be freed.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}

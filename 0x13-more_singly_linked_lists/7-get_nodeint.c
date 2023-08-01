#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of listint_t list
 *
 * @head: pointer to the head node.
 * @index: index to get.
 *
 * Return: listint_t *pointer to the specified node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i = 0;
	listint_t *t = head;

	while (t && i <= index)
	{
		if (i == index)
			return (t);
		t = t->next;
		i++;
	}
	return (NULL);
}

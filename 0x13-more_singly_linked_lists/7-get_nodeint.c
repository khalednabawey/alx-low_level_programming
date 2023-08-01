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
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}

#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * listint_len -> function that prints all the elements of a listint_t list.
 *
 * @h: header pointer.
 *
 * Return: size_t of the list.
 */
size_t listint_len(const listint_t *h)
{
	int size;

	size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list -> function that prints all the elements of a list_t list.
 *
 * @h: head pointer.
 *
 * Return: size_t of the list.
 */
size_t print_list(const list_t *h)
{
	int size = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		size++;
		h = h->next;
	}
	return (size);
}

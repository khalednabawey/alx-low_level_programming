#include "lists.h"
#include <stdio.h>
#include<stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list -> function that prints all the elements of a list_t list.
 *
 * @h: head pointer.
 *
 * Return: size_t of the list.
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;
	list_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		size++;
		ptr = ptr->next;
	}
	return (size);
}

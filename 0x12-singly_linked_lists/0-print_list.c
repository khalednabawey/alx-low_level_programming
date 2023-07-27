#include "main.h"
#include<stdio.h>
#include<stddef.h>
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

	if (h == NULL)
		printf("[0] (nil)");
	ptr = h;
	while (ptr != NULL)
	{
		size += 1;
		ptr = ptr->next;
	}
	return (size);
}

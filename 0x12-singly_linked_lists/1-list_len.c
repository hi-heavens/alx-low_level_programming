#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements in a list
 * @h: head of the list
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t n;

	n = 0;
	temp = h;
	while (temp != 0)
	{
		temp = temp->next;
		n++;
	}
	return (n);
}

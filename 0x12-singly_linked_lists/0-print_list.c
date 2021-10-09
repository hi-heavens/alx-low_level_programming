#include "lists.h"
#include <stdio.h>

/**
 * print_list- print all the elements of a list
 * @h: the head of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t n;

	n = 0;
	temp = h;

	while (temp != 0)
	{
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		n++;
	}
	return (n);
}

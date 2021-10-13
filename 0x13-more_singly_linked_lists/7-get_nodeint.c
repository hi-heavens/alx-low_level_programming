#include "lists.h"
/**
* get_nodeint_at_index - Entry point
* Description - A function that returns the nth node
* of a listint_t linked list
* *@head: the function accepts an input saved into head
* *@index: the function accepts an input saved into index
* Return: Nothing for now
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}

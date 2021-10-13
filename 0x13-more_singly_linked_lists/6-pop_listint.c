#include "lists.h"
/**
* pop_listint - Entry point
* Description - A function that deletes the head node
* of a listint_t linked list...
* *@head: the function accepts an input saved into head
* Return: Success (0)
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}

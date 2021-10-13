#include "lists.h"
/**
* reverse_listint - Entry point
* Description - A function that reverses a listint_t linked list
* *@head: the function accepts an input saved into head
* Return: Nothing the head pointer
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *copy;
	listint_t *temp;

	if (*head == NULL)
		return (NULL);

	copy = *head;
	temp = NULL;

	while (*head != NULL)
	{
		copy = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = copy;
	}

	*head = temp;
	return (*head);
}

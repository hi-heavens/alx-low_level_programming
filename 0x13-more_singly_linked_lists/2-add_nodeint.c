#include "lists.h"
/**
* add_nodeint - Entry point
* Description - A function that adds a new node at
* the beginning of a listint_t list
* *@head: the function accepts an input saved into head
* *@n: the function accepts an input saved into n
* Return: Success (0)
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}

#include "lists.h"
/**
* free_listint - Entry point
* Description - A function that frees a listint_t list
* *@head: the function accepts an input saved into head
* Return: Success (0)
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

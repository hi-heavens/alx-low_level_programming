#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node - add a new node at the beginning of `list_t` list
 * @head: double pointer to head
 * @str: string to be saved in new node, must be duplicated
 * Return: Address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dup_str;
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	dup_str = strdup(str);

	new->str = dup_str;

	if (dup_str == NULL)
	{
		free(NULL);
		return (NULL);
	}

	new->len = len;
	new->next = *head;
	*head = new;

	return (*head);
}

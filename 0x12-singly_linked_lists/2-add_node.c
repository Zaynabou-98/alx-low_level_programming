#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: head
 * @str: new string 
 *
 * Return:  NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->len = strlen(str);
	new->str = strdup(str);
	new->next = (*head);
	(*head) = new;

	return (*head);
}

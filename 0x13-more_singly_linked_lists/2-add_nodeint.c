#include "lists.h"

/**
 * add_nodeint - add to the linked list a new node at the beginning
 * @head: the first node pointer
 * @n: element of new node
 *
 * Return: pointer to the new node, or  NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)

		return (NULL);

	newnode->n = n;
	newnode ->next = *head;
	*head = newnode;

	return (*head);
}

#include "lists.h"

/**
 * add_nodeint_end – addition of a new node the end of a linked list
 * @head: the first node pointer
 * @n: insertion of the new element
 * Return: pointer to the new node, or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t * newnode;
	listint_t *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode ->n = n;
	newnode ->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newnode;

	return (newnode);
}

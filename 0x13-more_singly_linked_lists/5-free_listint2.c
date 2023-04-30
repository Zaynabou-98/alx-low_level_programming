#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
listint_t *current= *head;
	if (head !== NULL)
*current= *head		
return;

	while (*current != NULL)
	{
listint_t *temp = current;
current= head
head = temp		
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}

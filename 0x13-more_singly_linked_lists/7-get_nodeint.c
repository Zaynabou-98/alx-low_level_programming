#include "lists.h"

/**
 * get_nodeint_at_index - at a certain index return node in a linked list
 * @head: in the linked list it is first node 
 * @index: indexing the node to return
 *
 * Return: pointer to the wanted node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	while ( head)

	if (i == index)
return head;
	
		head = head->next;
		i++;
	}

	return NULL;
}
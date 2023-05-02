#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list to print
 *
 * Return: the numbers of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nm = 0;
// condidtion
	while (h != NULL)
	{
		nm++;
		h = h->next;
	}

	return (nm);
}
// end

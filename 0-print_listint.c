#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list to print
 *
 * Return: the numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nm = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nm++;
		h = h->next;
	}

	return (nm);
}

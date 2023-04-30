#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h:linked list to printf
 *
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
        size_t nm = 0;

        while (h != NULL)
        {
                printf("%d\n", h->n);
                h = h->next;
                nm++;
                }
        return (nm);
        }

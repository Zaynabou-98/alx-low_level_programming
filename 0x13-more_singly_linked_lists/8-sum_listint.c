#include "lists.h"

/**
 * sum_listint – the calcul of the sum of  the whole data in the listint_t list
 * @head: first node in the linked list
 *
 * Return: the result of the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

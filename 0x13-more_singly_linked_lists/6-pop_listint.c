#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: the first pointer element in the linked list
 *
 * Return: deleted the  inside the elements 
 * or 0 ifor an empty list	
 */
int pop_listint(listint_t **head)
{
        listint_t *temp;
        int nm;

        if (!head || !*head)
                return (0);

        nm = (*head)->n;
        temp = (*head)->next;
        free(*head);
        *head = temp;

        return (nm);
}


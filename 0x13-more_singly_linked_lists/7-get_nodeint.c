#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: first node in the listint_t linked list
 * @index: index of the node
 * Return: the nth node of the linked list or 0 if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;
	listint_t *tem = head;

	x = 0;

	while (tem && x < index)
	{
		tem = tem->next;
		x++;
	}
	return (tem ? tem : NULL);
}

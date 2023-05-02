#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked list
 * @head: pointer to the first element in the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tem;
	listint_t *c;
	unsigned int x;

	x = 0;
	*tem = *head;
	*c = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tem);
		return (1);
	}
	while (x < index - 1)
	{
		if (!tem || !(tem->next))
			return (-1);
		tem = tem->next;
		x++;
	}

	c = tem->next;
	tem->next = c->next;
	free(c);
	return (1);
}

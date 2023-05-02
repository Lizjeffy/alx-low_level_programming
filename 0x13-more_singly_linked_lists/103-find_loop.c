#include "lists.h"

/**
 * *find_listint_loop - finds the loop in a linked list
 * @head: pointer to the linked list
 * Return: the address of the node where the loop starts or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	size_t length = 0;
	int d;
	listint_t *tem;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			tem = (*h)->next;
			free(*h);
			*h = tem;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}

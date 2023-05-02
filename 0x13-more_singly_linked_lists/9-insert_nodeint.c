#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node in the list
 * @idx: index of the list where the new node should be added
 * @n: data to input in the new node
 * Return: address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new_node;
	listint_t *tem = *head;

	x = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (tem && x < idx)
	{
		if (x == idx - 1)
		{
			new_node->next = tem->next;
			tem->next = new_node;
			return (new_node);
		}
		else
		{
			tem = tem->next;
		}
	}
	x++;

	return (NULL);
}

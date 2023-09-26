#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -Inserts a new node at a given position in a list
 * @head: Pointer to a pointer to the head of the list
 * @idx: Index where the new node should be inserted
 * @n: Value to be stored in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	/* Create a new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	/* If index is 0, update head and return new_node */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	/* Traverse the list until reaching the index or the end */
	for (i = 0; current != NULL && i < idx - 1; i++)
		current = current->next;
	/* If the index is out of range, free the new node and return NULL */
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* Insert the new node */
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}

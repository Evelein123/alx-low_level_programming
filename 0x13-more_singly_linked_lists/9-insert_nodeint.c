#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node
 * at a given position in a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @idx: The index of the list where
 * the new node should be added. Index starts at 0.
 * @n: The value to be added to the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
		return (add_nodeint(head, n));
	current_node = *head;
	while (current_node != NULL && count < idx - 1)
	{
		current_node = current_node->next;
		count++;
	}
	if (current_node == NULL || current_node->next == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}

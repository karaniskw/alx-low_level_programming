#include "lists.h"

/**
 * add_nodeint -helps adds a new node at the beginning of a linked list
 * @head:this is a pointer to the first node in the list
 * @n: data to be inserted in that new node
 *
 * Return:this is the pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int p)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->p = p;
	new->next = *head;
	*head = new;

	return (new);
}


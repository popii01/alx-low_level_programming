#include "lists.h"

/**
 * add_node_to_end - adds a node at the end of a linked list
 * @list_head: pointer to the first element in the list
 * @data: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_node_to_end(listint_t **list_head, const int data)
{
listint_t *new_node;
listint_t *temp = *list_head;

new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);

new_node->n = data;
new_node->next = NULL;
if (*list_head == NULL)
{
*list_head = new_node;
return (new_node);
}

while (temp->next)
temp = temp->next;
temp->next = new_node;
return (new_node);
}

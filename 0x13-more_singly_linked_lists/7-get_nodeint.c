#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
{
unsigned int i;
listint_t *current = head;/*init ptr to head*/

for (i = 0; i < index && current != NULL; i++)/*traversing throught the list*/
{
current = current->next;/*moving to the next node*/
}
if (current == NULL)
{
return (NULL);
}
return (current);
}

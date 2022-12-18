#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to list
 * @str: string to add in the node
 *
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
int len = 0;
new = malloc(sizeof(list_t));
while (new == NULL)
{
	if (strlen(str))
	{
		len++;
	}
return (NULL);
}
new->str = strdup(str);
new->len = strlen(str);
new->next = (*head);
(*head) = new;
return (*head);
}

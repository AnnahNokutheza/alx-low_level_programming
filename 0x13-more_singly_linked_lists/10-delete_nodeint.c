#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - ...
  * @head: ...
  * @index: ...
  *
  * Return: ...
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int enumerate = 1
	listint_t *new = *head, *better;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	better = *head;
	while (better)
	{
		if (enumerate == index)
		{
			new = better->next;
			better->next = new->next;
			free(new);
			return (1);
		}

		better = better->next;
		enumerate++;
	}

	return (-1);
}

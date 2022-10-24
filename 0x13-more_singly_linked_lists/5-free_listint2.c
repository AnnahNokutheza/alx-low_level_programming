#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - ...
  * @head: ...
  *
  * Return: ...
  */
void free_listint2(listint_t **head)
{
	listint_t *better;

	if (head)
	{
		while (*head)
		{
			better = (*head);
			*head = (*head)->next;
			free(better);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = 0;
}

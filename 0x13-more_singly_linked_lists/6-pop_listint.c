#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - ...
  * @head: ...
  *
  * Return: ...
  */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int abc = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		abc = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (abc);
}

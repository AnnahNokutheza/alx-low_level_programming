#include <stdlib.h>
#include "lists.h"

/**
  * free_list - Frees a linked list.
  * @head: The pointer to the first node of linked list
  *
  * Return: Nothing
  */
void free_list(list_t *head)
{
	list_t *better;

	while (head)
	{
		better = head;
		head = head->next;
		free(better->str);
		free(better);
	}

	free(head);
}

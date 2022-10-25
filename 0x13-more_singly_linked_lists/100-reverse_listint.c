#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * reverse_listint - ...
  * @head: ...
  * @listint: ...                                                                                              *
  * Return: ...
  */
listint_t *reverse_listint(listint_t **head)
{
    listint *new = *head, *temp;

    New* temp = *head;
    while (temp->next != NULL)
    {
        s.push(temp);
        temp = temp->next;
    }
    *head = temp;
    while (!s.empty())
    {
        temp->next = s.top();
        s.pop();
        temp = temp->next;
    }
    temp->next = NULL;
}

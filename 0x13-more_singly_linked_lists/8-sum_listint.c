#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - .
  * @head: .
  *
  * Return: Always 0
  */
int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}

	return (amount);
}

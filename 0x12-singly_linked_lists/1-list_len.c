#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - Show the numbers of elements of a lists
  * @h: A linked lists
  *
  * Return: The number of elements of a lists
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}

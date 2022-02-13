#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it.
 * @list: ptr head of list
 * Return: 0 if no cycle, 1 if cycle
 */
int check_cycle(listint_t *list)
{

	listint_t *ptr1, *ptr2 = list;

	if (!list)
		return (0);

	ptr1 = list->next;

	while (ptr1)
	{
		if (ptr1->next)
			ptr1 = ptr1->next->next;
		else
			ptr1 = ptr1->next;

		ptr2 = ptr2->next;
		if (ptr1 == ptr2)
			return (1);
	}
	return (0);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_node - Inserts a number into a sorted singly linked list.
 * @head: start of pointer
 * @number: new node
 * Return: address of the new element or NULL if it failed
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *nw_node;
	listint_t *nodeCurrent;

	/* defining the start of the list */
	nodeCurrent = *head;
	/* Allocate Memory to get a new Node*/
	nw_node = malloc(sizeof(listint_t));

	/**
	 * Validate if nw_node isn't Null
	 *Then: assigne in first node the new node and next node is Null
	 *Then validate if next posisition is null and value of new node is >
	 *assigne a new value for the next node
	 *if not go through position to find a value greater to be the newcurre
	 *at last return de value of node or null if not
	 *
	 **/
	if (nw_node)
	{
		nw_node->n = number;
		nw_node->next = NULL;
		if (*head == NULL || (*head)->n >= nw_node->n)
		{
			nw_node->next = *head;
			*head = nw_node;
		}
		else
		{
			while (nodeCurrent->next && nodeCurrent->next->n < nw_node->n)
			{
				nodeCurrent = nodeCurrent->next;
			}
			nw_node->next = nodeCurrent->next;
			nodeCurrent->next = nw_node;
		}
		return (nw_node);
	}
	return (NULL);
}

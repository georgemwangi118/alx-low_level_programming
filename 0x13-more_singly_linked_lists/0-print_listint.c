ines (18 sloc)  321 Bytes

#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: elements to be printed
 * Return: the number of nodes
 */


size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
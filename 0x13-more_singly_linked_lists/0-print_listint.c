#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 * @next: go to the next node
 * Description: h->next goes to the next node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);

		/*go to the next node*/
		h = h->next;

		node_count++;
	}
	printf("%d\n", h->n);

	return (node_count);
}

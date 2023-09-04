#include "lists.h"

/**
 * sum_listint - to calculate the sum of the data in the  list
 * @head: first node in the list
 *
 * Return: resulted from the  sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

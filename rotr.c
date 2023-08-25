#include "monty.h"

/**
 * f_rotr - Rotate the stack to the bottom.
 * @head: Pointer to the head of the stack
 * @counter: Line number (unused)
 *
 * This function rotates the stack to the bottom, moving the top element to
 * the bottom while maintaining the order of the other elements. It doesn't
 * modify the stack if it has less than two elements.
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;

	// Check if the stack is empty or has only one element
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	// Traverse the stack to find the last element
	while (copy->next)
	{
		copy = copy->next;
	}

	// Update pointers to rotate the stack
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}


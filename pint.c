#include "monty.h"
/**
 * f_pint - Prints the top element of the stack.
 * @head: Stack head
 * @counter: Line number
 *
 * Description:
 *     This function prints the top element of the stack.
 *     It checks if the stack is empty and handles the error if it is.
 */
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

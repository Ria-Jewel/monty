#include "monty.h"

/**
 * f_pchar - Prints the character at the top of the stack, followed by a
 * newline.
 * @head: Pointer to the stack's head.
 * @counter: Line number.
 *
 * Description: This function retrieves the top element of the stack and prints
 * it as a character. If the stack is empty or the value is out of the valid
 * character range, an error is displayed.
 */
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *current_node;

	current_node = *head;
	if (!current_node)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (current_node->n > 127 || current_node->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", current_node->n);
}


#include "monty.h"
/**
 * f_push - Pushes a new node onto the stack or queue.
 * @head: Pointer to the stack's head.
 * @counter: Line number.
 *
 * Description:
 * This function checks if the argument is a valid integer and pushes it onto
 * the stack or queue depending on the current mode. If the argument is not a
 * valid integer or if there is no argument, it displays an error message and
 * exits with a failure status.
 */
void f_push(stack_t **head, unsigned int counter)
{
	int n, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}

#include "monty.h"
/**
 * f_stack - Sets the data structure to use a stack (LIFO mode).
 * @head: Unused parameter (stack's head).
 * @counter: Unused parameter (line number).
 *
 * Description:
 * This function sets the mode of operation to use a stack (Last-In, First-Out)
 * by setting the value of `bus.lifi` to 0.
 */
void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}

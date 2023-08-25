#include "monty.h"

/**
 * f_nop - Does nothing.
 * @head: Pointer to the stack's head.
 * @counter: Line number in the Monty bytecode file.
 *
 * Return: No return value.
 *
 * Description: This function is a no-op, meaning it does nothing and is used
 * to represent a placeholder operation in the Monty bytecode.
 */
void f_nop(stack_t **head, unsigned int counter)

{

(void)counter; /* Unused parameter, ignore it */
(void)head;    /* Unused parameter, ignore it */

}


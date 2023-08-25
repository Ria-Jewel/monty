#include "monty.h"

void f_div(stack_t **head, unsigned int counter)
{
    stack_t *h;
    int len = 0, aux;

    // Initialize a temporary pointer to the stack
    h = *head;

    // Calculate the number of elements in the stack
    while (h)
    {
        h = h->next;
        len++;
    }

    // Check if there are at least two elements in the stack
    if (len < 2)
    {
        // Print an error message if the stack is too short
        fprintf(stderr, "L%d: can't div, stack too short\n", counter);

        // Close the Monty file
        fclose(bus.file);

        // Free dynamically allocated content
        free(bus.content);

        // Free the entire stack
        free_stack(*head);

        // Exit with a failure status
        exit(EXIT_FAILURE);
    }

    // Reset the temporary pointer to the stack
    h = *head;

    // Check if the top element of the stack is zero
    if (h->n == 0)
    {
        // Print an error message for division by zero
        fprintf(stderr, "L%d: division by zero\n", counter);

        // Close the Monty file
        fclose(bus.file);

        // Free dynamically allocated content
        free(bus.content);

        // Free the entire stack
        free_stack(*head);

        // Exit with a failure status
        exit(EXIT_FAILURE);
    }

    // Calculate the result of the division
    aux = h->next->n / h->n;

    // Update the next element's value with the result
    h->next->n = aux;

    // Move the head of the stack to the next element
    *head = h->next;

    // Free the previous top element of the stack
    free(h);
}


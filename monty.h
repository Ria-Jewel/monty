#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - Doubly linked list representation of a stack (or queue)
 * @n: Integer value stored in the node
 * @prev: Pointer to the previous element of the stack (or queue)
 * @next: Pointer to the next element of the stack (or queue)
 *
 * Description:
 * - This structure defines a node in a doubly linked list used to implement
 *   a stack or queue in the Monty code interpreter.
 * - It contains an integer value 'n' and pointers to the previous and next nodes
 *   in the list.
 */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

/**
 * struct bus_s - Structure to carry values throughout the program
 * @arg: A string argument from the Monty file
 * @file: Pointer to the currently open Monty file
 * @content: The content of a line from the Monty file
 * @lifi: A flag indicating whether the data structure is a stack (0) or a queue (1)
 *
 * Description:
 * - This structure is used to carry various values and information throughout
 *   the Monty code interpreter program.
 * - It includes the argument 'arg' from the Monty file, a pointer to the open
 *   file 'file', the content of a line from the Monty file 'content', and a flag
 *   'lifi' that indicates whether the data structure is currently behaving as
 *   a stack (0) or a queue (1).
 */
typedef struct bus_s
{
    char *arg;
    FILE *file;
    char *content;
    int lifi;
} bus_t;

/**
 * struct instruction_s - Opcode and function pointer
 * @opcode: A string representing a Monty opcode
 * @f: A function pointer to the corresponding opcode function
 *
 * Description:
 * - This structure associates a Monty opcode, represented as a string in 'opcode',
 *   with its corresponding function pointer 'f'.
 * - When executing Monty code, the opcode in the code is matched to a function
 *   through this structure.
 */
typedef struct instruction_s
{
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* Function prototypes */
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char *clean_line(char *content);
void f_push(stack_t **head, unsigned int number);
void f_pall(stack_t **head, unsigned int number);
void f_pint(stack_t **head, unsigned int number);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void f_pop(stack_t **head, unsigned int counter);
void f_swap(stack_t **head, unsigned int counter);
void f_add(stack_t **head, unsigned int counter);
void f_nop(stack_t **head, unsigned int counter);
void f_sub(stack_t **head, unsigned int counter);
void f_div(stack_t **head, unsigned int counter);
void f_mul(stack_t **head, unsigned int counter);
void f_mod(stack_t **head, unsigned int counter);
void f_pchar(stack_t **head, unsigned int counter);
void f_pstr(stack_t **head, unsigned int counter);
void f_rotl(stack_t **head, unsigned int counter);
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void f_queue(stack_t **head, unsigned int counter);
void f_stack(stack_t **head, unsigned int counter);

/* Main function for the Monty code interpreter */
int main(int argc, char *argv[]);

#endif


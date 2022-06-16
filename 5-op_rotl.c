#include "monty.h"

/**
 * rotl - Rotates the stack to the top
 * @stack: The head of the stack
 * @line_number: The line on which the error occurred
 *
 * Return: Nothing
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	unsigned int temp = 0;
	(void) line_number;

	if (current && current->next)
	{
		while (current->next != NULL)
		{
			temp = current->n;
			current->n = current->next->n;
			current->next->n = temp;
			current = current->next;
		}
	}
}

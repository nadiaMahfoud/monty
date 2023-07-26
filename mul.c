#include "monty.h"
/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *str;
	int len = 0, aux;

	str = *head;
	while (str)
	{
		str = str->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	str = *head;
	aux = str->next->n * str->n;
	str->next->n = aux;
	*head = str->next;
	free(str);
}

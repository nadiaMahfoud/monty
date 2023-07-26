#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *str;
	(void)counter;

	str = *head;
	if (str == NULL)
		return;
	while (str)
	{
		printf("%d\n", str->n);
		str = str->next;
	}
}

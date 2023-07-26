#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *str;
	(void)counter;

	str = *head;
	while (str)
	{
		if (str->n > 127 || str->n <= 0)
		{
			break;
		}
		printf("%c", str->n);
		str = str->next;
	}
	printf("\n");
}

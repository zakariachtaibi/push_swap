#include "../push_swap.h"

void sa(t_stack_data *stack_a)
{
    t_stack *first;
    t_stack *second;

    if (stack_a == NULL)
		return ;
    first = stack_a->head;
    second = first->next;
    first->next = second->next;
    second->next = first;
    stack_a->head = second;
}
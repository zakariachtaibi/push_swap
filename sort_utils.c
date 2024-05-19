#include "push_swap.h"

void sort_three(t_stack_data *stack)
{
    t_stack *tmp;
    int a;
    int b;
    int c;

    tmp = stack->head;
    a = tmp->data;
    b = tmp->next->data;
    c = tmp->next->next->data;
    if (a > b && b < c && a < c)
        sa(stack);
    else if (a > b && b > c)
    {
        sa(stack);
        rra(stack);
    }
    else if (a > b && b < c && a > c)
        ra(stack);
    else if (a < b && b > c && a < c)
    {
        sa(stack);
        ra(stack);
    }
    else if (a < b && b > c && a < c)
        rra(stack);
}
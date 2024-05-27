#include "push_swap.h"


int check_piv(t_stack *tmp_a, int pivot1)
{
    t_stack *tmp;

    tmp = tmp_a;
    if (!tmp)
        return (-1);
    while (tmp)
    {
        if (tmp->index < pivot1)
            return (1);
        tmp = tmp->next;
    }
    return (0);
}

void calcul_piv(int *pivot1, int *pivot2, int *rem, t_stack_data *stack_a)
{
    *rem = *pivot1;
    *pivot2 = (stack_a->size / 6) + (*pivot1);
    *pivot1 += (stack_a->size / 3);
}

void send_to_stack_b(t_stack_data *stack_a, t_stack_data *stack_b)
{
    int rem;
    int pivot1;
    int pivot2;

    rem = -1;
    pivot1 = stack_a->size / 3;
    pivot2 = pivot1 + stack_a->size / 6;

    while (stack_a->size > 3)
    {
        if (stack_b->size >= 2 && stack_b->head->index < pivot2 && stack_b->head->index > rem && stack_a->head->index > pivot1)
            rr(stack_a, stack_b);
        else if (stack_b->size >= 2 && stack_b->head->index < pivot2 && stack_b->head->index > rem)
            rb(stack_b);
        if (stack_a->head->index < pivot1)
            pb(stack_b, stack_a);
        else
            ra(stack_a);
        if (!check_piv(stack_a->head, pivot1))
            calcul_piv(&pivot1, &pivot2, &rem, stack_a);
    }
    sort_three(stack_a);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 23:43:08 by zchtaibi          #+#    #+#             */
/*   Updated: 2024/05/19 23:43:08 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void  sort(t_stack_data *stack_a, t_stack_data *stack_b)
{
    if (stack_a->size == 2)
        sa(stack_a);
    else if (stack_a->size == 3)
        sort_three(stack_a);
    else if (stack_a->size == 4)
        sort_four(stack_a);
    else if (stack_a->size == 5)
        sort_five(stack_a);
    else
    {
        send_to_stack_b(stack_a, stack_b);
        send_to_stack_a(stack_a, stack_b);
    }
}
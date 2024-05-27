/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 23:42:04 by zchtaibi          #+#    #+#             */
/*   Updated: 2024/05/19 23:42:04 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void pa(t_stack_data *stack_a, t_stack_data *stack_b)
{
    t_stack *top_b;

    if (stack_b->size == 0)
        return;
    top_b = stack_b->head;
    stack_b->head = top_b->next;
    stack_b->size--;
    top_b->next = stack_a->head;
    stack_a->head = top_b;
    stack_a->size++;
    write(1, "pa\n", 3);
}
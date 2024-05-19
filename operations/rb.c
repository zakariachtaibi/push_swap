/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 23:42:10 by zchtaibi          #+#    #+#             */
/*   Updated: 2024/05/19 23:42:10 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void rb(t_stack_data *stack_b)
{
    t_stack *first;
    t_stack *last;

    first = stack_b->head;
    last = stack_b->head;
    while (last->next)
        last = last->next;
    stack_b->head = first->next;
    first->next = NULL;
    last->next = first;
}
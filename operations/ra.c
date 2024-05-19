/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 23:42:08 by zchtaibi          #+#    #+#             */
/*   Updated: 2024/05/19 23:42:08 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ra(t_stack_data *stack_a)
{
    t_stack *first;
    t_stack *last;

    first = stack_a->head;
    last = stack_a->head;
    while (last->next)
        last = last->next;
    stack_a->head = first->next;
    first->next = NULL;
    last->next = first;
}
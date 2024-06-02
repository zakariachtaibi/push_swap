/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 23:42:15 by zchtaibi          #+#    #+#             */
/*   Updated: 2024/05/19 23:42:15 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_stack_data *stack)
{
	t_stack	*last;
	t_stack	*second_last;

	if (!stack || !stack->head || !stack->head->next)
		return ;
	last = stack->head;
	while (last->next->next != NULL)
		last = last->next;
	second_last = last->next;
	last->next = NULL;
	second_last->next = stack->head;
	stack->head = second_last;
}

void	rra(t_stack_data *stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

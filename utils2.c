/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 18:38:46 by zchtaibi          #+#    #+#             */
/*   Updated: 2024/06/06 17:59:30 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	search_max(t_stack_data *stack_a)
{
	t_stack	*tmp;
	int		max;

	tmp = stack_a->head;
	max = tmp->index;
	while (tmp)
	{
		if (tmp->index > max)
			max = tmp->index;
		tmp = tmp->next;
	}
	return (max);
}

void	ft_full_clear(t_stack_data *stack_a, t_stack_data *stack_b)
{
	ft_clear_stack(stack_a);
	ft_clear_stack(stack_b);
}

void	ft_create_stack(t_stack_data *stack)
{
	stack->head = NULL;
	stack->size = 0;
}

int	isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r');
}

int	check_empty(char *str)
{
	while (*str)
	{
		if (!isspace(*str))
			return (1);
		str++;
	}
	return (0);
}

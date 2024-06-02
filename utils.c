/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:20:25 by zchtaibi          #+#    #+#             */
/*   Updated: 2024/06/02 18:42:52 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_clear(t_stack_data *stack, char **elements)
{
	free_elements(elements);
	ft_clear_stack(stack);
	ft_error("Error\n");
}

void	free_elements(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

int	ft_stack_size(t_stack *stack)
{
	int	num;

	num = 0;
	while (stack)
	{
		stack = stack->next;
		num++;
	}
	return (num);
}

t_stack_data	*init_stack_data(void)
{
	t_stack_data	*stack;

	stack = (t_stack_data *)malloc(sizeof(t_stack_data));
	if (stack == NULL)
		return (NULL);
	stack->head = NULL;
	stack->size = 0;
	return (stack);
}

void	ft_clear_stack(t_stack_data *stack)
{
	t_stack	*current;
	t_stack	*next;

	current = stack->head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	stack->head = NULL;
	stack->size = 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 23:42:34 by zchtaibi          #+#    #+#             */
/*   Updated: 2024/06/02 22:01:12 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char *message)
{
	write(1, message, ft_strlen(message));
	exit(1);
}

int	ft_push(t_stack_data *stack, int value)
{
	t_stack	*new_element;

	new_element = (t_stack *)malloc(sizeof(t_stack));
	if (!new_element)
		return (0);
	new_element->data = value;
	new_element->next = stack->head;
	stack->head = new_element;
	stack->size++;
	return (1);
}

t_stack	*ft_fetch(t_stack_data *stack, int value)
{
	t_stack	*current;

	current = stack->head;
	while (current)
	{
		if (current->data == value)
			return (current);
		current = current->next;
	}
	return (NULL);
}

static int	ft_isdigits(char *word)
{
	size_t	length;
	size_t	index;

	length = ft_strlen(word);
	index = 0;
	if (!word)
		return (0);
	while (index < length)
	{
		if (!ft_isdigit(word[index]))
			ft_error("Error\n");
		index++;
	}
	return (1);
}

int	ft_fill_stack(t_stack_data *stack, char **elements)
{
	int	index;
	int	value;

	index = 0;
	while (elements[index])
		index++;
	while (--index >= 0)
	{
		if (!ft_isdigits(elements[index]))
			exit(1);
		value = ft_atoi(elements[index]);
		if (ft_fetch(stack, value))
			ft_clear(stack, elements);
		if (!ft_push(stack, value))
			ft_clear(stack, elements);
	}
	free_elements(elements);
	return (1);
}

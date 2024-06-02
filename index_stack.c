/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 09:45:35 by zchtaibi          #+#    #+#             */
/*   Updated: 2024/06/02 18:36:58 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_arr(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	index_it(t_stack *stack, int *arr, int size)
{
	t_stack	*tmp;
	int		i;

	tmp = stack;
	while (tmp)
	{
		i = 0;
		while (i < size)
		{
			if (tmp->data == arr[i])
			{
				tmp->index = i;
				break ;
			}
			i++;
		}
		tmp = tmp->next;
	}
}

void	index_stack(t_stack *stack)
{
	t_stack	*tmp;
	int		index;
	int		*arr;

	tmp = stack;
	index = 0;
	arr = (int *)malloc(sizeof(int) * ft_stack_size(stack));
	if (!arr)
		return ;
	while (tmp)
	{
		arr[index] = tmp->data;
		tmp = tmp->next;
		index++;
	}
	ft_sort_arr(arr, ft_stack_size(stack));
	index_it(stack, arr, ft_stack_size(stack));
	free(arr);
}

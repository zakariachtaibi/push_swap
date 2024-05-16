/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 09:45:35 by zchtaibi          #+#    #+#             */
/*   Updated: 2024/05/16 09:59:11 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int tmp;

    i = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
            j++;
        }
        i++;
    }
}

void index_stack(t_stack *stack)
{
    t_stack *tmp = stack;
    int index = 0;
    int *arr;

    arr = (int *)malloc(sizeof(int) * ft_stack_size(stack));
    if (!arr)
    {
        return;
    }
    while (tmp)
    {
        arr[index] = tmp->data;
        tmp = tmp->next;
        index++;
    }
    ft_sort_int_tab(arr, ft_stack_size(stack));
    free(arr);
}

// index_it(t_stack stack_a)
// {
    
// }
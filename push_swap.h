/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:38:07 by zchtaibi          #+#    #+#             */
/*   Updated: 2024/05/16 09:55:23 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
}					t_stack;

typedef struct s_stack_container
{
    t_stack *head;
    int     size;
}               t_stack_container;

int	ft_stack_size(t_stack *stack);
int ft_push(t_stack_container *stack_container, int value);
t_stack *ft_fetch(t_stack_container *stack_container, int value);
int ft_fill_stack(t_stack_container *stack_container, char **elements);
void ft_clear_stack(t_stack_container *stack_container);
int is_stack_sorted(t_stack *stack);
void printNode(t_stack_container *stack_container);
void index_stack(t_stack *stack);
#endif
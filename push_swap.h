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

t_stack				*ft_nb_new(int nb);
void				ft_clear_stack(t_stack **lst);
void				ft_add_back(t_stack **lst, t_stack *new);
t_stack				*check_args(int ac, char **av);
int					ft_atoi_plus(char *str);
void	index_stack(t_stack *stack)
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:38:07 by zchtaibi          #+#    #+#             */
/*   Updated: 2024/05/10 14:50:29 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct node
{
    int nc;
    struct node *next;
    struct node *prev;
} t_node;

int	ft_atoi(const char *nptr);
int	ft_isdigit(int c);
int	ft_isAlldigit(char *str);

#endif
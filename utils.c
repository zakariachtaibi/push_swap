/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:20:25 by zchtaibi          #+#    #+#             */
/*   Updated: 2024/05/02 13:40:04 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
		|| nptr[i] == '\r' || nptr[i] == '\v' || nptr[i] == '\f')
		i++;
	if (!nptr[i])
		exit(1);
	if (nptr[i] == '-' || (nptr[i] == '+'))
		if (nptr[i++] == '-')
			sign *= -1;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result *= 10;
		result += (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

int	ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9') || c == ' ');
}

int	ft_isAlldigit(char *str)
{
	int	i;

	i = 0;
	if (!*str)
		exit(1);
	while (str[i])
	{
        if (str[i] == '-')
            i++;
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:29:47 by zchtaibi          #+#    #+#             */
/*   Updated: 2023/11/19 14:37:03 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	errornl(char *message)
{
	if (message)
	{
		write(1, message, ft_strlen(message));
		write(1, "\n", 1);
	}
	exit(1);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		if (nptr[i++] == '-')
			sign = -sign;
	if (nptr[i] < '0' || nptr[i] > '9')
		errornl("Error");
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr = nbr * 10 + (nptr[i] - '0');
		if ((nbr > 2147483648 && sign == -1) || (nbr > 2147483647 && sign == 1))
			errornl("Error");
		i++;
	}
	if (nptr[i])
		errornl("Error");
	return (nbr * sign);
}

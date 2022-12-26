/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:17:21 by hsebille          #+#    #+#             */
/*   Updated: 2022/12/15 14:32:01 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_overflow(int negative, long nb)
{
	int	check;

	check = 2;
	if (nb * negative < -2147483648 || nb * negative > 2147483647)
		check = 0;
	return (check);
}

long	ft_atoi(const char *nptr)
{	
	int		i;
	long	nb;
	int		negative;

	i = 0;
	negative = 1;
	nb = 0;
	while ((nptr[i] == ' ') || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		negative *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = nb * 10 + nptr[i++] - '0';
		if (ft_overflow(negative, nb) == 0)
			return (2147483648);
	}
	if (!((nptr[i - 1] >= '0') && (nptr[i - 1] <= '9')))
		return (2147483648);
	return (nb * negative);
}

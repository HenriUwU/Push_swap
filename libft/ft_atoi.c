/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:17:21 by hsebille          #+#    #+#             */
/*   Updated: 2023/01/21 10:49:54 by hsebille         ###   ########.fr       */
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

static int	check_non_digit(const char *nptr)
{
	int	i;

	i = 0;
	while (nptr[i])
	{
		if (!((nptr[i] >= '0') && (nptr[i] <= '9'))
			&& nptr[i] != '+' && nptr[i] != '-')
			return (1);
		i++;
	}
	return (0);
}

static long	side_function(const char *nptr, int i)
{
	if (check_non_digit(nptr) == 1
		|| (ft_isdigit(nptr[i]) == 0 && nptr[i] != '\0'))
		return (2147483648);
	return (0);
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
	if (side_function(nptr, i) == 2147483648)
		return (side_function(nptr, i));
	return (nb * negative);
}

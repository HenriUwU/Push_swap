/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotates.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 13:08:34 by hsebille          #+#    #+#             */
/*   Updated: 2023/01/02 14:07:06 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(int *stack_a)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack_a[0];
	while (stack_a[i] != -1)
	{
		if (stack_a[i + 1] != -1)
			stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[i - 1] = tmp;
	write (1, "ra\n", 3);
}

void	rotate_b(int *stack_b)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack_b[0];
	while (stack_b[i] != -1)
	{
		if (stack_b[i + 1] != -1)
			stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[i - 1] = tmp;
	write (1, "rb\n", 3);
}

void	rotate_r(int *stack_a, int *stack_b)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack_a[0];
	while (stack_a[i] != -1)
	{
		if (stack_a[i + 1] != -1)
			stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[i - 1] = tmp;
	i = 0;
	tmp = stack_b[0];
	while (stack_b[i] != -1)
	{
		if (stack_b[i + 1] != -1)
			stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[i - 1] = tmp;
	write (1, "rr\n", 3);
}

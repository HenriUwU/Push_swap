/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotates.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:12:08 by hsebille          #+#    #+#             */
/*   Updated: 2023/01/02 14:39:07 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate_a(int *stack_a)
{
	int	tmp;
	int	len;

	len = ft_arrlen(stack_a);
	tmp = stack_a[len - 1];
	while (len > 0)
	{
		if (stack_a[len] != -1)
			stack_a[len] = stack_a[len - 1];
		len--;
	}
	stack_a[len] = tmp;
	write (1, "rra\n", 4);
}

void	rrotate_b(int *stack_b)
{
	int	tmp;
	int	len;

	len = ft_arrlen(stack_b);
	tmp = stack_b[len - 1];
	while (len > 0)
	{
		if (stack_b[len] != -1)
			stack_b[len] = stack_b[len - 1];
		len--;
	}
	stack_b[len] = tmp;
	write (1, "rrb\n", 4);
}

void	rrotate_r(int *stack_a, int *stack_b)
{
	int	tmp;
	int	len;

	len = ft_arrlen(stack_a);
	tmp = stack_a[len - 1];
	while (len > 0)
	{
		if (stack_a[len] != -1)
			stack_a[len] = stack_a[len - 1];
		len--;
	}
	stack_a[len] = tmp;
	len = ft_arrlen(stack_b);
	tmp = stack_b[len - 1];
	while (len > 0)
	{
		if (stack_b[len] != -1)
			stack_b[len] = stack_b[len - 1];
		len--;
	}
	stack_b[len] = tmp;
	write (1, "rrr\n", 4);
}

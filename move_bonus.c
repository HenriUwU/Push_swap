/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:19:06 by hsebille          #+#    #+#             */
/*   Updated: 2023/01/20 14:32:50 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_bonus(int *stack)
{
	int	tmp;

	tmp = stack[1];
	stack[1] = stack[0];
	stack[0] = tmp;
}

void	swap_s_bonus(int *stack_a, int *stack_b)
{
	int	tmp;

	tmp = stack_a[1];
	stack_a[1] = stack_a[0];
	stack_a[0] = tmp;
	tmp = stack_b[1];
	stack_b[1] = stack_b[0];
	stack_b[0] = tmp;
}

void	push_b_bonus(int *stack_a, int *stack_b)
{
	int	i;

	i = ft_arrlen(stack_b) + 1;
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = stack_a[0];
	i = 0;
	while (stack_a[i] >= 0)
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
}

void	push_a_bonus(int *stack_a, int *stack_b)
{
	ft_memmove(stack_a + 1, stack_a, sizeof(int) * ft_arrlen(stack_a));
	stack_a[0] = stack_b[0];
	ft_memmove(stack_b, stack_b + 1, sizeof(int) * ft_arrlen(stack_b));
}

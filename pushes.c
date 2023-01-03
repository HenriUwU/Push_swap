/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:59:04 by hsebille          #+#    #+#             */
/*   Updated: 2023/01/03 13:43:43 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(int *stack_a, int *stack_b)
{
	int	i;

	i = ft_arrlen(stack_b) + 1;
	while (i >= 0)
	{
		stack_b[i + 1] = stack_b[i];
		i--;
	}
	stack_b[0] = stack_a[0];
	i = 0;
	while (stack_a[i] >= 0)
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	write (1, "pb\n", 3);
}

void	push_a(int *stack_a, int *stack_b)
{
	int	i;

	i = ft_arrlen(stack_b) + 1;
	while (i >= 0)
	{
		stack_a[i + 1] = stack_a[i];
		i--;
	}
	stack_a[0] = stack_b[0];
	i = 0;
	while (stack_b[i] >= 0)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	write (1, "pa\n", 3);
}

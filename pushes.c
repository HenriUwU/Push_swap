/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:59:04 by hsebille          #+#    #+#             */
/*   Updated: 2023/01/16 15:51:13 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(int *stack_a, int *stack_b)
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
	write (1, "pb\n", 3);
}

void	push_a(int *stack_a, int *stack_b)
{
	ft_memmove(stack_a + 1, stack_a, sizeof(int) * ft_arrlen(stack_a));
	stack_a[0] = stack_b[0];
	ft_memmove(stack_b, stack_b + 1, sizeof(int) * ft_arrlen(stack_b));
	write (1, "pa\n", 3);
}

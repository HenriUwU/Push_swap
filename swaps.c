/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:39:46 by hsebille          #+#    #+#             */
/*   Updated: 2022/12/14 17:10:07 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(int *stack_a)
{
	int	tmp;

	tmp = stack_a[1];
	stack_a[1] = stack_a[0];
	stack_a[0] = tmp;
	write(1, "sa\n", 3);
}

void	swap_b(int *stack_b)
{
	int	tmp;

	tmp = stack_b[1];
	stack_b[1] = stack_b[0];
	stack_b[0] = tmp;
	write(1, "sb\n", 3);
}

void	swap_s(int *stack_a, int *stack_b)
{
	int	tmp;

	tmp = stack_a[1];
	stack_a[1] = stack_a[0];
	stack_a[0] = tmp;
	tmp = stack_b[1];
	stack_b[1] = stack_b[0];
	stack_b[0] = tmp;
	write(1, "ss\n", 3);
}

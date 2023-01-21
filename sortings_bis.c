/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortings_bis.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:20:49 by hsebille          #+#    #+#             */
/*   Updated: 2023/01/20 16:45:38 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(int *stack_a)
{
	if (!stack_a)
		return ;
	if (stack_a[0] > stack_a[1])
		swap_a(stack_a);
}

void	sort_three(int *stack_a, int *stack_b)
{
	if (is_sorted(stack_a, stack_b) == 1)
		return ;
	if (stack_a[1] > stack_a[0] && stack_a[1] > stack_a[2]
		&& stack_a[0] < stack_a[2])
	{
		rrotate_a(stack_a);
		swap_a(stack_a);
	}
	else if (stack_a[1] > stack_a[2] && stack_a[1] < stack_a[0])
	{
		rotate_a(stack_a);
		swap_a(stack_a);
	}
	else if (stack_a[1] < stack_a[0] && stack_a[1] < stack_a[2]
		&& stack_a[0] < stack_a[2])
		swap_a(stack_a);
	else if (stack_a[1] > stack_a[0] && stack_a[1] > stack_a[2]
		&& stack_a[0] > stack_a[2])
		rrotate_a(stack_a);
	else if (stack_a[1] < stack_a[0] && stack_a[1] < stack_a[2]
		&& stack_a[0] > stack_a[2])
		rotate_a(stack_a);
}

void	sort_five(int *stack_a, int *stack_b)
{
	int	i;

	i = 5;
	if (is_sorted(stack_a, stack_b) == 1)
		return ;
	while (i > 3)
	{
		if (stack_a[0] == 0 || stack_a[0] == 1)
		{
			push_b(stack_a, stack_b);
			i--;
		}
		else
			rotate_a(stack_a);
	}
	sort_three(stack_a, stack_b);
	if (stack_b[0] < stack_b[1])
		swap_b(stack_b);
	push_a(stack_a, stack_b);
	push_a(stack_a, stack_b);
}

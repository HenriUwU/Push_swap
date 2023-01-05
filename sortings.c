/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortings.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:14:59 by hsebille          #+#    #+#             */
/*   Updated: 2023/01/05 16:13:17 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_biggest(int *stack, int number)
{
	int	i;

	i = 0;
	while (stack[i] != -1)
	{
		if (stack[i] > number)
			return (0);
		i++;
	}
	return (1);
}

void	butterfly(int *stack_a, int *stack_b, int chunk)
{
	int	i;
	int	tracker;
	int	data_per_chunk;
	int	len;

	len = ft_arrlen(stack_a);
	data_per_chunk = ft_arrlen(stack_a) / chunk;
	tracker = data_per_chunk;
	while (stack_a[0] != -1)
	{
		i = 0;
		while (i < data_per_chunk)
		{
			if (stack_a[0] < tracker)
			{
				push_b(stack_a, stack_b);
				if (stack_b[0] > (tracker - len / (chunk * 2)))
					rotate_b(stack_b);
				i++;
			}
			else
				rotate_a(stack_a);
		}
		tracker += data_per_chunk;
	}
}

void	sort(int *stack_a, int *stack_b)
{
	int	i;

	i = ft_arrlen(stack_b) - 1;
	while (stack_b[0] != -1)
	{
		if (is_biggest(stack_b, stack_b[i]) == 1)
		{
			push_a(stack_a, stack_b);
			i--;
		}
		else
			rrotate_b(stack_b);
	}
}

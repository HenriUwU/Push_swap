/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortings.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:14:59 by hsebille          #+#    #+#             */
/*   Updated: 2023/01/09 15:51:27 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_sorted(int *stack_a, int *stack_b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (stack_a[i] != -1)
	{
		j = i + 1;
		while (stack_a[j] != -1)
		{
			if (stack_a[i] > stack_a[j])
				return (0);
			j++;
		}
		i++;
	}
	if (stack_b[0] == -1)
		return (1);
	return (0);
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
		while (i < data_per_chunk && stack_a[0] != -1)
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

void	main_sort(int *stack_a, int *stack_b, int chunk, int max)
{
	int	i;
	int	checker;

	i = 0;
	if (is_sorted(stack_a, stack_b) == 1)
	{
		write(1, "stack a is already sorted\n", 26);
		return ;
	}
	butterfly(stack_a, stack_b, chunk);
	while (stack_b[0] != -1)
	{
		i = 0;
		if (stack_b[0] == max - 1)
		{
			push_a(stack_a, stack_b);
			checker = 1;
		}
		if (stack_b[0] == max)
		{
			push_a(stack_a, stack_b);
			if (checker == 1)
			{
				swap_a(stack_a);
				checker = 0;
				max--;
			}
			max--;
		}
		while (stack_b[i] != max && stack_b[0] != -1)
			i++;
		if (ft_arrlen(stack_b) / 2 > i)
			rotate_b(stack_b);
		else if (stack_b[0] != -1)
			rrotate_b(stack_b);
	}
}

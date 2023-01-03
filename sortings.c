/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:14:59 by hsebille          #+#    #+#             */
/*   Updated: 2023/01/03 16:52:08 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	butterfly(int *stack_a, int *stack_b, int chunk)
{
	int	i;
	int	tracker;
	int	data_per_chunk;

	i = 0;
	data_per_chunk = ft_arrlen(stack_a) / chunk;
	tracker = data_per_chunk;
	while (stack_a[i] != -1)
	{
		i = 0;
		while (i < data_per_chunk)
		{
			if (stack_a[i] < tracker)
			{
				push_b(stack_a, stack_b);
				if (stack_a[i] > (ft_arrlen(stack_a) / (2 * chunk)))
					rotate_b(stack_b);
				i++;
			}
			else
				rotate_a(stack_a);
		}
		tracker += data_per_chunk;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:27:48 by hsebille          #+#    #+#             */
/*   Updated: 2023/01/03 13:43:20 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_duplicate(int *stack_a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (stack_a[i])
	{
		j = i + 1;
		while (stack_a[j])
		{
			if (stack_a[i] == stack_a[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	*normalize(int *stack, int size)
{
	int	i;
	int	j;
	int	tracker;
	int	*normalized;

	i = 0;
	normalized = malloc(sizeof(int) * size + 1);
	while (i < size - 1)
	{
		tracker = 0;
		j = 0;
		while (j < size - 1)
		{
			if (stack[i] > stack[j])
				tracker++;
			j++;
		}
		normalized[i] = tracker;
		i++;
	}
	free(stack);
	normalized[i] = -1;
	return (normalized);
}

int	ft_arrlen(int *stack)
{
	int	i;

	if (!stack)
		return (0);
	i = 0;
	while (stack[i] != -1)
		i++;
	return (i);
}

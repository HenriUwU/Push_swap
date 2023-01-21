/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move2_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:23:09 by hsebille          #+#    #+#             */
/*   Updated: 2023/01/21 13:07:44 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_bonus(int *stack)
{
	int	i;
	int	tmp;

	if (stack[0] == -1)
		return ;
	i = 0;
	tmp = stack[0];
	while (stack[i] != -1)
	{
		if (stack[i + 1] != -1)
			stack[i] = stack[i + 1];
		i++;
	}
	stack[i - 1] = tmp;
}

void	rotate_r_bonus(int *stack_a, int *stack_b)
{
	int	i;
	int	tmp;

	if (stack_a[0] == -1 || stack_b[0] == -1)
		return ;
	i = 0;
	tmp = stack_a[0];
	while (stack_a[i] != -1)
	{
		if (stack_a[i + 1] != -1)
			stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[i - 1] = tmp;
	i = 0;
	tmp = stack_b[0];
	while (stack_b[i] != -1)
	{
		if (stack_b[i + 1] != -1)
			stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[i - 1] = tmp;
}

void	rrotate_bonus(int *stack)
{
	int	tmp;
	int	len;

	if (stack[0] == -1)
		return ;
	len = ft_arrlen(stack);
	tmp = stack[len - 1];
	while (len > 0)
	{
		if (stack[len] != -1)
			stack[len] = stack[len - 1];
		len--;
	}
	stack[len] = tmp;
}

void	rrotate_r_bonus(int *stack_a, int *stack_b)
{
	int	tmp;
	int	len;

	if (stack_a[0] == -1 || stack_b[0] == -1)
		return ;
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
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:39:46 by hsebille          #+#    #+#             */
/*   Updated: 2022/12/13 18:56:21 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *stack_a)
{
	int	tmp;

	if (!stack_a || !stack_a->next)
		return ;
	tmp = stack_a->next->content;
	stack_a->next->content = stack_a->content;
	stack_a->content = tmp;
	write(1, "sa\n", 3);
}

void	swap_b(t_stack *stack_b)
{
	int	tmp;

	if (!stack_b || !stack_b->next)
		return ;
	tmp = stack_b->next->content;
	stack_b->next->content = stack_b->content;
	stack_b->content = tmp;
	write(1, "sb\n", 3);
}

void	swap_s(t_stack *stack_a, t_stack *stack_b)
{
	int	tmp;

	if (!stack_a || !stack_a->next || !stack_b || stack_b->next)
		return ;
	tmp = stack_a->next->content;
	stack_a->next->content = stack_a->content;
	stack_a->content = tmp;
	tmp = stack_b->next->content;
	stack_b->next->content = stack_b->content;
	stack_b->content = tmp;
	write(1, "ss\n", 3);
}

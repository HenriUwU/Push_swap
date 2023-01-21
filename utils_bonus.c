/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:11:08 by hsebille          #+#    #+#             */
/*   Updated: 2023/01/21 11:48:37 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	special_case(void)
{
	get_next_line(-1);
	return (write(2, "Error\n", 6));
}

static int	sort_parsing(int *stack_a, int *stack_b, char *line)
{
	if (ft_strncmp(line, "sa\n", 3) == 0)
		swap_bonus(stack_a);
	else if (ft_strncmp(line, "sb\n", 3) == 0)
		swap_bonus(stack_b);
	else if (ft_strncmp(line, "ss\n", 3) == 0)
		swap_s_bonus(stack_a, stack_b);
	else if (ft_strncmp(line, "pa\n", 3) == 0)
		push_a_bonus(stack_a, stack_b);
	else if (ft_strncmp(line, "pb\n", 3) == 0)
		push_b_bonus(stack_a, stack_b);
	else if (ft_strncmp(line, "ra\n", 3) == 0)
		rotate_bonus(stack_a);
	else if (ft_strncmp(line, "rb\n", 3) == 0)
		rotate_bonus(stack_b);
	else if (ft_strncmp(line, "rr\n", 3) == 0)
		rotate_r_bonus(stack_a, stack_b);
	else if (ft_strncmp(line, "rra\n", 4) == 0)
		rrotate_bonus(stack_a);
	else if (ft_strncmp(line, "rrb\n", 4) == 0)
		rrotate_bonus(stack_b);
	else if (ft_strncmp(line, "rrr\n", 4) == 0)
		rrotate_r_bonus(stack_a, stack_b);
	else
		return (special_case());
	return (0);
}

void	sort_bonus(int *stack_a, int *stack_b)
{
	int		i;
	int		checker;
	char	*line;

	i = 0;
	checker = 0;
	line = get_next_line(0);
	while (line != NULL)
	{
		checker = sort_parsing(stack_a, stack_b, line);
		if (checker == 6)
		{
			free(line);
			return ;
		}
		free(line);
		line = get_next_line(0);
	}
	if (is_sorted(stack_a, stack_b) == 1)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

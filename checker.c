/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:59:31 by hsebille          #+#    #+#             */
/*   Updated: 2023/01/21 14:53:43 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_stacks(int *stack_a, int *stack_b)
{
	free(stack_a);
	free(stack_b);
}

int	main(int argc, char **argv)
{
	char	**strs;
	int		*stack_a;
	int		*stack_b;
	int		size;

	if (argc == 1)
		return (0);
	size = 0;
	strs = into_array(argc, argv);
	if (strs == NULL)
		return (write(2, "Error\n", 6));
	while (strs[size])
		size++;
	stack_a = into_stack(strs, size);
	if (stack_a == NULL)
		return (write(2, "Error\n", 6));
	if (side_function(stack_a) == 6)
		return (0);
	stack_b = ft_calloc(sizeof(int), size + 1);
	stack_a = normalize(stack_a, size + 1);
	if (!stack_a || !stack_b)
		return (0);
	stack_b[0] = -1;
	sort_bonus(stack_a, stack_b);
	free_stacks(stack_a, stack_b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:53:22 by hsebille          #+#    #+#             */
/*   Updated: 2023/01/21 14:50:47 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort(int *stack_a, int *stack_b, int size)
{
	if (!stack_a || !stack_b)
		return ;
	if (size == 2)
		sort_two(stack_a);
	else if (size == 3)
		sort_three(stack_a, stack_b);
	else if (size == 4)
		main_sort(stack_a, stack_b, 1, size - 1);
	else if (size == 5)
		sort_five(stack_a, stack_b);
	else if (size >= 6 && size <= 100)
		main_sort(stack_a, stack_b, 3, size - 1);
	else if (size > 100 && size <= 200)
		main_sort(stack_a, stack_b, 4, size - 1);
	else if (size > 200 && size <= 300)
		main_sort(stack_a, stack_b, 5, size - 1);
	else if (size > 300 && size <= 400)
		main_sort(stack_a, stack_b, 6, size - 1);
	else
		main_sort(stack_a, stack_b, 8, size - 1);
}

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
	sort(stack_a, stack_b, size);
	free_stacks(stack_a, stack_b);
}

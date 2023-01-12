/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:53:22 by hsebille          #+#    #+#             */
/*   Updated: 2023/01/12 14:48:27 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stacks(int *stack_a, int *stack_b, int size)
{
	int	i;

	i = 0;
	if (!stack_a || !stack_b)
		return ;
	ft_printf("a b\n\n");
	while (size > i)
	{
		ft_printf("%d %d\n", stack_a[i], stack_b[i]);
		i++;
	}
}

static void	sort(int *stack_a, int *stack_b, int size)
{
	if (!stack_a || !stack_b)
		return ;
	if (size > 1 && size <= 6)
		main_sort(stack_a, stack_b, 1, size - 1);
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

static void	free_all(int *stack_a, int *stack_b)
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

	size = 0;
	strs = into_array(argc, argv);
	if (strs == NULL)
		return (write(2, "Error\n", 6));
	while (strs[size])
		size++;
	stack_a = into_stack(strs, size);
	if (stack_a == NULL)
		return (write(2, "Error\n", 6));
	stack_b = ft_calloc(sizeof(int), size + 1);
	if (check_duplicate(stack_a) == 1)
	{
		free_all(stack_a, stack_b);
		return (write(2, "Error\n", 6));
	}
	stack_a = normalize(stack_a, size + 1);
	if (!stack_a)
		return (0);
	stack_b[0] = -1;
	sort(stack_a, stack_b, size);
	free_all(stack_a, stack_b);
	return (0);
}

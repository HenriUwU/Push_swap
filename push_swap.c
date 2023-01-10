/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:53:22 by hsebille          #+#    #+#             */
/*   Updated: 2023/01/10 17:34:13 by hsebille         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	char	**strs;
	int		*stack_a;
	int		*stack_b;
	int		size;

	size = 0;
	strs = into_array(argc, argv);
	while (strs[size])
		size++;
	if (into_stack(strs, size) == NULL)
		return (write(2, "Error\n", 6));
	stack_a = into_stack(strs, size);
	stack_b = malloc(sizeof(int) * size + 1);
	if (check_duplicate(stack_a) == 1)
		return (write(2, "Error\n", 6));
	stack_a = normalize(stack_a, size + 1);
	stack_b[0] = -1;
	if (!stack_a || !stack_b)
		return (0);
	if (size > 3 && size <= 100)
		main_sort(stack_a, stack_b, 3, size - 1);
	else if (size > 100 && size <= 200)
		main_sort(stack_a, stack_b, 4, size - 1);
	else if (size > 200 && size <= 300)
		main_sort(stack_a, stack_b, 5, size - 1);
	else if (size > 300 && size <= 400)
		main_sort(stack_a, stack_b, 6, size - 1);
	else
		main_sort(stack_a, stack_b, 8, size - 1);
	print_stacks(stack_a, stack_b, size + 1);
}

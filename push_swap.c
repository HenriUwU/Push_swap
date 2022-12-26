/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:53:22 by hsebille          #+#    #+#             */
/*   Updated: 2022/12/26 15:57:38 by hsebille         ###   ########.fr       */
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
	while (i < size - 1)
	{
		ft_printf("%d %d\n", stack_a[i], stack_b[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	*stack_a;
	int	*stack_b;
	int	i;
	int	j;

	i = 0;
	j = 1;
	stack_a = malloc(sizeof(int) * argc + 1);
	stack_b = malloc(sizeof(int) * argc + 1);
	while (argv[j])
	{
		if (ft_atoi(argv[j]) == 2147483648)
			return (write(2, "Error\n", 6));
		stack_a[i++] = ft_atoi(argv[j++]);
	}
	if (check_duplicate(stack_a) == 1)
		return (write(2, "Error\n", 6));
	print_stacks(stack_a, stack_b, argc);
	stack_a = normalize(stack_a, argc);
	ft_printf("\n--------\n\n");
	print_stacks(stack_a, stack_b, argc + 1);
	return (0);
}

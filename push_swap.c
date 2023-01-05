/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:53:22 by hsebille          #+#    #+#             */
/*   Updated: 2023/01/05 17:41:20 by hsebille         ###   ########.fr       */
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
//	char	*tmp;
//	char	**tmp2;
	int		*stack_a;
	int		*stack_b;
//	int		i;
	int		size;

/*	tmp = malloc(sizeof(char) * ft_strlen(argv[1] + 1));
	ft_strlcpy(tmp, argv[1], ft_strlen(argv[1]) + 1);
	i = 2;
	while (argv[i])
	{
		tmp = ft_strjoin(tmp, argv[i]);
		i++;
	}
	tmp2 = ft_split(tmp, ' ');
	i = 0;
	while (tmp2[i])
		i++;
	stack_a = malloc(sizeof(int) * i + 1);
	stack_b = malloc(sizeof(int) * i + 1);
	i = 0;
	while (tmp2[i])
	{
		if (ft_atoi(tmp2[i]) == 2147483648)
			return (write(2, "Error\n", 6));
		stack_a[i] = ft_atoi(tmp2[i]);
		i++;
	}*/
	size = read_and_stack(argv, stack_a, stack_b);
//	if (check_duplicate(stack_a) == 1)
//		return (write(2, "Error\n", 6));
	stack_a = normalize(stack_a, size + 1);
	stack_b[0] = -1;
	print_stacks(stack_a, stack_b, size + 1);
}

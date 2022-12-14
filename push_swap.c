/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:53:22 by hsebille          #+#    #+#             */
/*   Updated: 2022/12/14 17:43:19 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"	

int	main(int argc, char **argv)
{
	int	*stack_a;
	int	i;
	int	j;

	i = 0;
	j = 1;
	stack_a = malloc (sizeof(int) * argc);
	while (argv[j])
	{
		if (ft_atoi(argv[j]) == 0 && ft_strchr(argv[j], '0'))
			return (write(2, "Error\n", 6));
		stack_a[i] = ft_atoi(argv[j]);
		ft_printf("%d\n", stack_a[i]);
		i++;
		j++;
	}
}

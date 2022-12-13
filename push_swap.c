/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:53:22 by hsebille          #+#    #+#             */
/*   Updated: 2022/12/13 18:47:43 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"	

t_stack	*ps_alloc_list(int content)
{
	t_stack	*stack_a;

	stack_a = malloc(sizeof(t_stack));
	if (stack_a == NULL)
		return (NULL);
	stack_a->content = content;
	stack_a->next = NULL;
	return (stack_a);
}

void	ps_print_list(t_stack *stack)
{
	while (stack)
	{
		ft_printf("lst : %d\n", stack->content);
		stack = stack->next;
	}
}

int	check_space(char **argv)
{
	int	check;
	int	i;
	int	j;

	check = 0;
	j = 0;
	i = 1;
	while (argv[i])
	{
		if (argv[i][0] == '\0')
			return (write(2, "Error\n", 6));
		while (argv[i][j])
		{
			if (argv[i][j] == ' ')
				check = 1;
			else
				check = 0;
			j++;
		}
		if (check == 1)
			return (write(2, "Error\n", 6));
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	t_stack	*stack_a;
	t_stack	*tmp;
	char	**figures;

	if (check_space(argv) > 0)
		return (0);
	j = 0;
	i = 2;
	str = ft_strdup(argv[1]);
	while (i < argc)
	{
		str = ft_strjoin(str, argv[i]);
		ft_printf("%s\n", str);
		i++;
	}
	i = 0;
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9') && (str[i] != ' '))
			return (write(2, "Error\n", 6));
		i++;
	}
	figures = ft_split(str, ' ');
	free(str);
	i = 0;
	stack_a = ps_alloc_list(ft_atoi(figures[i++]));
	tmp = stack_a;
	while (figures[i])
	{
		stack_a->next = ps_alloc_list(ft_atoi(figures[i++]));
		stack_a = stack_a->next;
	}
	stack_a = tmp;
	swap_a(stack_a);
	ps_print_list(stack_a);
	return (0);
}

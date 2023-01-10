/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:27:48 by hsebille          #+#    #+#             */
/*   Updated: 2023/01/10 17:41:41 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_duplicate(int *stack_a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (stack_a[i])
	{
		j = i + 1;
		while (stack_a[j])
		{
			if (stack_a[i] == stack_a[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	*normalize(int *stack, int size)
{
	int	i;
	int	j;
	int	tracker;
	int	*normalized;

	i = 0;
	normalized = malloc(sizeof(int) * size + 1);
	if (!normalized)
		return (0);
	while (i < size - 1)
	{
		tracker = 0;
		j = 0;
		while (j < size - 1)
		{
			if (stack[i] > stack[j])
				tracker++;
			j++;
		}
		normalized[i] = tracker;
		i++;
	}
	free(stack);
	normalized[i] = -1;
	return (normalized);
}

int	ft_arrlen(int *stack)
{
	int	i;

	if (!stack)
		return (0);
	i = 0;
	while (stack[i] != -1)
		i++;
	return (i);
}

char	**into_array(int argc, char **argv)
{
	char	*str;
	char	**strs;
	int		i;
	int		len;

	len = 1;
	i = 1;
	while (i < argc)
	{
		len += ft_strlen(argv[i]);
		len += 1;
		i++;
	}
	str = ft_calloc(len, sizeof(char));
	i = 1;
	while (i < argc)
	{
		ft_strlcat(str, argv[i], len);
		ft_strlcat(str, " ", len);
		i++;
	}
	strs = ft_split(str, ' ');
	return (strs);
}

int	*into_stack(char **strs, int size)
{
	int	*stack_a;
	int	i;

	i = 0;
	stack_a = malloc(sizeof(int) * size + 1);
	if (!stack_a)
		return (NULL);
	while (strs[i])
	{
		if (ft_atoi(strs[i]) == 2147483648)
			return (NULL);
		stack_a[i] = ft_atoi(strs[i]);
		i++;
	}
	return (stack_a);
}

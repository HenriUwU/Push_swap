/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:27:48 by hsebille          #+#    #+#             */
/*   Updated: 2023/01/05 17:48:14 by hsebille         ###   ########.fr       */
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

char	**read_and_split(char **argv)
{
	int		i;
	int		len;
	char	*str;
	char	**strs;

	str = malloc((sizeof(char) * ft_strlen(argv[1] + 1)));
	if (!str)
		return (0);
	ft_strlcpy(str, argv[1], ft_strlen(argv[1]) + 1);
	i = 2;
	len = 0;
	while (argv[len])
		len++;
	while (argv[i])
		str = ft_strjoin(str, argv[i++]);
	strs = ft_split(str, ' ');
	return (strs);
}

int	*into_stack(char **argv, int size)
{
	int		i;
	int		*stack;
	char	**strs;

	i = 0;
	strs = read_and_split(argv);
	stack = malloc(sizeof(int) * size + 1);
	while (strs[i])
	{
		if (ft_atoi(strs[i]) == 2147483648)
			return (NULL);
		stack[i] = ft_atoi(strs[i]);
		i++;
	}
	return (stack);
}

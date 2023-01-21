/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:27:48 by hsebille          #+#    #+#             */
/*   Updated: 2023/01/21 14:34:37 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	no_digit(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 2048)
			return (1);
		i++;
	}
	return (0);
}

static char	**check(char **strs, char *str)
{
	if (no_digit(str) == 0)
	{
		free(str);
		return (NULL);
	}
	strs = ft_split(str, ' ');
	free(str);
	return (strs);
}

char	**into_array(int argc, char **argv)
{
	char	*str;
	char	**strs;
	int		i;
	int		len;

	len = 1;
	i = 1;
	strs = NULL;
	while (i < argc)
	{
		len += ft_strlen(argv[i]);
		len += 1;
		i++;
	}
	str = ft_calloc(len, sizeof(char));
	if (!str)
		return (NULL);
	i = 1;
	while (i < argc)
	{
		ft_strlcat(str, argv[i++], len);
		ft_strlcat(str, " ", len);
	}
	strs = check(strs, str);
	return (strs);
}

static void	free_strs(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

int	*into_stack(char **strs, int size)
{
	int	*stack_a;
	int	i;

	i = 0;
	stack_a = ft_calloc(sizeof(int), size + 1);
	if (!stack_a)
		return (NULL);
	while (i < size)
	{
		if (ft_atoi(strs[i]) == 2147483648)
		{
			free_strs(strs);
			free(stack_a);
			return (NULL);
		}
		stack_a[i] = ft_atoi(strs[i]);
		i++;
	}
	free_strs(strs);
	return (stack_a);
}

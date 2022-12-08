/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:53:22 by hsebille          #+#    #+#             */
/*   Updated: 2022/12/08 21:12:57 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		if (argv[i][0] == '\0')
			return (write(2, "Error\n", 6));
	 	while (argv[i][j])
		{
			if (argv[i][j] == ' ')
				
		}
	}
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
		if ((str[i] <= '0' || str[i] >= '9') && (str[i] != ' '))
			return (write(2, "Error\n", 6));
		i++;
	}
	free(str);
	return (0);
}

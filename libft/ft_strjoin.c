/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsebille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:32:46 by hsebille          #+#    #+#             */
/*   Updated: 2023/01/09 15:59:55 by hsebille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char const *s2)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	if (!s1 || !s2)
	{
		free(s1);
		return (NULL);
	}
	dest = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (dest == NULL)
		return (NULL);
	while (s1[i])
		dest[j++] = s1[i++];
	i = 0;
	dest[j++] = ' ';
	while (s2[i])
		dest[j++] = s2[i++];
	dest[j] = '\0';
	return (dest);
}

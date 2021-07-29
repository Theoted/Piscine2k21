/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 17:57:15 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/29 14:16:08 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < size)
		j += ft_strlen(strs[i++]);
	if (size > 0)
		j += ((size - 1) * ft_strlen(sep));
	tab = malloc(sizeof(char) * (j + 1));
	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcpy(tab + j, strs[i]);
		j += ft_strlen(strs[i]);
		if (++i < size)
			j += (tab + j) + ft_strlen(sep) - ft_strcpy(tab + j, sep);
	}
	tab[j] = '\0';
	return (tab);
}

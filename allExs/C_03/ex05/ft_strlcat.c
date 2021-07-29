/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 20:37:53 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/29 13:45:53 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	j = 0;
	if (size < i)
		return (ft_strlen(src) + size);
	while (src[j] && (i + 1 < size))
	{	
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (i + ft_strlen(&src[j]));
}

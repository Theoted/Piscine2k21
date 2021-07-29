/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:12:52 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/14 09:34:48 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = -1;
	while (dest[i])
		i++;
	while (*src && ++j < nb)
	{
		dest[i] = *src;
		src++;
		i++;
	}	
	dest[i] = '\0';
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:24:11 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/14 16:44:12 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	to_find_size;

	i = 0;
	j = 0;
	to_find_size = ft_strlen(to_find);
	if (to_find[i] == '\0')
		return (&str[i]);
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			if (j == to_find_size - 1)
				return (&str[i]);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}

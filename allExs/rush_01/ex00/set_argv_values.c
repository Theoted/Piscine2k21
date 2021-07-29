/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 19:49:03 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/18 18:00:00 by rsoler           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	set_argv_val(char *a, char *tab)
{
	tab[1 + 6 * 0] = a[0];
	tab[2 + 6 * 0] = a[1];
	tab[3 + 6 * 0] = a[2];
	tab[4 + 6 * 0] = a[3];
	tab[1 + 6 * 5] = a[4];
	tab[2 + 6 * 5] = a[5];
	tab[3 + 6 * 5] = a[6];
	tab[4 + 6 * 5] = a[7];
	tab[0 + 6 * 1] = a[8];
	tab[0 + 6 * 2] = a[9];
	tab[0 + 6 * 3] = a[10];
	tab[0 + 6 * 4] = a[11];
	tab[5 + 6 * 1] = a[12];
	tab[5 + 6 * 2] = a[13];
	tab[5 + 6 * 3] = a[14];
	tab[5 + 6 * 4] = a[15];
	return (*tab);
}

char	parse_argv(char *str, char	*tab)
{
	int		i;
	int		j;
	char	*a;

	a = malloc(sizeof(*a) * 16);
	i = 0;
	j = 0;
	while (i < ft_strlen(str))
	{
		if ((i % 2 == 0))
		{	
			a[j] = str[i];
			j++;
		}	
		i++;
	}	
	*tab = set_argv_val(a, tab);
	return (*tab);
}

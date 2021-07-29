/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:01:43 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/29 17:57:50 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;	
	int	*tab1;

	i = 0;
	tab1 = malloc(sizeof(int) * length);
	if (!tab1)
		return (0);
	while (i < length)
	{
		tab1[i] = (*f)(tab[i]);
		i++;
	}
	return (tab);
}

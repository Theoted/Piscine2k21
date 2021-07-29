/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 13:41:54 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/23 10:10:11 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*int_arr;

	i = 0;
	int_arr = malloc(sizeof(int) * (max - min));
	if (!int_arr)
		return (0);
	if (min >= max)
		return (0);
	while (min < max)
	{
		int_arr[i] = min;
		min++;
		i++;
	}
	return (int_arr);
}

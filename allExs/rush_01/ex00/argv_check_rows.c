/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_check_rows.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 13:42:00 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/18 20:08:39 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
int	argv_check_row_left_four(char	*tab)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (y < 5)
	{
		if (tab[x + 6 * y] == '4')
		{
			if (tab[5 + 6 * y] != '1')
				return (0);
		}
		y++;
	}
	return (1);
}

int	argv_check_row_left_three(char *tab)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (y < 5)
	{
		if (tab[x + 6 * y] == '3')
		{
			if (tab[5 + 6 * y] > '2')
				return (0);
		}
		y++;
	}
	return (1);
}

int	argv_check_row_left_two(char *tab)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (y < 5)
	{
		if (tab[x + 6 * y] == '2')
		{
			if (tab[5 + 6 * y] == '4')
				return (0);
		}
		y++;
	}
	return (1);
}

int	argv_check_row_left_one(char *tab)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (y < 5)
	{
		if (tab[x + 6 * y] == '1')
		{
			if (tab[5 + 6 * y] == '1')
				return (0);
		}
		y++;
	}
	return (1);
}

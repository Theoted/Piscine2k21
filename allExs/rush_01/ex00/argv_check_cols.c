/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_check_cols.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoler <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 17:49:39 by rsoler            #+#    #+#             */
/*   Updated: 2021/07/18 20:23:08 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 10:52:17 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/18 17:48:55 by rsoler           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "main.h"
int	argv_check_col_up_four(char	*tab)
{
	int	x;
	int	y;

	x = 1;
	y = 0;
	while (x < 5)
	{
		if (tab[x + 6 * y] == '4')
		{
			if (tab[x + 6 * 5] != '1')
				return (0);
		}
		x++;
	}
	return (1);
}

int	argv_check_col_up_three(char *tab)
{
	int	x;
	int	y;

	x = 1;
	y = 0;
	while (x < 5)
	{
		if (tab[x + 6 * y] == '3')
		{
			if (tab[x + 6 * 5] > '2')
				return (0);
		}
		x++;
	}
	return (1);
}

int	argv_check_col_up_two(char *tab)
{
	int	x;
	int	y;

	x = 1;
	y = 0;
	while (x < 5)
	{
		if (tab[x + 6 * y] == '2')
		{
			if (tab[x + 6 * 5] == '4')
				return (0);
		}
		x++;
	}
	return (1);
}

int	argv_check_col_up_one(char *tab)
{
	int	x;
	int	y;

	x = 1;
	y = 0;
	while (x < 5)
	{
		if (tab[x + 6 * y] == '1')
		{
			if (tab[x + 6 * 5] == '1')
				return (0);
		}
		x++;
	}
	return (1);
}

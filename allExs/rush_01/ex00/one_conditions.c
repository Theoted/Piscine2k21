/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_conditions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 12:10:42 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/18 17:55:32 by rsoler           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	ft_col_up_one(char *tab)
{
	int	i;
	int	x;
	int	y;

	x = 0;
	y = 0;
	i = 0;
	if (tab[i])
		i++;
	while (i < 5)
	{
		if (tab[i] == '1')
		{
			y = 0;
			x = i;
			tab[x + 6 * (y + 1)] = '4';
		}
		i++;
	}
	return (*tab);
}

char	ft_col_down_one(char *tab)
{
	int	i;
	int	x;
	int	y;

	x = 0;
	y = 0;
	i = 31;
	while (i < 35)
	{
		if (tab[i] == '1')
		{
			y = 0;
			x = i;
			tab[x + 6 * (y + -1)] = '4';
		}
		i++;
	}
	return (*tab);
}

char	ft_row_left_one(char *tab)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (y < 6)
	{
		if (tab[x + 6 * y] == '1')
			tab[(x + 1) + 6 * y] = '4';
		y++;
	}
	return (*tab);
}

char	ft_row_right_one(char *tab)
{
	int	x;
	int	y;

	x = 5;
	y = 1;
	while (y < 6)
	{
		if (tab[x + 6 * y] == '1')
		{
			tab[(x - 1) + 6 * y] = '4';
		}
		y++;
	}
	return (*tab);
}

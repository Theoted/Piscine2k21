/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four_conditions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 11:09:16 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/18 17:52:53 by rsoler           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	ft_col_up_four(char *tab)
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
		if (tab[i] == '4')
		{
			y = 0;
			x = i;
			tab [x + 6 * (y + 1)] = '1';
			tab [x + 6 * (y + 2)] = '2';
			tab [x + 6 * (y + 3)] = '3';
			tab [x + 6 * (y + 4)] = '4';
		}
		i++;
	}
	return (*tab);
}

char	ft_col_down_four(char *tab)
{
	int	i;
	int	x;
	int	y;

	i = 31;
	y = 5;
	x = 1;
	while (i < 35)
	{
		if (tab[i] == '4')
		{
			tab[x + 6 * (y - 1)] = '1';
			tab[x + 6 * (y - 2)] = '2';
			tab[x + 6 * (y - 3)] = '3';
			tab[x + 6 * (y - 4)] = '4';
		}
		x++;
		i++;
	}
	return (*tab);
}

char	ft_row_left_four(char *tab)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (y < 6)
	{
		if (tab[x + 6 * y] == '4')
		{
			tab[(x + 1) + 6 * y] = '1';
			tab[(x + 2) + 6 * y] = '2';
			tab[(x + 3) + 6 * y] = '3';
			tab[(x + 4) + 6 * y] = '4';
		}
		y++;
	}
	return (*tab);
}

char	ft_row_right_four(char *tab)
{
	int	x;
	int	y;

	x = 5;
	y = 1;
	while (y < 6)
	{
		if (tab[x + 6 * y] == '4')
		{
			tab[(x - 1) + 6 * y] = '1';
			tab[(x - 2) + 6 * y] = '2';
			tab[(x - 3) + 6 * y] = '3';
			tab[(x - 4) + 6 * y] = '4';
		}
		y++;
	}
	return (*tab);
}

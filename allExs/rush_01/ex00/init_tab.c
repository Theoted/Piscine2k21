/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 17:32:40 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/18 20:23:03 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "main.h"
void	set_up_tab(char *tab, int init)
{	
	int	i;

	i = 0;
	if (init == 0)
	{
		while (i < 36)
		{
			tab[i] = 48;
			i++;
		}
	}
}

void	print_updated_tab(char *tab, int init)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	if (init == 1)
	{
		while (i < 36)
		{
			print_four(tab, i);
			if (!(count < 6) && (count != 6
					&& count != 12 && count != 18 && count != 24
					&& count != 30 && count != 36))
				write(1, " ", 1);
			if (count == 6 || count == 12 || count == 18 || count == 24
				|| count == 30)
				write(1, "\n", 1);
			i++;
			count++;
			init = 1;
		}
	}
}

int	print_four(char *tab, int	i)
{
	if (i >= 7 && i <= 10)
		write(1, &tab[i], 1);
	if (i >= 13 && i <= 16)
		write(1, &tab[i], 1);
	if (i >= 19 && i <= 22)
		write(1, &tab[i], 1);
	if (i >= 25 && i <= 28)
		write(1, &tab[i], 1);
	i++;
	return (i);
}

int	init_tab(char *value)
{
	char	*tab;
	int		init;

	init = 0;
	tab = malloc(sizeof(*tab) * 36);
	if (init == 0)
	{
		set_up_tab(tab, init);
		init = 1;
	}
	*tab = parse_argv(value, tab);
	if (check_argvs_cols(tab) == 1 || check_argvs_rows(tab) == 1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	*tab = four_conditions_test(tab);
	*tab = one_conditions_test(tab);
	print_updated_tab(tab, init);
	free(tab);
	return (0);
}

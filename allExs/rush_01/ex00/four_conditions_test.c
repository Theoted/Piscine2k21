/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_conditions_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 12:19:16 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/18 12:23:36 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	four_conditions_test(char *tab)
{
	*tab = ft_col_up_four(tab);
	*tab = ft_row_left_four(tab);
	*tab = ft_col_down_four(tab);
	*tab = ft_row_right_four(tab);
	return (*tab);
}

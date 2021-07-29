/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_conditions_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 12:24:29 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/18 13:16:33 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "main.h"
char	one_conditions_test(char *tab)
{
	*tab = ft_col_up_one(tab);
	*tab = ft_row_left_one(tab);
	*tab = ft_col_down_one(tab);
	*tab = ft_row_right_one(tab);
	return (*tab);
}

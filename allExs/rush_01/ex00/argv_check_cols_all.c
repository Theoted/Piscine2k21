/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_check_col_up_all.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 13:31:00 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/18 20:23:06 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "main.h"
int	check_argvs_cols(char	*tab)
{
	if (argv_check_col_up_one(tab) != 1)
		return (1);
	if (argv_check_col_up_two(tab) != 1)
		return (1);
	if (argv_check_col_up_three(tab) != 1)
		return (1);
	if (argv_check_col_up_four(tab) != 1)
		return (1);
	return (0);
}

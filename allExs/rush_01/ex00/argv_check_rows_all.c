/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_check_rows_all.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 13:47:12 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/18 20:15:43 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
int	check_argvs_rows(char	*tab)
{
	if (argv_check_row_left_one(tab) != 1)
		return (1);
	if (argv_check_row_left_two(tab) != 1)
		return (1);
	if (argv_check_row_left_three(tab) != 1)
		return (1);
	if (argv_check_row_left_four(tab) != 1)
		return (1);
	return (0);
}

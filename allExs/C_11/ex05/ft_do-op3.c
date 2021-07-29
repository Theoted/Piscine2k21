/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do-op3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 10:47:35 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/28 11:43:59 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	ft_operator(char **argv)
{
	int		(*f[5])(char **);
	int		i;
	char	*operators;

	i = 0;
	operators = "*+-%/";
	f[0] = &ft_time;
	f[1] = &ft_plus;
	f[2] = &ft_minus;
	f[3] = &ft_mod;
	f[4] = &ft_div;
	while (i < 5)
	{
		if (argv[2][0] == operators[i])
			f[i](argv);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{	
	if (argc != 4)
		return (0);
	if (ft_strlen(argv[2]) != 1)
	{
		ft_putchar('0');
		return (0);
	}	
	if (ft_check_arg(argc, argv[2][0]))
		return (0);
	ft_operator(argv);
	return (0);
}

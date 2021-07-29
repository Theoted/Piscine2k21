/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do-op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 19:21:25 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/28 11:43:20 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	ft_time(char **argv)
{
	int		arg_one;
	int		arg_two;

	arg_one = ft_atoi(argv[1]);
	arg_two = ft_atoi(argv[3]);
	ft_putnbr(arg_one * arg_two);
	return (0);
}

int	ft_plus(char **argv)
{
	int	arg_one;
	int	arg_two;

	arg_one = ft_atoi(argv[1]);
	arg_two = ft_atoi(argv[3]);
	ft_putnbr(arg_one + arg_two);
	return (0);
}

int	ft_minus(char **argv)
{
	int	arg_one;
	int	arg_two;

	arg_one = ft_atoi(argv[1]);
	arg_two = ft_atoi(argv[3]);
	ft_putnbr(arg_one - arg_two);
	return (0);
}

int	ft_mod(char **argv)
{
	int	arg_one;
	int	arg_two;

	if (ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	arg_one = ft_atoi(argv[1]);
	arg_two = ft_atoi(argv[3]);
	ft_putnbr(arg_one % arg_two);
	return (0);
}

int	ft_div(char **argv)
{
	int	arg_one;
	int	arg_two;

	if (ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	arg_one = ft_atoi(argv[1]);
	arg_two = ft_atoi(argv[3]);
	ft_putnbr(arg_one / arg_two);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do-op2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 09:52:48 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/28 11:43:57 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	n = nb;
	if (nb < 0)
	{
		n = -nb;
		write(1, "-", 1);
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_arg(int argc, char arg)
{
	if (argc != 4)
		return (1);
	if (arg != '*' && arg != '+' && arg != '/' && arg != '-' && arg != '%')
	{
		ft_putchar('0');
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	calc;
	int	neg;

	i = 0;
	calc = 0;
	neg = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		calc = (calc * 10) + (str[i] - 48);
		i++;
	}
	return (calc * neg);
}

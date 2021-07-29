/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 17:17:39 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/29 14:04:35 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	ft_check_base(char *str)
{
	int	i;
	int	j;

	i = -1;
	j = 1;
	if (ft_strlen(str) <= 1)
		return (0);
	while (str[++i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
	}
	i = -1;
	while (str[++i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;

	n = nbr;
	if (!ft_check_base(base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		n = -nbr;
	}
	if (n > ft_strlen(base))
		ft_putnbr_base(n / ft_strlen(base), base);
	ft_putchar(base[n % ft_strlen(base)]);
}

int	main()
{
	ft_putnbr_base(121531, "0123456789abcdef");
}

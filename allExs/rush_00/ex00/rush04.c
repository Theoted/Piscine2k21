/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 14:50:45 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/10 15:06:34 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int		c;
	int		d;

	c = 0;
	d = 0;
	if ((x <= 0) || (y <= 0))
		return ;
	while (++d <= y)
	{
		while (++c <= x)
		{
			if ((d == 1 && c == 1) || (d == y && c == x))
				ft_putchar('A');
			else if ((d == 1 && c == x) || (d == y && c == 1))
				ft_putchar('C');
			else if ((c == 1 || c == x) || (d == 1 || d == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		c = 0;
		write(1, "\n", 1);
	}
}

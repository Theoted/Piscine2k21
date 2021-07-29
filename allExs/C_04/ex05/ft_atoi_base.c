/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:12:52 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/29 13:43:51 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_pos(char a, char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if (a == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (ft_strlen(str) <= 1)
		return (0);
	while (str[i])
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' '
			|| str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int			i;
	int			neg;
	long int	calc;

	i = 0;
	neg = 1;
	calc = 0;
	if (!ft_check_base(base))
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13) || str[i] == '-'
		|| str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (ft_pos(str[i], base) != -1)
	{
		calc = (calc * ft_strlen(base)) + (ft_pos(str[i], base));
		i++;
	}
	return (calc * neg);
}

int main ()
{
	char b[] = "     \n\r\t\v\f+----+-opyeyinovp";
	char a[] = "poneyivif";

	printf("Expected output: a recuperer sur le site jalu.ch (cf. Notion)\n");
	printf("Output: %i\n",ft_atoi_base(b,a));
}

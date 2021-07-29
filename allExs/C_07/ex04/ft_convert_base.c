/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 07:47:46 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/29 14:54:39 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_atoi_base(char *str, char *base);
int	ft_strlen(char *str);

char	*ft_rev_tab(char *str)
{
	int		i;
	int		j;
	char	temp;

	if (str[0] == '-')
		i = 1;
	else
		i = 0;
	j = ft_strlen(str) - 1;
	temp = '0';
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}	
	return (str);
}

int	ft_int_lenght(int	nb, char *base_to)
{
	int	len;

	len = 0;
	while (nb > ft_strlen(base_to))
	{
		nb = nb / ft_strlen(base_to);
		len++;
	}
	len++;
	return (len);
}

int	ft_check_putnbr_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(base) == 0)
		return (1);
	while (base[i])
	{
		if (ft_strlen(base) < 2)
			return (1);
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

char	*ft_putnbr_base_ts(int	nb, char *base_to)
{
	int			i;
	char		*tab;
	long int	n;

	i = 0;
	n = nb;
	if (ft_check_putnbr_base(base_to))
		return (NULL);
	if (nb < 0)
	{
		n = -n;
		tab = malloc(sizeof(char) * (ft_int_lenght(n, base_to) + 2));
		tab[i] = '-';
		i++;
	}
	else
		tab = malloc(sizeof(char) * ft_int_lenght(nb, base_to) + 1);
	while (n >= ft_strlen(base_to))
	{	
		tab[i++] = base_to[n % ft_strlen(base_to)];
		n = n / ft_strlen(base_to);
	}
	tab[i] = base_to[n % ft_strlen(base_to)];
	tab[i + 1] = '\0';
	return (ft_rev_tab(tab));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*tab;

	if (ft_check_putnbr_base(base_from))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	tab = ft_putnbr_base_ts(nb, base_to);
	return (tab);
}

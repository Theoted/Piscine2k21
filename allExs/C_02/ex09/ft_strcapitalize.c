/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 10:13:22 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/12 15:27:03 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha_num(char *str)
{
	if ((str[0] > 64 && str[0] < 91) || (str[0] > 96 && str[0] < 123))
		return (1);
	else if ((str[0] > 47 && str[0] < 58))
		return (1);
	else
		return (0);
}

int	ft_str_is_lowercase(char *str)
{
	if ((str[0] < 97) || (str[0] > 122))
		return (0);
	return (1);
}

int	ft_str_is_uppercase(char *str)
{
	if ((str[0] < 65) || (str[0] > 90))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_str_is_alpha_num(&str[i]))
		{
			if (ft_str_is_lowercase(&str[i]))
				str[i] -= 32;
			i++;
			while (ft_str_is_alpha_num(&str[i]))
			{					
				if (ft_str_is_uppercase(&str[i]))
				{
					str[i] += 32;
				}
				i++;
			}			
		}	
		i++;
	}
	return (str);
}

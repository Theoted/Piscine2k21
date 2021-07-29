/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 12:59:15 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/28 16:34:30 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_count_word(char *str, char *charset);
int	ft_check_word(char *str, char *charset, int i, int x);

int	ft_check_char(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strndup(char *str, char *charset, int i)
{
	char	*word;
	int		j;
	int		k;

	j = 0;
	k = ft_check_word(str, charset, i, 1);
	word = malloc(sizeof(char) * (k + 1));
	while (j < k)
	{
		if (ft_check_char(str[i], charset))
			i++;
		else
		{
			word[j] = str[i];
			j++;
			i++;
		}	
	}
	word[j] = 0;
	return (word);
}

int	ft_count_word(char *str, char *charset)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (str[i])
	{	
		while (ft_check_char(str[i], charset))
			i++;
		if (!ft_check_char(str[i], charset) && str[i])
			word_count++;
		while (!ft_check_char(str[i], charset) && str[i])
			i++;
		while (ft_check_char(str[i], charset))
			i++;
	}
	return (word_count);
}

int	ft_check_word(char *str, char *charset, int i, int x)
{
	int	j;

	j = 0;
	while (ft_check_char(str[i], charset) && str[i])
		i++;
	while (!ft_check_char(str[i], charset) && str[i])
	{	
		i++;
		j++;
	}
	while (ft_check_char(str[i], charset) && str[i])
		i++;
	if (x == 1)
		return (j);
	else
		return (i);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		a;
	int		j;
	char	**split;

	i = 0;
	a = 0;
	j = 0;
	split = malloc(sizeof(char *) * (ft_count_word(str, charset) + 1));
	while (j < ft_count_word(str, charset))
	{
		split[a] = ft_strndup(str, charset, i);
		a++;
		i = ft_check_word(str, charset, i, 2);
		j++;
	}
	split[a] = 0;
	return (split);
}

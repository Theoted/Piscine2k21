/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 14:59:40 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/26 18:42:33 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_check_char(char c, char *charset);
int	ft_check_word(char *str, char *charset, int i, int x);

int	ft_word_nb(char *str, char *charset)
{
	int	i;
	int	word_nb;

	i = 0;
	word_nb = 0;
	while (str[i])
	{
		while (ft_check_char(str[i], charset))
			i++;
		if (!ft_check_char(str[i], charset) && str[i])
			word_nb++;
		while (!ft_check_char(str[i], charset) && str[i])
			i++;
		while (ft_check_char(str[i], charset))
			i++;
	}
	return (word_nb);
}

char	*ft_strndup(char *src, char *charset, int i)
{
	char	*word;
	int		j;
	int		k;

	j = 0;
	k = ft_check_word(src, charset, i, 1);
	word = malloc(sizeof(char) * (ft_check_word(src, charset, i, 1) + 1));
	while (j < k)
	{
		if (ft_check_char(src[i], charset))
			i++;
		else
		{
			word[j] = src[i];
			j++;
			i++;
		}
	}
	word[j] = 0;
	return (word);
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

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		j;
	int		a;
	int		i;

	j = 0;
	a = 0;
	i = 0;
	split = malloc(sizeof(char *) * (ft_word_nb(str, charset) + 1));
	while (j < ft_word_nb(str, charset))
	{
		split[a] = ft_strndup(str, charset, i);
		i = ft_check_word(str, charset, i, 2);
		a++;
		j++;
	}
	split[a] = 0;
	return (split);
}

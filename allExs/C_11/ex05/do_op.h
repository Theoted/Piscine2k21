/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sort.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 09:14:47 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/28 11:54:34 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
int		ft_check_arg(int argc, char arg);
int		ft_atoi(char *str);
int		ft_time(char **argv);
int		ft_plus(char **argv);
int		ft_minus(char **argv);
int		ft_mod(char **argv);
int		ft_div(char **argv);
int		ft_operator(char **argv);

#endif

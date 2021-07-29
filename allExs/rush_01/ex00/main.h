/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 12:06:22 by tdeville          #+#    #+#             */
/*   Updated: 2021/07/18 20:23:10 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
# include <unistd.h>
# include <stdlib.h>
char	ft_col_up_four(char *tab);
char	ft_col_down_four(char *tab);
char	ft_row_left_four(char *tab);
char	ft_row_right_four(char *tab);
char	ft_col_up_one(char *tab);
char	ft_col_down_one(char *tab);
char	ft_row_left_one(char *tab);
char	ft_row_right_one(char *tab);
char	parse_argv(char	*str, char	*tab);
char	four_conditions_test(char *tab);
char	one_conditions_test(char *tab);
int		argv_check_col_up_four(char	*tab);
int		argv_check_col_up_three(char *tab);
int		argv_check_col_up_two(char *tab);
int		argv_check_col_up_one(char *tab);
int		check_argvs_rows(char *tab);
int		check_argvs_cols(char *tab);
int		argv_check_row_left_four(char	*tab);
int		argv_check_row_left_three(char *tab);
int		argv_check_row_left_two(char *tab);
int		argv_check_row_left_one(char *tab);
char	ft_backtrack(char *tab);
int		init_tab(char *value);
void	print_updated_tab(char *tab, int init);
void	set_up_tab(char *tab, int init);
int		print_four(char *tab, int i);
#endif

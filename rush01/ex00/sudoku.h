/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   suduko.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 05:04:25 by ydang             #+#    #+#             */
/*   Updated: 2016/07/24 05:04:26 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_nbr(int n);
void	print_ans(char **tab);
void	print_error(void);
char	**savepuzzle(char **argv);
void	free_puzzle(char **puzzle);

int		sudoku(char **puzzle);
int		find_dot_pos(char **puzzle, int *row, int *col);
int		error_check(int ac, char **av);
int		valid_char(char c);
int		puzzle_col(char **puzzle, int row, int col, char num);
int		puzzle_row(char **puzzle, int row, int col, char num);
int		puzzle_box(char **puzzle, int row_box, int col_box, char num);
int		possible_find(char **puzzle, int row, int col, char num);

#endif

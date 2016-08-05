/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 07:27:45 by ydang             #+#    #+#             */
/*   Updated: 2016/07/31 07:27:46 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);
void	ft_length_print(int length, int y, int x, int width);
void	ft_print_middle_rows_results(int width, int x);
void	ft_print_top_rows_results(int width, int x);
void	ft_print_bottom_rows_results(int width, int x);
void	ft_print_middle_colunms_results(int length, int y);
int		ft_atoi_1(char **str);
int		ft_atoi_2(char **str);

#endif

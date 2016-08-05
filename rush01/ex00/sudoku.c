/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 19:37:58 by ydang             #+#    #+#             */
/*   Updated: 2016/07/24 19:37:59 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	sudoku(char **puzzle)
{
	int		row;
	int		col;
	char	num;

	if (!find_dot_pos(puzzle, &row, &col))
	{
		return (1);
	}
	num = '1';
	while (num <= '9')
	{
		if (possible_find(puzzle, row, col, num))
		{
			puzzle[row][col] = num;
			if (sudoku(puzzle))
			{
				return (1);
			}
			puzzle[row][col] = '.';
		}
		num++;
	}
	return (0);
}

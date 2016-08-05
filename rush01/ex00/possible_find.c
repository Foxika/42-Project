/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possible_find.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 19:20:45 by ydang             #+#    #+#             */
/*   Updated: 2016/07/24 19:20:47 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	puzzle_col(char **puzzle, int row, int col, char num)
{
	row = 0;
	while (row < 9)
	{
		if (puzzle[row][col] == num)
		{
			return (1);
		}
		row++;
	}
	return (0);
}

int	puzzle_row(char **puzzle, int row, int col, char num)
{
	col = 0;
	while (col < 9)
	{
		if (puzzle[row][col] == num)
		{
			return (1);
		}
		col++;
	}
	return (0);
}

int	puzzle_box(char **puzzle, int row_box, int col_box, char num)
{
	int row;
	int col;

	row = 0;
	while (row < 3)
	{
		col = 0;
		while (col < 3)
		{
			if (puzzle[row + (3 * row_box)][col + (3 * col_box)] == num)
			{
				return (1);
			}
			col++;
		}
		row++;
	}
	return (0);
}

int	possible_find(char **puzzle, int row, int col, char num)
{
	if (!puzzle_row(puzzle, row, col, num))
	{
		if (!puzzle_col(puzzle, row, col, num))
		{
			if (!puzzle_box(puzzle, row / 3, col / 3, num))
			{
				return (1);
			}
			return (0);
		}
		return (0);
	}
	return (0);
}

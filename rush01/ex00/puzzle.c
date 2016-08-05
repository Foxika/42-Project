/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 19:35:12 by ydang             #+#    #+#             */
/*   Updated: 2016/07/24 19:35:14 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

char	**savepuzzle(char **argv)
{
	char	**puzzle;
	int		i;
	int		j;

	puzzle = (char**)malloc(sizeof(char*) * 10);
	i = 0;
	while (i < 9)
	{
		j = 0;
		puzzle[i] = (char*)malloc(sizeof(char) * 10);
		while (j < 9)
		{
			puzzle[i][j] = argv[i + 1][j];
			j++;
		}
		puzzle[i][j] = '\0';
		i++;
	}
	puzzle[i] = 0;
	return (puzzle);
}

void	free_puzzle(char **puzzle)
{
	int	i;

	i = 0;
	while (puzzle[i])
	{
		free(puzzle[i]);
		i++;
	}
	free(puzzle);
}

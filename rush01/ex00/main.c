/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 05:00:14 by ydang             #+#    #+#             */
/*   Updated: 2016/07/24 05:00:16 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		main(int argc, char **argv)
{
	char **puzzle;

	if (error_check(argc, argv))
	{
		print_error();
		return (0);
	}
	puzzle = savepuzzle(argv);
	if (argv == NULL)
	{
		print_error();
	}
	else if (sudoku(puzzle))
	{
		print_ans(puzzle);
	}
	else
	{
		print_error();
	}
	free_puzzle(puzzle);
	return (0);
}

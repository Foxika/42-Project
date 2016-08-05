/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 18:58:25 by ydang             #+#    #+#             */
/*   Updated: 2016/07/24 18:58:28 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		error_check(int ac, char **av)
{
	int		i;
	int		j;

	if (ac != 10)
		return (1);
	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (!valid_char(av[i][j]))
			{
				return (1);
			}
			j++;
		}
		if (j != 9)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int		valid_char(char c)
{
	if (!(c >= '0' && c <= '9') && c != '.')
	{
		return (0);
	}
	return (1);
}

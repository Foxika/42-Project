/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <kzeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 20:35:43 by kzeng             #+#    #+#             */
/*   Updated: 2016/07/16 21:46:01 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_print_middle_rows_results(int width, int x)
{
	if (width == 0 || width == x - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	ft_length_print(int length, int y, int x, int width)
{
	if (length == 0 || length == y - 1)
	{
		if (width == 0)
		{
			ft_putchar('A');
		}
		else if (width == x - 1)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
	}
	else
	{
		ft_print_middle_rows_results(width, x);
	}
}

void	rush(int x, int y)
{
	int width;
	int length;

	if ((x > 0) && (y > 0))
	{
		length = 0;
		while (length < y)
		{
			width = 0;
			while (width < x)
			{
				ft_length_print(length, y, x, width);
				width++;
			}
			ft_putchar('\n');
			length++;
		}
	}
	else
	{
		write(1, "\n", 1);
	}
}

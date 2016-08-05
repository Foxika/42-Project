/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 09:39:10 by ddelgado          #+#    #+#             */
/*   Updated: 2016/07/17 09:39:13 by ddelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_print_middle_rows_results(int width, int x)
{
	if ((width == 0) || (width == x - 1))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	ft_print_top_rows_results(int width, int x)
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

void	ft_print_bottom_rows_results(int width, int x)
{
	if (width == 0)
	{
		ft_putchar('C');
	}
	else if (width == x - 1)
	{
		ft_putchar('A');
	}
	else
	{
		ft_putchar('B');
	}
}

void	ft_length_print(int length, int y, int x, int width)
{
	if (length == 0)
	{
		ft_print_top_rows_results(width, x);
	}
	else if (length == y - 1)
	{
		ft_print_bottom_rows_results(width, x);
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

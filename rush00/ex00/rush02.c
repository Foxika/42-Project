/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 14:54:07 by ydang             #+#    #+#             */
/*   Updated: 2016/07/17 15:33:03 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_middle_colunms_results(int length, int y)
{
	if (length == 0 || length == y - 1)
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
	if (width == 0 || width == x - 1)
	{
		if (length == 0)
		{
			ft_putchar('A');
		}
		else if (length == y - 1)
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
		ft_print_middle_colunms_results(length, y);
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
}

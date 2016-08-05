/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 08:37:10 by ydang             #+#    #+#             */
/*   Updated: 2016/07/31 08:37:12 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		ft_atoi_1(char **str)
{
	int	i;
	int	nbr;
	int	negative;

	nbr = 0;
	negative = 0;
	i = 0;
	while ((str[1][i] == '\n') || (str[1][i] == '\t') || (str[1][i] == '\v'))
		i++;
	while ((str[1][i] == ' ') || (str[1][i] == '\f') || (str[1][i] == '\r'))
		i++;
	if (str[1][i] == '-')
		negative = 1;
	if (str[1][i] == '+' || str[1][i] == '-')
		i++;
	while (str[1][i] && (str[1][i] >= '0') && (str[1][i] <= '9'))
	{
		nbr *= 10;
		nbr += str[1][i] - '0';
		i++;
	}
	if (negative == 1)
		return (-nbr);
	else
		return (nbr);
}

int		ft_atoi_2(char **str)
{
	int	i;
	int	nbr;
	int	negative;

	nbr = 0;
	negative = 0;
	i = 0;
	while ((str[2][i] == '\n') || (str[2][i] == '\t') || (str[2][i] == '\v'))
		i++;
	while ((str[2][i] == ' ') || (str[2][i] == '\f') || (str[2][i] == '\r'))
		i++;
	if (str[2][i] == '-')
		negative = 1;
	if (str[2][i] == '+' || str[2][i] == '-')
		i++;
	while (str[2][i] && (str[2][i] >= '0') && (str[2][i] <= '9'))
	{
		nbr *= 10;
		nbr += str[2][i] - '0';
		i++;
	}
	if (negative == 1)
		return (-nbr);
	else
		return (nbr);
}

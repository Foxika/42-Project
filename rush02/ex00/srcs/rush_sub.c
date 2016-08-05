/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_sub.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 22:43:40 by ydang             #+#    #+#             */
/*   Updated: 2016/07/31 22:43:42 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	**rush04_sub(int x, int y, char **ref)  /*WE WOULD HAVE DONE THIS FOR EACH ONE BUT FATE WANTED IT DIFFERENTLY! */
{
	int i;
	int j;

	j = 0;
	while (j <= y)
	{
		ref[j] = (char*)malloc(sizeof(char) * x + 1);
		i = 0;
		while (i <= x)
		{
			if ((j == 1 && i == 1) || (j == y && j != 1 && i == x && i != 1))
				r[j][i] = 'A';
			if ((j == 1 && i == x && i != 1) || (j == y && j != 1 && i == 1))
				r[j][i] = 'C';
			if (((j == 1 || j == y) && (i > 1 && i < x)) || ((j > 1 && j < y) && (i == 1 || i == x)))
				r[j][i] = 'B';
			if (((j > 1 && j < y) && (i > 1 && i < x)))
				r[j][i] = ' ';
			i++;
		}
		r[j][i] = '\n';
		j++;
	}
}

void	**rush03_sub(int x, int y, char **ref)
{
	int i;
	int j;

	j = 0;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((j == 1 || j == y) && i == 1)
				r[j][i] = 'A';
			if ((j == 1 || j == y) && i == x && x != 1)
				r[j][i] = 'C';
			if (((j == 1 || j == y) && (i > 1 && i < x)) || ((j > 1 && j < y) && (i == 1 || i == x)))
				r[j][i] = 'B';
			if (((j > 1 && j < y) && (i > 1 && i < x)))
				r[j][i] = ' ';
			i++;
		}
		r[j][i] = '\n';
		j++;
	}
}

void	**rush02_sub(int x, int y, char **ref)
{
	int i;
	int j;

	j = 0;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((i == 1 || (i == x && i != 1)) && j == 1)
				r[j][i] = 'A';
			if ((i == 1 || (i == x && i != 1)) && j == y && j != 1)
				r[j][i] = 'C';
			if (((j == 1 || j == y) && (i > 1 && i < x)) || ((j > 1 && j < y) && (i == 1 || i == x)))
				r[j][i] = 'B';
			if (((j > 1 && j < y) && (i > 1 && i < x)))
				r[j][i] = ' ';
			i++;
		}
		r[j][i] = '\n';
		j++;
	}
}

void	rush01_sub(int j, int x, int y, int count, char *r)
{
	int i;

	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((j == 1 && i == 1) || (j == y && j != 1 && i == x && i != 1))
				r[count] = '/';
			if ((j == 1 && i == x && i != 1) || (j == y && j != 1 && i == 1))
				r[count] = '\\';
			if (((j == 1 || j == y) && (i > 1 && i < x)) || ((j > 1 && j < y) && (i == 1 || i == x)))
				r[count] = '*';
			if (((j > 1 && j < y) && (i > 1 && i < x)))
				r[count] = ' ';
			i++;
			count++;
		}
		r[count] = '\n';
		count++;
		j++;
	}
}

void	rush00_sub(int j, int x, int y, int count, char *r)
{
	int i;

	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((j == 1 && (i == 1 || i == x)) || (j == y && (i == 1 || (i == x && j != 1))))
				r[count] = 'o';
			if ((j > 1 && j < y) && (i == 1 || i == x))
				r[count] = '|';
			if ((j == 1 || j == y) && (i > 1 && i < x))
				r[count] = '-';
			if ((j > 1 && j < y) && (i > 1 && i < x))
				r[count] = ' ';
			i++;
			count++;
		}
		r[count] = '\n';
		count++;
		j++;
	}
}

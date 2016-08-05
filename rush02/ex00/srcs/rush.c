/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 19:53:07 by ydang             #+#    #+#             */
/*   Updated: 2016/07/31 19:53:09 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	**rush00(int x, int y)//should have done this early
{
	int		j;
	int		count;
	char	**ref;

	j = 1;
	count = 0;
	ref = (char**)malloc(sizeof(char*) * y);
	return (rush00_sub(x, y, ref));
}

char	*rush01(int x, int y)
{
	int		j;
	int		count;
	char	*ref;

	j = 1;
	count = 0;
	ref = malloc((sizeof(char) * (x * y) + y));
	rush01_sub(j, x, y, count, ref);
	return (ref);
}

char	*rush02(int x, int y)
{
	int		j;
	int		count;
	char	*ref;

	j = 1;
	count = 0;
	ref = malloc((sizeof(char) * (x * y) + y));
	rush02_sub(j, x, y, count, ref);
	return (ref);
}

char	*rush03(int x, int y)
{
	int		j;
	int		count;
	char	*ref;

	j = 1;
	count = 0;
	ref = malloc((sizeof(char) * (x * y) + y));
	rush03_sub(j, x, y, count, ref);
	return (ref);
}

char	*rush04(int x, int y)
{
	int		j;
	int		count;
	char	*ref;

	j = 1;
	count = 0;
	ref = malloc((sizeof(char) * (x * y) + y));
	rush04_sub(j, x, y, count, ref);
	return (ref);
}

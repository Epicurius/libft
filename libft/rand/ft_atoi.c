/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@stuent.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:26:46 by nneronin          #+#    #+#             */
/*   Updated: 2020/02/26 19:04:22 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdio.h>

int		ft_atoi(const char *str)
{
	int res;
	int i;
	int neg;

	res = 0;
	i = 0;
	neg = 1;
	if (!str[i])
		return (0);
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] > 47 && str[i] < 58)
	{
		res = 10 * res + (str[i] - 48);
		i++;
	}
	return (neg * res);
}
/*
long	ft_atoi(const char *str)
{
	long	r;
	int		x;
	long	negative;

	r = 0;
	x = 0;
	negative = 1;
	if (!str[x])
		return (0);
	while (!ft_isprint(str[x]) || str[x] == ' ' || str[x] == '+')
	{
		if (str[x] == '+' || str[x] == 27)
			if (str[x + 1] == '+' || str[x + 1] == '-' || str[x] == 27)
				return (0);
		x++;
	}
	negative *= str[x] == '-' ? -1 : 1;
	x += negative == -1 ? 1 : 0;
	while (str[x] >= '0' && str[x] <= '9')
	{
		r = r * 10 + (long)(str[x] - '0');
		x++;
	}
	r *= negative;
	return (r);
}*/

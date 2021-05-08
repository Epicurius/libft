/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clamp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:10:50 by nneronin          #+#    #+#             */
/*   Updated: 2021/05/08 15:03:38 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static double	ft_clamp2(double x, double min, double max)
{
	if (x < min)
		return (min);
	if (x > max)
		return (max);
	return (x);
}

double	ft_clamp(double x, double a, double b)
{
	if (a > b)
		return (ft_clamp2(x, b, a));
	else if (a < b)
		return (ft_clamp2(x, a, b));
	else
		return (a);
}

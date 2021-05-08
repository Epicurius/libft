/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xyz.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:14:50 by nneronin          #+#    #+#             */
/*   Updated: 2021/05/08 15:19:54 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_compare_xyz(t_xyz a, t_xyz b)
{
	if (a.x == b.x && a.y == b.y && a.z == b.z)
		return (1);
	return (0);
}

t_xyz	ft_sum_xyz(t_xyz a, t_xyz b)
{
	t_xyz	total;

	total.x = a.x + b.x;
	total.y = a.y + b.y;
	total.z = a.z + b.z;
	return (total);
}

t_xyz	ft_xyz(double x, double y, double z)
{
	t_xyz	new;

	new.x = x;
	new.y = y;
	new.z = z;
	return (new);
}

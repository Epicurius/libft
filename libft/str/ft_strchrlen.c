/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:06:26 by nneronin          #+#    #+#             */
/*   Updated: 2019/11/06 13:36:18 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_strchrlen(const char *str, int c)
{
	int x;

	x = 0;
	while (*str && *str != c)
	{
		str++;
		x++;
	}
	if (*str != (char)c)
		return (0);
	return (x);
}

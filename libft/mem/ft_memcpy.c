/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@stuent.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:32:06 by nneronin          #+#    #+#             */
/*   Updated: 2019/10/25 13:11:46 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		x;
	char		*str;
	const char	*source;

	str = dst;
	source = src;
	x = 0;
	if (!n || str == source)
		return (dst);
	while (x < n)
	{
		str[x] = source[x];
		x++;
	}
	return (dst);
}

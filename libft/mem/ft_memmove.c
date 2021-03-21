/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@stuent.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:31:25 by nneronin          #+#    #+#             */
/*   Updated: 2019/10/25 14:25:36 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*tmp;
	const char	*src2;

	tmp = dst;
	src2 = src;
	if (dst > src)
	{
		while (n > 0)
		{
			n--;
			tmp[n] = src2[n];
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}

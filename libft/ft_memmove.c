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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	x;
	char	*asd;
	char	*qwe;

	qwe = (char *)src;
	asd = (char *)dest;
	x = 0;
	if (!n || qwe == asd)
		return (dest);
	if (asd > qwe)
	{
		while (n-- > 0)
			asd[n] = qwe[n];
	}
	else
	{
		while (n != 0)
		{
			asd[x] = qwe[x];
			x++;
			n--;
		}
	}
	return (asd);
}

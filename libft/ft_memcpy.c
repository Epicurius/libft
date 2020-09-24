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

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	int				x;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	x = 0;
	if (!n || s1 == s2)
		return (str1);
	while (n--)
	{
		*s1++ = *s2++;
	}
	return (str1);
}

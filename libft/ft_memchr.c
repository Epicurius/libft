/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@stuent.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:41:55 by nneronin          #+#    #+#             */
/*   Updated: 2019/10/26 15:12:23 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*asd;

	asd = (char const *)str;
	while (n != 0)
	{
		if (*asd == (char)c)
			return ((void *)asd);
		asd++;
		n--;
	}
	return (0);
}

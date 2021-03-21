/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@stuent.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:18:03 by nneronin          #+#    #+#             */
/*   Updated: 2020/09/24 14:59:06 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	char		*str;
	unsigned char	cchar;

	i = 0;
	str = b;
	cchar = c;
	while (i < len)
	{
		str[i] = cchar;
		i++;
	}
	return (b);
}

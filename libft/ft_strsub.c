/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@stuent.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:36:26 by nneronin          #+#    #+#             */
/*   Updated: 2019/10/29 13:23:40 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*asd;
	int		y;

	y = 0;
	if (!(asd = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (len > 0 && s[start])
	{
		asd[y] = s[start];
		y++;
		start++;
		len--;
	}
	asd[y] = '\0';
	return (asd);
}

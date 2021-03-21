/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@stuent.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 12:14:49 by nneronin          #+#    #+#             */
/*   Updated: 2019/10/29 09:54:41 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		x;
	char	*asd;

	x = 0;
	while (s[x] != '\0')
		x++;
	if (!(asd = (char *)malloc(x + 1)))
		return (0);
	x = 0;
	while (s[x] != '\0')
	{
		asd[x] = f(s[x]);
		x++;
	}
	asd[x] = '\0';
	return (asd);
}

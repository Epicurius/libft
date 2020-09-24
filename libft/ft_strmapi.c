/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@stuent.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 12:46:13 by nneronin          #+#    #+#             */
/*   Updated: 2019/10/29 13:28:28 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		x;
	char	*asd;

	x = 0;
	while (s[x] != '\0')
		x++;
	if (!(asd = (char *)malloc(sizeof(char) * (x + 1))))
		return (0);
	x = 0;
	while (s[x] != '\0')
	{
		asd[x] = f(x, s[x]);
		x++;
	}
	asd[x] = '\0';
	return (asd);
}

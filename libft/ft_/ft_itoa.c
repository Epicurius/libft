/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@stuent.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 13:18:53 by nneronin          #+#    #+#             */
/*   Updated: 2019/10/26 15:40:13 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char			*ft_itoa(int n)
{
	int		nbrcount;
	int		i;
	char	*str;
	int		neg;

	i = 0;
	nbrcount = ft_nbrlen(n);
	if (!(str = ft_strnew(nbrcount)))
		return (0);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	neg = n < 0 ? -1 : 0;
	n *= n < 0 ? -1 : 1;
	while (nbrcount + neg > 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i++;
		nbrcount--;
	}
	neg == -1 ? str[i] = '-' : 0;
	i += neg == -1 ? 1 : 0;
	str = ft_reverse(str);
	return (str);
}

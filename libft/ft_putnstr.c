/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 13:05:43 by nneronin          #+#    #+#             */
/*   Updated: 2020/01/24 10:58:53 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_putnstr(char *str, int n)
{
	int x;

	x = 0;
	if (*str == '\0')
		return ;
	if (n < 0)
		ft_putstr(str);
	else
	{
		while (x != n)
		{
			if (str[x] == '\0')
				return ;
			write(1, &str[x], 1);
			x++;
		}
	}
}

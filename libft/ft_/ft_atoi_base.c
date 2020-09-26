/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 14:53:00 by nneronin          #+#    #+#             */
/*   Updated: 2020/09/24 16:27:05 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline int		is_valid(char c)
{
	if ((c >= '0' && c <= '9') ||
		(ft_tolower(c) >= 'a' && ft_tolower(c) <= 'f'))
	{
		return (1);
	}
	return (0);
}

static inline int		value_of(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

int						ft_atoi_base(const char *str, int str_base)
{
	int result;
	int sign;

	result = 0;
	while (*str <= 32)
		str++;
	sign = (*str == '-') ? -1 : 1;
	(*str == '-' || *str == '+') ? ++str : 0;
	while (is_valid(*str))
		result = result * str_base + value_of(*str++);
	return (result * sign);
}

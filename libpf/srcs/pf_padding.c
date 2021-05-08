/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_padding.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 14:02:24 by nneronin          #+#    #+#             */
/*   Updated: 2021/05/08 15:08:54 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			padding(t_printf *p, int n)
{
	unsigned c;

	if (p->padding)
	{
		c = 32 | (p->flag.zero);
		if (!n && !(p->flag.minus))
			while (p->padding--)
				p->buffer(p, &c, 1);
		else if (n && (p->flag.minus))
			while (p->padding--)
				p->buffer(p, &c, 1);
	}
}

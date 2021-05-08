/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_undefined.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 15:41:57 by nneronin          #+#    #+#             */
/*   Updated: 2021/05/08 15:08:54 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void					no_specifier(t_printf *p)
{
	if ((p->padding = p->min_len - 1) > 0)
	{
		padding(p, 0);
		p->buffer(p, p->format, 1);
		padding(p, 1);
	}
	else
		p->buffer(p, p->format, 1);
}

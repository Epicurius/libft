/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 14:01:45 by nneronin          #+#    #+#             */
/*   Updated: 2020/09/24 10:48:13 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static inline void	flag_type(t_printf *p)
{
	while (ft_strchr("#+-0* ", *p->format))
	{
		if (*p->format == '#')
			p->flag.hash = 1;
		else if (*p->format == ' ')
			p->flag.space = 1;
		else if (*p->format == '+')
			p->flag.plus = 1;
		else if (*p->format == '-')
			p->flag.minus = 1;
		else if (*p->format == '0')
			p->flag.zero = 1;
		else if (*p->format == '*')
			p->flag.star = 1;
		++p->format;
	}
}

void				read_flags(t_printf *p)
{
	int nbr;

	nbr = 0;
	flag_type(p);
	if ((p->flag.minus) && !(p->flag.star))
		p->flag.zero = 0;
	if (p->flag.plus)
		p->flag.space = 0;
	if (p->flag.star && (p->flag.star = 0))
	{
		if ((nbr = (int)va_arg(p->ap, int)) < 0)
		{
			p->flag.minus = 0;
			nbr = -nbr;
		}
		else
			p->flag.minus = 0;
		if (!(p->fpreci))
			p->min_len = nbr;
		else
		{
			(!(p->flag.minus)) ? p->preci = nbr : 0;
			p->fpreci = (!nbr) ? 1 : 0;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 13:51:24 by nneronin          #+#    #+#             */
/*   Updated: 2021/05/08 15:08:54 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		pf_nbr(t_printf *p)
{
	intmax_t	nbr;

	if (p->size & LONG)
		nbr = ((intmax_t)va_arg(p->ap, long));
	else if (p->size & LLONG)
		nbr = ((intmax_t)va_arg(p->ap, long long));
	else if (p->size & SSHORT)
		nbr = (intmax_t)((char)va_arg(p->ap, int));
	else if (p->size & SHORT)
		nbr = (intmax_t)((short)va_arg(p->ap, int));
	else if (p->size & INTMAX)
		nbr = (va_arg(p->ap, intmax_t));
	else if (p->size & SIZE_T)
		nbr = ((intmax_t)va_arg(p->ap, ssize_t));
	else
		nbr = ((intmax_t)va_arg(p->ap, int));
	if (p->flag.zero)
		p->preci = p->min_len;
	nbr_to_buffer(p, nbr, 0);
}

void		nbr_to_buffer(t_printf *p, intmax_t nbr, int len)
{
	char		s[21];
	uintmax_t	tmp;

	tmp = labs(nbr);
	while (tmp && (len += 1))
		tmp /= 10;
	if ((nbr < 0 || p->flag.plus || p->flag.space) && p->flag.zero)
		p->preci -= 1;
	p->printed = ft_max(len, p->preci);
	if (nbr < 0 || p->flag.plus || p->flag.space)
		++p->printed;
	p->padding = (p->printed > p->min_len) ? 0 : p->min_len - p->printed;
	padding(p, 0);
	tmp = labs(nbr);
	nbr_fill(tmp, 10, s, p);
	(p->flag.space) ? s[0] = ' ' : 0;
	(nbr < 0) ? s[0] = '-' : 0;
	(p->flag.plus && nbr >= 0) ? s[0] = '+' : 0;
	p->buffer(p, s, p->printed);
	padding(p, 1);
}

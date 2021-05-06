/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_nbr_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 13:59:10 by nneronin          #+#    #+#             */
/*   Updated: 2020/09/24 11:58:02 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void		pf_putnb_base(t_printf *p)
{
	uintmax_t	nbr;

	if (p->size & LONG)
		nbr = ((intmax_t)va_arg(p->ap, unsigned long));
	else if (p->size & LLONG)
		nbr = ((intmax_t)va_arg(p->ap, unsigned long long));
	else if (p->size & SHORT)
		nbr = (uintmax_t)((unsigned short)va_arg(p->ap, int));
	else if (p->size & SSHORT)
		nbr = (uintmax_t)((unsigned char)va_arg(p->ap, int));
	else if (p->size & INTMAX)
		nbr = (va_arg(p->ap, uintmax_t));
	else if (p->size & SIZE_T)
		nbr = ((uintmax_t)va_arg(p->ap, size_t));
	else
		nbr = (uintmax_t)va_arg(p->ap, unsigned int);
	nbr_base_to_buffer(p, nbr, p->base);
}

void		nbr_base_to_buffer(t_printf *p, uintmax_t nbr, int b)
{
	char		s[21];
	int			ext;
	uintmax_t	tmp;

	p->printed = 0;
	tmp = nbr;
	while (tmp && ++p->printed)
		tmp /= b;
	(p->flag.zero) ? p->preci = p->min_len : 0;
	ext = (p->printed >= p->preci) ? 0 : 1;
	p->printed = ft_max(p->preci, p->printed);
	((p->flag.hash) && b == 8 && !ext) ? --p->min_len : 0;
	((p->flag.hash) && b == 8 && !nbr && (p->fpreci)) ? ++p->printed : 0;
	((p->flag.hash) && b == 16 && !(p->flag.zero)) ? p->min_len -= 2 : 0;
	p->padding = ft_max(0, (p->min_len - p->printed));
	padding(p, 0);
	if (nbr && (p->flag.hash) && ((b == 8 && !ext) || (b == 16)))
		p->buffer(p, "0", 1);
	if (nbr && (p->flag.hash) && b == 16)
		p->buffer(p, (p->upcase) ? "X" : "x", 1);
	nbr_fill(nbr, b, s, p);
	p->buffer(p, s, p->printed);
	padding(p, 1);
}

void		nbr_fill(uintmax_t tmp, int b, char *s, t_printf *p)
{
	int			len;
	unsigned	c;

	if (tmp && (p->flag.zero) && (p->flag.hash))
		if (b == 16 && !(p->size & LLONG) && p->printed > 3)
			p->printed -= 2;
	c = 'a' - 10 - p->upcase;
	len = p->printed;
	while (len--)
	{
		s[len] = tmp % b + ((tmp % b < 10) ? '0' : c);
		tmp /= b;
	}
	if (p->fpreci && p->flag.zero)
		s[0] = ' ';
}

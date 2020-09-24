/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 13:59:37 by nneronin          #+#    #+#             */
/*   Updated: 2020/09/24 15:59:26 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void			printf_null(t_printf *p)
{
	if (!(p->flag.zero))
		p->buffer(p, "(null)", 6);
	else
		while (p->min_len--)
			p->buffer(p, "0", 1);
}

void			pf_str(t_printf *p)
{
	unsigned	c;
	unsigned	*s;

	if (!(s = va_arg(p->ap, unsigned*)))
		printf_null(p);
	else
	{
		p->printed = (int)(ft_strlen((char*)s));
		p->fpreci ? p->printed = ft_min(p->printed, p->preci) : 0;
		if ((p->padding = (p->min_len - p->printed)) > 0)
		{
			c = 32 | (p->flag.zero);
			if (!(p->flag.minus))
				while (p->padding--)
					p->buffer(p, &c, 1);
			else
			{
				p->buffer(p, s, p->printed);
				while (p->padding--)
					p->buffer(p, &c, 1);
				return ;
			}
		}
		p->buffer(p, s, p->printed);
	}
}

size_t			ft_charlen(unsigned wc)
{
	if (wc < 0x80)
		return (1);
	else if (wc < 0x800)
		return (2);
	else if (wc < 0x10000)
		return (3);
	else if (wc < 0xE0080)
		return (4);
	return (0);
}

static void		pf_putchar(t_printf *p, unsigned int wc,
		unsigned int wlen, unsigned int nb_bytes)
{
	char	tmp[4];

	if (nb_bytes <= wlen && (int)nb_bytes <= MB_CUR_MAX)
	{
		if (nb_bytes == 1)
			tmp[0] = wc;
		else if (nb_bytes == 2)
			tmp[0] = ((wc & (0x1f << 6)) >> 6) | 0xC0;
		else if (nb_bytes == 3)
			tmp[0] = ((wc >> 12) & 0xf) | 0xE0;
		else
		{
			tmp[0] = ((wc >> 18) & 7) | 0xF0;
			tmp[1] = ((wc >> 12) & 0x3f) | 0x80;
		}
		if (nb_bytes != 1 && nb_bytes != 2)
			tmp[nb_bytes - 2] = ((wc >> 6) & 0x3f) | 0x80;
		if (nb_bytes != 1)
			tmp[nb_bytes - 1] = (wc & 0x3f) | 0x80;
		p->buffer(p, tmp, nb_bytes);
	}
}

void			pf_char(t_printf *p)
{
	const unsigned c = va_arg(p->ap, unsigned);

	if ((p->size & LONG || p->size & LLONG) && (!(p->printed = ft_charlen(c))))
		p->len = -1;
	else
		p->printed = 1;
	if ((p->padding = p->min_len - p->printed) < 0)
		p->padding = 0;
	padding(p, 0);
	pf_putchar(p, c, p->printed, p->printed);
	padding(p, 1);
}

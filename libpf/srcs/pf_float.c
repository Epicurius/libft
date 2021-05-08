/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_float.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 14:01:17 by nneronin          #+#    #+#             */
/*   Updated: 2021/05/08 15:49:21 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	float_precision(double n, t_printf *p, long value, int b)
{
	int			len;
	char		s[48];
	unsigned	c;

	c = 'a' - 10 - ((p->upcase) >> 1);
	len = p->printed - 1 - p->preci;
	while (p->preci--)
	{
		s[len + p->preci + 1] = value % b + ((value % b < 10) ? '0' : c);
		value /= b;
	}
	s[len] = '.';
	value = (long)(n < 0 ? -n : n);
	while (++p->preci < len)
	{
		s[len - p->preci - 1] = value % b + ((value % b < 10) ? '0' : c);
		value /= b;
	}
	(p->fpreci && p->flag.zero) ? s[0] = ' ' : 0;
	(p->flag.space) ? s[0] = ' ' : 0;
	(n < 0) ? s[0] = '-' : 0;
	(p->size && p->flag.plus && n >= 0) ? s[0] = '+' : 0;
	if (b == 16 && (p->len += 2))
		p->buffer(p, "0x", 2);
	p->buffer(p, s, p->printed);
}

void			pf_putdouble(t_printf *p)
{
	double		n;
	long		tmp;
	int			len;
	double		decimal;
	long		value;

	n = (double)va_arg(p->ap, double);
	(p->flag.zero) ? p->preci = p->min_len : 0;
	if (!(p->fpreci))
		p->preci = 7;
	len = 1;
	tmp = (long)(n < 0 ? -n : n);
	while (tmp && ++len)
		tmp /= 10;
	p->printed = p->preci + len + ((n < 0) ? 1 : 0);
	decimal = (n < 0 ? -n : n);
	decimal = (decimal - (long)(decimal)) * ft_pow(10, p->preci + 1);
	decimal = ((long)decimal % 10 > 4) ? decimal / 10 + 1 : decimal / 10;
	value = (long)decimal;
	float_precision(n, p, value, 10);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_options.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 14:00:56 by nneronin          #+#    #+#             */
/*   Updated: 2020/09/24 16:00:33 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static inline int		atoi_lite(char **s)
{
	int		sign;
	int		r;

	r = 0;
	sign = 1;
	if (**s == '-' || **s == '+')
		sign = 44 - *(*s)++;
	while (**s >= '0' && **s <= '9')
		r = r * 10 + *(*s)++ - '0';
	return (sign * r);
}

static inline void		field_width_precision(t_printf *p)
{
	if (48 < *p->format && *p->format < 58)
		p->min_len = ft_max(atoi_lite(&p->format), 1);
	if (*p->format == '.')
	{
		++p->format;
		p->preci = ft_max(atoi_lite(&p->format), 0);
		p->fpreci = 1;
	}
	while (1)
	{
		if (*p->format == 'h')
			p->size |= (p->format[1] == 'h' && ++p->format) ? SSHORT : SHORT;
		else if (*p->format == 'l')
			p->size |= (p->format[1] == 'l' && ++p->format) ? LLONG : LONG;
		else if (*p->format == 'j')
			p->size |= INTMAX;
		else if (*p->format == 'z')
			p->size |= SIZE_T;
		else if (*p->format == 'L')
			p->size |= LLONG;
		else
			break ;
		++p->format;
	}
}

static inline void		base_nbr(t_printf *p)
{
	p->base = 0;
	if (*p->format == 'o')
		p->base = 8;
	else if (*p->format == 'u')
		p->base = 10;
	else if (*p->format == 'x' || *p->format == 'X')
		p->base = 16;
}

static inline void		specifier_sorter(t_printf *p)
{
	if (*p->format == 's')
		pf_str(p);
	else if (*p->format == 'c')
		pf_char(p);
	else if (*p->format == 'd')
		pf_nbr(p);
	else if (*p->format == 'i')
		pf_nbr(p);
	else if (*p->format == 'o')
		pf_putnb_base(p);
	else if (*p->format == 'u')
		pf_putnb_base(p);
	else if (*p->format == 'x')
		pf_putnb_base(p);
	else if (*p->format == 'X')
		pf_putnb_base(p);
	else if (*p->format == 'f')
		pf_putdouble(p);
	else
		no_specifier(p);
}

void					read_options(t_printf *p)
{
	if (!*p->format)
		return ;
	ft_bzero(&p->flag, sizeof(t_flag));
	p->size = 0;
	p->min_len = 0;
	p->preci = 1;
	p->upcase = 0;
	p->fpreci = 0;
	read_flags(p);
	field_width_precision(p);
	read_flags(p);
	if (p->flag.plus)
		p->flag.space = 0;
	if (*p->format == 'X')
		p->upcase = 1;
	base_nbr(p);
	specifier_sorter(p);
	if (p->len > 0)
		p->i = 0;
}

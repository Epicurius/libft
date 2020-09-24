/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 14:04:52 by nneronin          #+#    #+#             */
/*   Updated: 2020/09/24 15:24:34 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

/*
** --------------------------- prints args ------------------------------------
*/

int		ft_printf(const char *format, ...)
{
	t_printf	p;
	char		buff[PF_BUF];

	ft_bzero(&p, sizeof(p));
	p.fd = 1;
	p.format = (char *)format;
	p.buffer = &buffer_set;
	p.buff = buff;
	va_start(p.ap, format);
	while (*p.format && p.len > -1)
	{
		if (*p.format == '%' && (++p.format))
			read_options(&p);
		else if (*p.format == '{')
			color(&p);
		else if (++p.i)
			p.buffer(&p, &*p.format, 1);
		++p.format;
	}
	write(p.fd, p.buff, p.buff_index - (p.len < 0 ? p.i : 0));
	va_end(p.ap);
	return (p.len);
}

/*
** ------------------------- Reutrns the string -------------------------------
*/

char	*ft_sprintf(const char *format, ...)
{
	t_printf	p;
	char		*r;

	ft_bzero(&p, sizeof(p));
	p.fd = 1;
	p.format = (char *)format;
	p.buffer = &buffer_mod;
	p.buff = NULL;
	va_start(p.ap, format);
	while (*p.format && p.len > -1)
	{
		if (*p.format == '%' && (++p.format))
			read_options(&p);
		else if (*p.format == '{')
			color(&p);
		else if (++p.i)
			p.buffer(&p, &*p.format, 1);
		++p.format;
	}
	p.buff[p.buff_index + 1] = '\0';
	if (!(r = ft_strdup(p.buff)))
		return (NULL);
	ft_strdel(&p.buff);
	va_end(p.ap);
	return (r);
}

/*
** --------------------------- Prints to fd output ----------------------------
*/

int		ft_fprintf(int fd, const char *format, ...)
{
	t_printf	p;
	char		buff[PF_BUF];

	ft_bzero(&p, sizeof(p));
	p.fd = fd;
	p.format = (char *)format;
	p.buffer = &buffer_set;
	p.buff = buff;
	va_start(p.ap, format);
	while (*p.format && p.len > -1)
	{
		if (*p.format == '%' && (++p.format))
			read_options(&p);
		else if (*p.format == '{')
			color(&p);
		else if (++p.i)
			p.buffer(&p, &*p.format, 1);
		++p.format;
	}
	write(p.fd, p.buff, p.buff_index - (p.len < 0 ? p.i : 0));
	va_end(p.ap);
	return (p.len);
}

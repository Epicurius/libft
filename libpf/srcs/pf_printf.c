/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 11:16:38 by nneronin          #+#    #+#             */
/*   Updated: 2021/05/15 18:54:24 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpf.h"

void	init_data(t_pf *p, int fd)
{
	ft_bzero(p, sizeof(*p));
	p->chars = 0;
	p->print_len = 0;
	p->fd = fd;
	reset_options(p);
}

int	ft_printf(const char *restrict format, ...)
{
	t_pf	p;
	char	buff[BUFF_SIZE];

	if (!format)
		return (-1);
	init_data(&p, 1);
	p.buffer = buff;
	va_start(p.ap, format);
	read_format((char *)format, &p);
	write(p.fd, p.buffer, p.chars);
	va_end(p.ap);
	return (p.print_len);
}

int	ft_dprintf(int fd, const char *restrict format, ...)
{
	t_pf	p;
	char	buff[BUFF_SIZE];

	if (!format)
		return (-1);
	init_data(&p, fd);
	p.buffer = buff;
	va_start(p.ap, format);
	read_format((char *)format, &p);
	write(p.fd, p.buffer, p.chars);
	va_end(p.ap);
	return (p.print_len);
}

char	*ft_sprintf(const char *restrict format, ...)
{
	t_pf	p;
	char	buff[BUFF_SIZE];
	char	*str;

	if (!format)
		return (NULL);
	init_data(&p, 1);
	p.buffer = buff;
	va_start(p.ap, format);
	read_format((char *)format, &p);
	va_end(p.ap);
	str = ft_strndup(p.buffer, p.chars);
	return (str);
}

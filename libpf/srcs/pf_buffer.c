/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_fill_buffer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 11:47:04 by nneronin          #+#    #+#             */
/*   Updated: 2021/05/15 19:25:59 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpf.h"
/*
void	fill_output_buffer(t_pf *p, const char *s, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (p->chars + size >= BUFF_SIZE)
	{
		write(p->fd, p->buffer, p->chars);
		p->chars = 0;
	}
	if (size < BUFF_SIZE)
	{
		while (i < size)
		{
			p->buffer[p->chars] = s[i];
			i++;
			p->chars++;
		}
	}
	else
		write(p->fd, s, size);
}
*/
void	fill_buffer(t_pf *p, const char *s, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (p->print_len != -1)
		p->print_len += size;
	if (p->chars + size > MAX_INT)
		p->print_len = -1;
	if (p->chars + size >= BUFF_SIZE)
	{
		write(p->fd, p->buffer, p->chars);
		p->chars = 0;
	}
	if (size < BUFF_SIZE)
	{
		while (i < size)
		{
			p->buffer[p->chars] = s[i];
			i++;
			p->chars++;
		}
	}
	else
		write(p->fd, s, size);
}

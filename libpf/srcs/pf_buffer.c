/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_buffer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 14:02:40 by nneronin          #+#    #+#             */
/*   Updated: 2020/09/24 15:23:23 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void			buffer_mod(t_printf *p, void *new, size_t size)
{
	void	*tmp;

	tmp = NULL;
	if (p->buff != NULL)
	{
		tmp = ft_memalloc(p->buff_index + 1);
		ft_memcpy((char *)(tmp), (char *)(p->buff), p->buff_index);
		free(p->buff);
	}
	p->buff = ft_memalloc(p->buff_index + size + 1);
	ft_memcpy((char *)(p->buff), (char *)(tmp), p->buff_index);
	ft_memcpy((char *)(p->buff + p->buff_index), (char *)(new), size);
	free(tmp);
	p->buff_index += size;
	p->len += size;
}

void			buffer_set(t_printf *p, void *new, size_t size)
{
	long		i;
	int			diff;

	i = 0;
	while (PF_BUF - p->buff_index < size)
	{
		diff = PF_BUF - p->buff_index;
		ft_memcpy((char *)(p->buff + p->buff_index), (char *)(new + i), diff);
		size -= diff;
		i += diff;
		p->buff_index += diff;
		p->len += diff;
		write(p->fd, p->buff, p->buff_index);
		p->buff_index = 0;
	}
	ft_memcpy((char *)(p->buff + p->buff_index), (char *)(new + i), size);
	p->buff_index += size;
	p->len += size;
}

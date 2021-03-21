/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@stuent.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 09:49:46 by nneronin          #+#    #+#             */
/*   Updated: 2020/09/24 14:49:00 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void		*ft_memalloc(size_t size)
{
	void	*mem;

	if (!(mem = malloc(sizeof(*mem) * size)))
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}

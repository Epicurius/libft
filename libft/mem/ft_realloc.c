/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:14:32 by nneronin          #+#    #+#             */
/*   Updated: 2021/05/08 14:15:27 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t new_size)
{
	void	*new;

	if (!new_size && ptr)
	{
		new = (char *)ft_memalloc(1);
		if (!new)
			return (NULL);
		ft_memdel(&ptr);
		return (new);
	}
	new = ft_memalloc(new_size);
	if (!new)
		return (NULL);
	if (ptr)
	{
		ft_memcpy(new, ptr, new_size);
		ft_memdel(&ptr);
	}
	return (new);
}

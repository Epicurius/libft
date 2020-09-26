/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@stuent.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 09:46:41 by nneronin          #+#    #+#             */
/*   Updated: 2020/09/24 16:26:02 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *x;

	if (!(x = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		x->content = NULL;
		x->content_size = 0;
	}
	else
	{
		if (!(x->content = (void *)malloc(sizeof(content_size))))
			return (0);
		x->content = ft_memcpy(x->content, content, content_size);
		x->content_size = content_size;
	}
	x->next = NULL;
	return (x);
}

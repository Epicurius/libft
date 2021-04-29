/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@stuent.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 09:46:41 by nneronin          #+#    #+#             */
/*   Updated: 2021/04/29 14:29:05 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if (!(new = (t_list*)ft_memalloc(sizeof(*new))))
		return (0);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	if (!(new->content = malloc(content_size)))
		return (0);
	ft_memmove(new->content, content, content_size);
	new->content_size = content_size;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

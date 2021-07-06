/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@stuent.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:46:48 by nneronin          #+#    #+#             */
/*   Updated: 2021/05/08 14:08:25 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	if (alst == NULL)
		return ;
	(*alst)->prev->next = (*alst)->next;
	(*alst)->next->prev = (*alst)->prev;
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}

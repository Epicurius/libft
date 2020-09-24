/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@stuent.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:03:47 by nneronin          #+#    #+#             */
/*   Updated: 2020/09/24 15:10:34 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;

	while ((*alst)->next != NULL)
	{
		temp = (*alst)->next;
		ft_lstdelone(&*alst, del);
		*alst = temp;
	}
	ft_lstdelone(&*alst, del);
	*alst = NULL;
}

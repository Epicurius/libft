/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@stuent.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:43:39 by nneronin          #+#    #+#             */
/*   Updated: 2019/10/23 19:14:39 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*copy;
	t_list	*newlist;

	if (!lst)
		return (0);
	copy = f(lst);
	newlist = copy;
	while (lst->next)
	{
		lst = lst->next;
		copy->next = f(lst);
		if (copy->next == lst)
		{
			free(copy->next);
			return (NULL);
		}
		copy = copy->next;
	}
	return (newlist);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@stuent.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:28:02 by nneronin          #+#    #+#             */
/*   Updated: 2021/04/29 13:55:37 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!new || !alst)
		return ;
	if (!(*alst))
	{
		(*alst) = new;
		(*alst)->next = NULL;
		(*alst)->prev = NULL;
	}
	else
	{
		new->next = (*alst);
		new->next->prev = new;
		(*alst) = new;
	}
}

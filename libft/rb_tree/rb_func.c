/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_func.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:04:09 by nneronin          #+#    #+#             */
/*   Updated: 2021/06/12 10:44:18 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*find_node(t_tree *root, char *name)
{
	int		val;
	t_tree	*node;

	node = root;
	while (1)
	{
		if (!node)
			return (NULL);
		val = ft_strcmp(node->name, name);
		if (val == 0)
			return (node);
		if (val > 0)
			node = node->left;
		else
			node = node->right;
	}
	return (NULL);
}

void	rb_create_node(char *name, void *content)
{
	t_tree	*node;

	node = malloc(sizeof(t_tree));
	node->name = ft_strdup(name);
	node->left = NULL;
	node->right = NULL;
	node->parent = NULL;
	node->flag = RB_RED;
	node->content = content;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:01:04 by nneronin          #+#    #+#             */
/*   Updated: 2021/06/12 10:45:48 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	rb_free_tree(t_tree **root)
{
	if (!root || !*root)
		return ;
	if ((*root)->left)
		rb_free_tree(&((*root)->left));
	if ((*root)->right)
		rb_free_tree(&((*root)->right));
	if ((*root)->name)
		free((*root)->name);
	free(*root);
	*root = 0;
}

void	rb_balance(t_tree **node, int am_i_left)
{
	t_tree	*uncle;
	t_tree	*parent;
	int		is_parent_left;

	parent = (*node)->parent;
	if (!parent)
		(*node)->flag &= ~RB_RED;
	if (!parent || !(parent->flag & RB_RED))
		return ;
	is_parent_left = (parent->parent && parent->parent->left == parent);
	uncle = parent->parent->left;
	if (is_parent_left)
		uncle = parent->parent->right;
	if (uncle && uncle->flag & RB_RED)
	{
		parent->flag &= ~RB_RED;
		uncle->flag &= ~RB_RED;
		parent->parent->flag |= RB_RED;
		parent = parent->parent;
		rb_balance(&parent, (parent->parent && parent->parent->left == parent));
	}
	else if (is_parent_left)
		balance_black_uncle_left(node, am_i_left);
	else
		balance_black_uncle_right(node, am_i_left);
}

static inline int	launch_recursive(t_tree **root, t_tree **node)
{
	int	val;

	if ((*root) == NULL)
	{
		(*root) = *node;
		return (0);
	}
	val = ft_strcmp((*root)->name, (*node)->name);
	if (!val)
		return (-1);
	else if (val > 0 && (*root)->left)
		return (launch_recursive(&((*root)->left), node));
	else if (val < 0 && (*root)->right)
		return (launch_recursive(&((*root)->right), node));
	else if (val > 0)
		(*root)->left = *node;
	else
		(*root)->right = *node;
	(*node)->parent = (*root);
	return (0);
}

int	rb_insert(t_tree **root, t_tree *node)
{
	if (!root || !node)
		return (-1);
	if (launch_recursive(root, &node) == -1)
		return (-1);
	if (node->parent && node->parent->left == node)
		rb_balance(&node, 1);
	else
		rb_balance(&node, 0);
	while (node->parent != NULL)
		node = node->parent;
	*root = node;
	(*root)->flag &= ~RB_RED;
	return (0);
}

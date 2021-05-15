/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_colors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:15:12 by nneronin          #+#    #+#             */
/*   Updated: 2021/05/15 20:43:52 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpf.h"

static void	color_cmd(t_pf *p, char *color, int code_len)
{
	fill_buffer(p, color, 5);
	p->format += code_len - 1;
}

static void	color_text(t_pf *p)
{
	if (ft_strnequ(&*p->format, "{RESET}", 7))
		color_cmd(p, RESET, 7);
	else if (ft_strnequ(&*p->format, "{RED}", 5))
		color_cmd(p, RED, 5);
	else if (ft_strnequ(&*p->format, "{GREEN}", 7))
		color_cmd(p, GREEN, 7);
	else if (ft_strnequ(&*p->format, "{YELLOW}", 8))
		color_cmd(p, YELLOW, 8);
	else if (ft_strnequ(&*p->format, "{BLUE}", 6))
		color_cmd(p, BLUE, 6);
	else if (ft_strnequ(&*p->format, "{MAGENTA}", 9))
		color_cmd(p, MAGENTA, 9);
	else if (ft_strnequ(&*p->format, "{CYAN}", 6))
		color_cmd(p, CYAN, 6);
	else if (ft_strnequ(&*p->format, "{WHITE}", 7))
		color_cmd(p, WHITE, 7);
	else
		fill_buffer(p, p->format, 1);
}

void	pf_colors(t_pf *p)
{
	if (*p->format == '{' && (&*p->format + 1))
		color_text(p);
	else
		fill_buffer(p, p->format, 1);
}

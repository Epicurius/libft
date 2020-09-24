/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 14:55:46 by nneronin          #+#    #+#             */
/*   Updated: 2020/09/24 15:29:20 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	color_cmd(t_printf *p, char *color, int code_len)
{
	char *clr_code;

	clr_code = ft_strjoiner("\x1b[", color, "m", NULL);
	p->buffer(p, clr_code, 5);
	free(clr_code);
	p->format += code_len - 1;
	p->i += code_len - 1;
}

void	color_text(t_printf *p)
{
	if (!ft_strncmp(&*p->format, "{RESET}", 7))
		color_cmd(p, "00", 7);
	else if (!ft_strncmp(&*p->format, "{UND}", 5))
		color_cmd(p, "40", 5);
	else if (!ft_strncmp(&*p->format, "{BOLD}", 6))
		color_cmd(p, "10", 6);
	else if (!ft_strncmp(&*p->format, "{RED}", 5))
		color_cmd(p, "31", 5);
	else if (!ft_strncmp(&*p->format, "{GREEN}", 7))
		color_cmd(p, "32", 7);
	else if (!ft_strncmp(&*p->format, "{YELLOW}", 8))
		color_cmd(p, "33", 8);
	else if (!ft_strncmp(&*p->format, "{BLUE}", 6))
		color_cmd(p, "34", 6);
	else if (!ft_strncmp(&*p->format, "{MAGENTA}", 9))
		color_cmd(p, "35", 9);
	else if (!ft_strncmp(&*p->format, "{CYAN}", 6))
		color_cmd(p, "36", 6);
	else if (!ft_strncmp(&*p->format, "{WHITE}", 7))
		color_cmd(p, "37", 7);
	else
		no_specifier(p);
}

void	color_all(t_printf *p)
{
	if (!ft_strncmp(&*p->format, "{:RED}", 6))
		color_cmd(p, "41", 6);
	else if (!ft_strncmp(&*p->format, "{:GREEN}", 8))
		color_cmd(p, "42", 8);
	else if (!ft_strncmp(&*p->format, "{:YELLOW}", 9))
		color_cmd(p, "43", 9);
	else if (!ft_strncmp(&*p->format, "{:BLUE}", 7))
		color_cmd(p, "44", 7);
	else if (!ft_strncmp(&*p->format, "{:MAGENTA}", 10))
		color_cmd(p, "45", 10);
	else if (!ft_strncmp(&*p->format, "{:CYAN}", 7))
		color_cmd(p, "46", 7);
	else if (!ft_strncmp(&*p->format, "{:WHITE}", 8))
		color_cmd(p, "47", 8);
	else if (!ft_strncmp(&*p->format, "{:CURS}", 7))
		color_cmd(p, "30", 7);
	else
		no_specifier(p);
}

void	color(t_printf *p)
{
	if (*p->format == '{' && p->format[p->i + 1] != ':')
		color_text(p);
	else if (*p->format == '{' && p->format[p->i + 1] == ':')
		color_all(p);
}

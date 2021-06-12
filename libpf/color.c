/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_picker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 09:46:53 by nneronin          #+#    #+#             */
/*   Updated: 2021/06/12 10:41:33 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpf.h"

void	font_color(void)
{
	int	i;
	int	j;
	int	code;

	i = -1;
	while (++i < 16)
	{
		j = -1;
		while (++j < 16)
		{
			code = i * 16 + j;
			write(1, "\x1b[38;5;", 7);
			ft_putnbr(code);
			write(1, "m ", 2);
			ft_putnbr(code);
		}
		write(1, "\x1b[00m\n", 6);
	}
}

void	bg_color(void)
{
	int	i;
	int	j;
	int	code;

	i = -1;
	while (++i < 16)
	{
		j = -1;
		while (++j < 16)
		{
			code = i * 16 + j;
			write(1, "\x1b[48;5;", 7);
			ft_putnbr(code);
			write(1, "m ", 2);
			ft_putnbr(code);
		}
		write(1, "\x1b[00m\n", 6);
	}
}

void	font_format(void)
{
	write(1, "\x1b[1m BOLD", 9);
	write(1, "\x1b[0m\x1b[4m Underline", 18);
	write(1, "\x1b[0m\x1b[7m Reversed", 17);
	write(1, "\x1b[00m\n", 6);
}

int	main(void)
{
	font_color();
	bg_color();
	font_format();
	return (1);
}

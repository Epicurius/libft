/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_bxpm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 14:42:43 by nneronin          #+#    #+#             */
/*   Updated: 2021/05/10 11:10:19 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bxpm.h"
#include <stdio.h>

void	write_bxpm_header(t_bxpm *bxpm, int fd)
{
	write(fd, (const void*)&bxpm->w, sizeof(uint32_t));
	write(fd, (const void*)&bxpm->h, sizeof(uint32_t));
	write(fd, (const void*)&bxpm->clr_nb, sizeof(uint32_t));
	write(fd, (const void*)&bxpm->pix_nb, sizeof(uint32_t));
	write(fd, (const void*)&bxpm->bpp, sizeof(uint32_t)); //make 8
}

void	write_bxpm_colors(t_bxpm *bxpm, int fd)
{
	int	i;

	i = -1;
	while (++i < bxpm->clr_nb)
	{
		write(fd, (const void*)&bxpm->clr[i], sizeof(uint32_t));
	}
}

void	write_bxpm_pixels(t_bxpm *bxpm, int fd)
{
	int	i;

	i = -1;
	while (++i < bxpm->pix_nb)
		write(fd, (const void*)&bxpm->pix[i], 2);
}

void	write_bxpm(t_bxpm *bxpm, char *path)
{
	int fd;
	char *full;

	full = ft_strjoin(path, ".bxpm");
	fd = creat(full, S_IRUSR | S_IWUSR);
	write_bxpm_header(bxpm, fd);
	write_bxpm_colors(bxpm, fd);
	write_bxpm_pixels(bxpm, fd);
	free(full);
	close(fd);
}

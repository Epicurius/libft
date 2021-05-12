/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_bxpm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 13:20:28 by nneronin          #+#    #+#             */
/*   Updated: 2021/05/12 10:55:23 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bxpm.h"

void	read_bxpm_header(int fd, t_bxpm *bxpm)
{
	unsigned char header[20];

	read(fd, header, 20);
	bxpm->w = read_int32(header, 0);
	bxpm->h = read_int32(header, 4);
	bxpm->clr_nb = read_int32(header, 8);
	bxpm->pix_nb = read_int32(header, 12);
	bxpm->bpp = read_int32(header, 16);
	bxpm->clr = malloc(sizeof(uint32_t) * bxpm->clr_nb);
	bxpm->pix = malloc(sizeof(unsigned short) * bxpm->pix_nb);
}


void	read_bxpm_clr(int fd, t_bxpm *bxpm)
{
	int				i;
	int				x;
	unsigned char	*clr;

	i = 0;
	x = 0;
	clr = malloc(sizeof(unsigned char) * (bxpm->clr_nb * 4));
	read(fd, clr, bxpm->clr_nb * 4);
	while (i < bxpm->clr_nb * 4)
	{
		bxpm->clr[x] = read_color32(clr, i);
		i += 4;
		x++;
	}
	free(clr);
}


void	read_bxpm_pix(int fd, t_bxpm *bxpm)
{
	int				i;
	int				x;
	unsigned char	*pix;

	i = 0;
	x = 0;
   	pix = malloc(sizeof(unsigned char) * (bxpm->pix_nb * 2));
	read(fd, pix, bxpm->pix_nb * 2);
	while (i < bxpm->pix_nb * 2)
	{
		bxpm->pix[x] = read_int16(pix, i);
		i += 2;
		x++;
	}
	free(pix);
}

void	read_bxpm(t_bxpm *bxpm, char *file)
{
	int				x;
	int				fd;
	long long int	i;

	fd = open(file, O_RDONLY);
	read_bxpm_header(fd, bxpm);
	read_bxpm_clr(fd, bxpm);
	read_bxpm_pix(fd, bxpm);
	close(fd);
}

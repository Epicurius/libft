/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_bmp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 13:37:21 by nneronin          #+#    #+#             */
/*   Updated: 2021/05/17 17:45:46 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bxpm.h"

static int	bmp_header(int fd, t_header *header)
{
	if (read(fd, &header->type, 2) == -1
		|| read(fd, &header->size, 4) == -1
		|| read(fd, &header->reserved1, 2) == -1
		|| read(fd, &header->reserved2, 2) == -1
		|| read(fd, &header->offset, 4) == -1
		|| read(fd, &header->header_size, 4) == -1
		|| read(fd, &header->width_px, 4) == -1
		|| read(fd, &header->height_px, 4) == -1
		|| read(fd, &header->num_planes, 2) == -1
		|| read(fd, &header->bits_per_pixel, 2) == -1
		|| read(fd, &header->compression, 4) == -1
		|| read(fd, &header->image_bytes, 4) == -1
		|| read(fd, &header->x_pix_per_m, 4) == -1
		|| read(fd, &header->y_pix_per_m, 4) == -1
		|| read(fd, &header->num_colors, 4) == -1
		|| read(fd, &header->import_colors, 4) == -1)
		return (0);
	return (1);
}

int	read_bmp(t_bmp *bmp, char *file)
{
	int		fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	if (!bmp_header(fd, &bmp->header))
		return (0);
	bmp->data = malloc(sizeof(*bmp->data) * bmp->header.image_bytes);
	if (!bmp->data)
		return (0);
	read(fd, bmp->data, bmp->header.image_bytes);
	close(fd);
	return (1);
}

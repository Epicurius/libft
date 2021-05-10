/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   surface_to_bmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 12:48:53 by nneronin          #+#    #+#             */
/*   Updated: 2021/05/10 14:41:08 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bxpm.h"

void	write_bpm_header(int fd, t_header *header)
{
	write(fd, (const void *)&header->type, sizeof(uint16_t));
	write(fd, (const void *)&header->size, sizeof(uint32_t));
	write(fd, (const void *)&header->reserved1, sizeof(uint16_t));
	write(fd, (const void *)&header->reserved2, sizeof(uint16_t));
	write(fd, (const void *)&header->offset, sizeof(uint32_t));
	write(fd, (const void *)&header->header_size, sizeof(uint32_t));
	write(fd, (const void *)&header->width_px, sizeof(int32_t));
	write(fd, (const void *)&header->height_px, sizeof(int32_t));
	write(fd, (const void *)&header->num_planes, sizeof(uint16_t));
	write(fd, (const void *)&header->bits_per_pixel, sizeof(uint16_t));
	write(fd, (const void *)&header->compression, sizeof(uint32_t));
	write(fd, (const void *)&header->image_bytes, sizeof(uint32_t));
	write(fd, (const void *)&header->x_pix_per_m, sizeof(int32_t));
	write(fd, (const void *)&header->y_pix_per_m, sizeof(int32_t));
	write(fd, (const void *)&header->num_colors, sizeof(uint32_t));
	write(fd, (const void *)&header->import_colors, sizeof(uint32_t));
}

void	write_bpm_pixel_data(int fd, t_bmp *bmp)
{
	write(fd, bmp->data, bmp->header.image_bytes);
}

void	write_bmp(char *name, t_bmp *bmp)
{
	int			fd;

	fd = creat(name, S_IRUSR | S_IWUSR);
	write_bpm_header(fd, &bmp->header);
	write_bpm_pixel_data(fd, bmp);
	close(fd);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_bmp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 13:37:21 by nneronin          #+#    #+#             */
/*   Updated: 2021/05/12 11:48:17 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bxpm.h"

int	read_bmp(t_bmp *bmp, char *file)
{
	int		fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	if (read(fd, &bmp->header, 54) <= 0)
		return (0);
	bmp->data = malloc(sizeof(*bmp->data) * bmp->header.image_bytes);
	if (!bmp->data)
		return (0);
	read(fd, bmp->data, bmp->header.image_bytes);
	close(fd);
	return (1);
}

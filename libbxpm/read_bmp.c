/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_bmp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 13:37:21 by nneronin          #+#    #+#             */
/*   Updated: 2021/05/10 12:53:47 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bxpm.h"

t_bmp	*read_bmp(char *file)
{
	int		fd;
	t_bmp	*bmp;

	fd = open(file, O_RDONLY);
	bmp = malloc(sizeof(t_bmp));
	if (!bmp)
		return (NULL);
	if (read(fd, &bmp->header, 54) <= 0)
		return (NULL);
	bmp->data = malloc(sizeof(*bmp->data) * bmp->header.image_bytes);
	if (!bmp->data)
		return (NULL);
	read(fd, bmp->data, bmp->header.image_bytes);
	close(fd);
	return (bmp);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 13:35:55 by nneronin          #+#    #+#             */
/*   Updated: 2021/05/10 17:44:09 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BXPM_H
# define BXPM_H
# include "../libft/libft.h"
# include "../libpf/ft_printf.h"
# include <sys/stat.h>
# include <fcntl.h>
# include <math.h>

typedef struct	s_bxpm
{
	int32_t					w;
	int32_t					h;
	int32_t					bpp;
	int32_t					clr_nb;
	int32_t					pix_nb;
	uint32_t				*clr;
	unsigned short			*pix;
	uint32_t				*palet[512];
}							t_bxpm;

# pragma	pack(push)
# pragma	pack(1)

typedef struct	s_header
{
	uint16_t	type;
	uint32_t	size;
	uint16_t	reserved1;
	uint16_t	reserved2;
	uint32_t	offset;
	uint32_t	header_size;
	int32_t		width_px;
	int32_t		height_px;
	uint16_t	num_planes;
	uint16_t	bits_per_pixel;
	uint32_t	compression;
	uint32_t	image_bytes;
	int32_t		x_pix_per_m;
	int32_t		y_pix_per_m;
	uint32_t	num_colors;
	uint32_t	import_colors;
}				t_header;

# pragma	pack(pop)

typedef struct s_bmp
{
	t_header		header;
	unsigned char	*data;
}				t_bmp;

int32_t			read_int32(unsigned char *str, int index);
int32_t			read_int16(unsigned char *str, int index);
uint32_t		read_color32(unsigned char *str, int index);
uint32_t		read_color24(unsigned char *str, int i);
unsigned int	bpp_clr(double byte, unsigned char *str, uint32_t bpp);
void			write_bmp(char *name, t_bmp *bmp);
void			write_bxpm(t_bxpm *bxpm, char *path);
void			write_bxpm2(t_bxpm *bxpm, char *path, char *name);
void			create_path_and_name(char *file, char **path, char **name);
void			free_converter(t_bmp *bmp, t_bxpm *bxpm, char *path, char *name);
t_bmp			*read_bmp(char *file);
t_bxpm			*create_bxpm(t_bmp *bmp);
t_bmp			*surface_to_bmp(int w, int h, int bpp, void *pixels);

#endif

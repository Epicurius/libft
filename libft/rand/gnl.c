/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@stuent.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:20:31 by nneronin          #+#    #+#             */
/*   Updated: 2020/09/26 12:22:57 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_string_edit(t_gnl *gnl, char **file, const int fd, char **line)
{
	int		x;
	char		*tmp;

	if (gnl->cnbr == 0 && file[fd][0] == '\0')
	{
		ft_strdel(&file[fd]);
		return (0);
	}
	if (gnl->cnbr < 0)
		return (-1);
	if (((x = ft_strchrlen(file[fd], '\n')) != 0) || (file[fd][0] == '\n'))
	{
		*line = ft_strsub(file[fd], 0, x);
		tmp = ft_strdup(file[fd] + x + 1);
		free(file[fd]);
		file[fd] = tmp;
	}
	else if ((x = ft_strchrlen(file[fd], '\0')) != 0)
	{
		*line = ft_strdup(file[fd]);
		file[fd][0] = '\0';
	}
	return (gnl->tnbr);
}

int			gnl(const int fd, int buff_size, char **line)
{
	t_gnl			gnl;
	char			*tmp;
	char			buffer[buff_size + 1];
	static char		*file[GNL_FILE_NB];

	gnl.tnbr = 0;
	if (fd < 0 || !line || buff_size < 1 || fd > GNL_FILE_NB)
		return (-1);
	if (file[fd] == 0)
		file[fd] = ft_strnew(0);
	while ((gnl.cnbr = read(fd, buffer, buff_size)) > 0)
	{
		gnl.tnbr += gnl.cnbr;
		buffer[gnl.cnbr] = '\0';
		tmp = ft_strjoin(file[fd], buffer);
		free(file[fd]);
		file[fd] = tmp;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (ft_string_edit(&gnl, file, fd, line));
}

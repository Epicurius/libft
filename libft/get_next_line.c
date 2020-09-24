/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@stuent.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:20:31 by nneronin          #+#    #+#             */
/*   Updated: 2019/11/13 17:12:43 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_string_edit(char **file, const int fd, char **line, int char_nbr)
{
	int		x;
	char	*temp_storage;

	if (char_nbr == 0 && file[fd][0] == '\0')
	{
		ft_strdel(&file[fd]);
		return (0);
	}
	if (char_nbr < 0)
		return (-1);
	if (((x = ft_strchrlen(file[fd], '\n')) != 0) || (file[fd][0] == '\n'))
	{
		*line = ft_strsub(file[fd], 0, x);
		temp_storage = ft_strdup(file[fd] + x + 1);
		free(file[fd]);
		file[fd] = temp_storage;
	}
	else if ((x = ft_strchrlen(file[fd], '\0')) != 0)
	{
		*line = ft_strdup(file[fd]);
		file[fd][0] = '\0';
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char		*file[4096];
	char			read_buffer[BUFF_SIZE + 1];
	int				char_nbr;
	char			*temp_storage;

	if (fd < 0 || !line || BUFF_SIZE < 1 || fd > 4096)
		return (-1);
	if (file[fd] == 0)
		file[fd] = ft_strnew(0);
	while ((char_nbr = read(fd, read_buffer, BUFF_SIZE)) > 0)
	{
		read_buffer[char_nbr] = '\0';
		temp_storage = ft_strjoin(file[fd], read_buffer);
		free(file[fd]);
		file[fd] = temp_storage;
		if (ft_strchr(read_buffer, '\n'))
			break ;
	}
	return (ft_string_edit(file, fd, line, char_nbr));
}

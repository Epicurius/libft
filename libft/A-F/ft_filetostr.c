/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filetostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 15:06:26 by nneronin          #+#    #+#             */
/*   Updated: 2021/06/27 15:14:28 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

char	*ft_fdtostr(int fd, int i)
{
	char		*buf;
	char		*ret;
	ssize_t		bytes_read;

	buf = malloc(FTS_BUFF_SIZE);
	if (!buf)
		return (NULL);
	bytes_read = read(fd, buf, FTS_BUFF_SIZE);
	if (bytes_read > 0)
		ret = ft_fdtostr(fd, i + FTS_BUFF_SIZE);
	else
		ret = (char *)malloc(i + 1);
	if (bytes_read < 0 || !ret)
		return (NULL);
	if (ret && bytes_read)
		ft_memcpy(ret + i, buf, bytes_read);
	else
		ret[i] = 0;
	free(buf);
	return (ret);
}

char	*ft_filetostr(char *file)
{
	int		fd;
	char	*str;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (NULL);
	str = ft_fdtostr(fd, 0);
	close(fd);
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@stuent.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:14:50 by nneronin          #+#    #+#             */
/*   Updated: 2021/05/17 16:39:32 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	words_in_string(char *str, char *delim, int delim_len)
{
	int	nbr_words;

	nbr_words = 1;
	while (str)
	{
		str = ft_strstr(str, delim);
		if (!str)
			break ;
		nbr_words++;
		str += delim_len;
	}
	return (nbr_words);
}

static char	**split(char *str, char *delim, int delim_len, int nbr_words)
{
	void		*arr;
	const char	**ptrs;

	arr = malloc(sizeof(char *) * (nbr_words + 1) + ft_strlen(str) + 1);
	if (!arr)
		return (NULL);
	ptrs = arr;
	str = ft_strcpy(((char *)arr) + sizeof(char *) * (nbr_words + 1), str);
	*ptrs = str;
	while (nbr_words > 1)
	{
		str = ft_strstr(str, delim);
		if (!str)
			break ;
		*str = '\0';
		str += delim_len;
		*++ptrs = str;
	}
	*++ptrs = NULL;
	return (arr);
}

char	**ft_strpart(const char *s, const char *d, int *nb)
{
	char	**arr;
	char	*str;
	char	*delim;
	int		nbr_words;
	int		delim_len;

	str = (char *)s;
	delim = (char *)d;
	delim_len = ft_strlen(delim);
	nbr_words = words_in_string(str, delim, delim_len);
	arr = split(str, delim, delim_len, nbr_words);
	if (nb && arr)
		*nb = nbr_words;
	else if (nb)
		*nb = 0;
	return (arr);
}

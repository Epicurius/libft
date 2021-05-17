/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 15:01:20 by nneronin          #+#    #+#             */
/*   Updated: 2021/05/17 11:38:53 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

static void	wc_and_cc(char *str, char c, int *wc, int *cc)
{
	*cc = 0;
	*wc = 0;
	while (*str)
	{
		if (*str && *str != c)
		{
			*wc += 1;
			while (*str && *str != c)
			{
				str++;
				*cc += 1;
			}
		}
		else
			str++;
	}
}

char	**split(char *str, char c, int wc, int cc)
{
	void		*arr;
	const char	**ptrs;
	char		*data;

	arr = malloc(8 * (wc + 1) + (cc + wc));
	if (!arr)
		return (NULL);
	ptrs = arr;
	data = arr + 8 * (wc + 1);
	while (*str)
	{
		if (*str != c)
		{
			*ptrs = data;
			while (*str && *str != c)
				*data++ = *str++;
			*data = '\0';
			data++;
			*++ptrs = NULL;
		}
		else
			str++;
	}
	return (arr);
}

char	**ft_strsplit(const char *s, char c, int *nb)
{
	int		wc;
	int		cc;
	char	*str;

	str = (char *)s;
	wc_and_cc(str, c, &wc, &cc);
	if (nb)
		*nb = wc;
	return (split(str, c, wc, cc));
}

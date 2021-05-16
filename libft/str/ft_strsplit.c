/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 15:01:20 by nneronin          #+#    #+#             */
/*   Updated: 2021/05/16 18:31:25 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

static void	ft_wcount(char *str, char c, int *wc, int *cc)
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

char	**ft_strsplit(char *str, char c)
{
	void		*data1;
	const char	**ptrs;
	int			cc;
	int			wc;
	char		*data;

	ft_wcount(str, c, &wc, &cc);
	data1 = malloc(sizeof(char *) * (wc + 1) + (cc + wc));
	ptrs = data1;
	data = data1;
	data += sizeof(char *) * (wc + 1);
	while (*str)
	{
		if (*str != c)
		{
			*data = *str;
			*ptrs = data;
			str++;
			data++;
			while (*str && *str != c)
			{
				*data = *str;
				data++;
				str++;
			}
			*data = '\0';
			data++;
			*++ptrs = NULL;
		}
		else
			str++;
	}
	return (data1);
}
/*
int main(void)
{
	char **arr = ft_strsplit1("qwe:asd:zxc:", ':');
	
	int i = -1;
	while (arr[++i] != NULL)
		printf("%s\n", arr[i]);
	free(arr);
	return (1);
}*/

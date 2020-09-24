/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 13:49:30 by nneronin          #+#    #+#             */
/*   Updated: 2020/09/24 16:46:07 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <errno.h>
# include <stdint.h>
# include <stdbool.h>

# define PF_BUF			64

# define SHORT		(1 << 1)
# define SSHORT		(1 << 2)
# define LONG		(1 << 3)
# define LLONG		(1 << 4)
# define INTMAX		(1 << 5)
# define MIN_LEN	(1 << 6)
# define SIZE_T		(1 << 7)

typedef	struct s_printf		t_printf;
typedef	struct s_flag		t_flag;

struct			s_flag
{
	bool		hash;
	bool		space;
	bool		plus;
	bool		minus;
	bool		zero;
	bool		star;
};

struct			s_printf
{
	char		*format;
	va_list		ap;
	int			fd;
	int			i;
	int			len;
	char		size;
	t_flag		flag;
	uint8_t		base;
	int			preci;
	int			padding;
	int			printed;
	int			min_len;
	bool		upcase;
	bool		fpreci;
	char		*buff;
	size_t		buff_index;
	void		(*buffer)(t_printf *, void *, size_t);
};

/*
** --------------------------- printf variants ---------------------------------
*/
int				ft_printf(const char *format, ...);
int				ft_fprintf(int fd, const char *format, ...);
char			*ft_sprintf(const char *format, ...);
/*
** --------------------------- parse functions ---------------------------------
*/
void			read_flags(t_printf *p);
void			read_options(t_printf *p);
void			no_specifier(t_printf *p);
/*
** --------------------------- number functions --------------------------------
*/
void			pf_nbr(t_printf *p);
void			nbr_to_buffer(t_printf *p, intmax_t nbr, int len);
void			pf_putnb_base(t_printf *p);
void			nbr_base_to_buffer(t_printf *p, uintmax_t d, int b);
void			nbr_fill(uintmax_t tmp, int b, char *s, t_printf *p);
void			pf_putdouble(t_printf *p);
/*
** --------------------------- string functions --------------------------------
*/
void			pf_str(t_printf *p);
void			pf_char(t_printf *p);
/*
** --------------------------- miscellaneous functions -------------------------
*/
void			color(t_printf *p);
void			padding(t_printf *p, int n);
void			buffer_mod(t_printf *p, void *new, size_t size);
void			buffer_set(t_printf *p, void *new, size_t size);

#endif

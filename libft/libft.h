/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@stuent.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 11:56:18 by nneronin          #+#    #+#             */
/*   Updated: 2020/10/27 15:21:29 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# define GNL_BUFF_SIZE 9
# define GNL_FILE_NB 128

# define TRUE			1
# define FALSE			0
# define MAX_INT		2147483647
# define MIN_INT		-2147483648
# define MAX(a, b)		((b & ((a - b) >> 31)) | (a & (~(a - b) >> 31)))
# define MIN(a, b)		((a & ((a - b) >> 31)) | (b & (~(a - b) >> 31)))
# define POS(n)			((n) < 0 ? 0 - (n) : (n))

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_gnl
{
	int		cnbr;
	int		tnbr;
}			t_gnl;

/*
** -------------------------------- FT_LST ------------------------------------
*/
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
/*
** -------------------------------- FT_MEM ------------------------------------
*/
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memchr(const void *str, int c, size_t n);
void				*ft_memcpy(void *str1, const void *str2, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *str, int c, size_t n);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
void				*ft_realloc2(void *ptr, size_t old_size, size_t new_size);
void				*ft_realloc(void *ptr, size_t new_size);
/*
** ------------------------------ FT_IS ---------------------------------------
*/
int					ft_isupper(int c);
int					ft_iswspace(int c);
int					ft_islower(int c);
int					ft_isascii(int c);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
/*
** ---------------------------- FT_STR functions ------------------------------
*/
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strchrlen(const char *str, int c);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char	*s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoiner(char *first, ...);
char				*ft_strndup(const char *s1, size_t len);
char				*ft_strnew(size_t size);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strdup(const char *src);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *h, const char *ne, size_t n);
char				**ft_strsplit(char const *s, char c);
size_t				ft_strspn(const char *s, const char *accept);
size_t				ft_strlen(const char *str);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
/*
** --------------------------- FT_PUT functions -------------------------
*/
void				ft_putnstr(char *str, int n);
void				ft_putnchar(char c, int nbr);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
/*
** --------------------------- FT_* functions -------------------------
*/
int					ft_wordcount(const char *s, char c);
int					ft_atoi_base(const char *str, int str_base);
int					ft_max(int a, int b);
int					ft_min(int a, int b);
int					get_next_line(const int fd, char **line);
int					gnl(const int fd, int buff_size, char **line);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_itoa(int n);
char				*ft_reverse(char *s);
void				ft_timer_start(void);
void				ft_bzero(void *s, size_t n);
int				ft_atoi(const char *str);
double				ft_atof(const char *str);
size_t				ft_nbrlen(int nbr);
double				ft_timer_end(void);
double				ft_pow(double n, int pow);
float				ft_pythagoras(float a, float b);

#endif

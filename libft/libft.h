/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@stuent.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 11:56:18 by nneronin          #+#    #+#             */
/*   Updated: 2021/06/27 15:11:03 by nneronin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# define GNL_BUFF_SIZE 60
# define FTS_BUFF_SIZE 1000
# define GNL_FILE_NB 128

# define TRUE			1
# define FALSE			0
# define MAX_INT		2147483647
# define MIN_INT		-2147483648

typedef struct s_list
{
	struct s_list	*next;
	void			*content;
	size_t			content_size;
	struct s_list	*prev;
}					t_list;

/*
# define RB_RED		1

typedef struct s_tree
{
	char			*name;
	struct s_tree	*left;
	struct s_tree 	*right;
	struct s_tree	*parent;
	size_t			flag;
	void			*content;
}				t_tree;

int		rb_insert(t_tree **root, t_tree *node);
void	*find_node(t_tree *root, char *name);
void	rb_create_node(char *name, void *content);
void	balance_black_uncle_right(t_tree **node, int am_i_left);
void	balance_black_uncle_left(t_tree **node, int am_i_left);
*/
/*
** -------------------------------- FT_LST ------------------------------------
*/
int					ft_lstadd_new(t_list **list, void *content,
						size_t content_size);
int					ft_lstcontains(t_list *lst, void *content);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_dellstnode(t_list **lst, t_list *del);
/*
** -------------------------------- FT_MEM ------------------------------------
*/
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memchr(const void *str, int c, size_t n);
void				*ft_memcpy(void *str1, const void *str2, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *str, int c, size_t n);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
void				*ft_realloc2(void *ptr, size_t old_size, size_t new_size);
void				*ft_realloc(void *ptr, size_t new_size);
void				*ft_memdup(const void *mem, size_t size);
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
char				*ft_strjoinf(char *s1, char const *s2);
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
char				**ft_strpart(const char *s, const char *d, int *nb);
char				**ft_strsplit(const char *s, char c, int *nb);
size_t				ft_strspn(const char *s, const char *accept);
size_t				ft_strlen(const char *str);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
int					ft_strarr_func(char **arr, void (*f)(char **));
void				ft_strrev(char *str);
void				ft_strnrev(char *str, int len);
char				*ft_strcut(char *str, int start, int end);
char				*ft_readtostr(int fd);
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
** --------------------------- MATH functions -------------------------
*/
double				ft_min(double a, double b);
double				ft_max(double a, double b);
int					ft_nbrlen(long nbr);
double				ft_pow(double n, int pow);
long double			ft_long_pow(long double n, int pow);
float				ft_pythagoras(float a, float b);
double				ft_clamp(double x, double a, double b);
/*
** --------------------------- RAND functions -------------------------
*/
int					ft_wordcount(const char *s, char c);
int					ft_atoi_base(const char *str, int str_base);
int					get_next_line(const int fd, char **line);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_itoa(int n);
char				*ft_reverse(char *s);
void				ft_timer_start(void);
void				ft_bzero(void *s, size_t n);
int					ft_atoi(const char *str);
double				ft_atof(const char *str);
double				ft_timer_end(void);
char				*ft_fdtostr(int fd, int i);
char				*ft_filetostr(char *file);

#endif

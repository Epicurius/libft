/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nneronin <nneronin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 11:56:18 by nneronin          #+#    #+#             */
/*   Updated: 2021/07/06 09:36:50 by nneronin         ###   ########.fr       */
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

/*-------------------------------A-F------------------------------------------*/
double				ft_atof(const char *str);
int					ft_atoi(const char *str);
int					ft_atoi_base(const char *str, int str_base);
void				ft_bzero(void *str, size_t n);
double				ft_clamp(double x, double a, double b);
t_list				*ft_dellstnode(t_list **lst, t_list *del);
char				*ft_fdtostr(int fd, int i);
char				*ft_filetostr(char *file);

/*-------------------------------G-L------------------------------------------*/
int					get_next_line(const int fd, char **line);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_islower(int c);
int					ft_isprint(int c);
int					ft_isupper(int c);
int					ft_iswspace(int c);
char				*ft_itoa(int nbr);
void				ft_lstadd(t_list **alst, t_list *new);
int					ft_lstadd_new(t_list **list, void *content, size_t size);
int					ft_lstcontains(t_list *lst, void *content);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);

/*-------------------------------M-P------------------------------------------*/
void				*ft_memalloc(size_t size);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *str, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				ft_memdel(void **ap);
void				*ft_memdup(const void *mem, size_t size);
void				*ft_memmove(void *dst, const void *src, size_t n);
void				*ft_memset(void *b, int c, size_t len);
double				ft_min(double a, double b);
double				ft_max(double a, double b);
int					ft_nbrlen(long nbr);
double				ft_pow(double n, int pow);
long double			ft_long_pow(long double n, int pow);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnchar(char c, int nbr);
void				ft_putnstr(char *str, int n);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
float				ft_pythagoras(float a, float b);

/*-------------------------------Q-S------------------------------------------*/
char				*ft_readtostr(int fd);
void				*ft_realloc(void *ptr, size_t new_size);
void				*ft_realloc2(void *ptr, size_t old_size, size_t new_size);
char				*ft_reverse(char *s);
int					ft_strarr_func(char **arr, void (*f)(char **));
char				*ft_strcat(char *dest, const char *src);
char				*ft_strchr(const char *str, int c);
int					ft_strchrlen(const char *str, int c);
void				ft_strclr(char *s);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strcut(char *str, int start, int end);
void				ft_strdel(char **as);
char				*ft_strdup(const char *src);
int					ft_strequ(char const *s1, char const *s2);
void				ft_striter(char *s, void (*f)(char *));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strjoiner(char *first, ...);
char				*ft_strjoinf(char *s1, const char *s2);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
size_t				ft_strlen(const char *str);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strncat(char *dest, const char *src, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strndup(const char *s1, size_t len);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strnew(size_t size);
void				ft_strnrev(char *str, int len);
char				*ft_strnstr(const char *h, const char *ne, size_t n);
char				**ft_strpart(const char *s, const char *d, int *nb);
char				*ft_strrchr(const char *str, int c);
void				ft_strrev(char *str);
char				**ft_strsplit(const char *s, char c, int *nb);
size_t				ft_strspn(const char *s, const char *accept);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
void				ft_swap(int *a, int *b);

/*-------------------------------T-Z------------------------------------------*/
void				ft_timer_start(void);
double				ft_timer_end(void);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_wordcount(const char *s, char c);

#endif

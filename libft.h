/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 05:25:10 by gcadiou           #+#    #+#             */
/*   Updated: 2017/05/08 01:01:57 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <errno.h>
# include <stdio.h>
# include "get_next_line.h"

# define ISSPACE(s, i) s[i] == ' ' || s[i] == '\n' || s[i] == '\t'

# define COLOR(param) ft_putstr(param)

# define NONE		"\033[0m"

# define STRONG		"\033[1m"

# define BLACK		"\033[30m"
# define S_BLACK	"\033[30;1m"

# define RED		"\033[31m"
# define S_RED		"\033[31;1m"

# define GREEN		"\033[32m"
# define S_GREEN	"\033[32;1m"

# define BROWN		"\033[33m"
# define S_BROWN	"\033[33;1m"

# define BLUE		"\033[34m"
# define S_BLUE		"\033[34;1m"

# define MAGENTA	"\033[35m"
# define S_MAGENTA	"\033[35;1m"

# define CYAN		"\033[36m"
# define S_CYAN		"\033[36;1m"

# define WHITE		"\033[37m"
# define S_WHITE	"\033[37;1m"

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				ft_putchar(char c);

void				ft_putstr(char const *s);

void				ft_putstr_size(char const *s, int size);

void				ft_put_nb_c(char c, int nb);

int					ft_strlen(const char *s);

int					ft_intlen(int nb);

size_t				ft_strlcat(char *dst, const char *src, size_t size);

int					ft_atoi(const char *str);

char				*ft_strcat(char *dest, const char *src);

int					ft_strcmp(const char *s1, const char *s2);

char				*ft_strcpy(char *dest, const char *src);

char				*ft_strdup(const char *src);

char				*ft_strncat(char *dest, const char *src, size_t nb);

int					ft_strncmp(const char *s1, const char *s2, size_t n);

char				*ft_strncpy(char *dest, const char *src, unsigned int n);

char				*ft_strstr(const char *str, const char *to_find);

void				*ft_memset(void *s, int c, size_t n);

char				*ft_strchr(const char *s, int c);

char				*ft_strrchr(const char *s, int c);

char				*ft_strnstr(const char *big, const char *lil, size_t len);

int					ft_isalpha(int c);

int					ft_isdigit(int c);

int					ft_isalnum(int c);

int					ft_isascii(int c);

int					ft_isprint(int c);

int					ft_toupper(int c);

int					ft_tolower(int c);

void				ft_bzero(void *s, size_t n);

void				*ft_memcpy(void *dest, const void *src, size_t n);

void				*ft_memccpy(void *dest, const void *src, int c, size_t n);

void				*ft_memmove(void *dest, const void *src, size_t n);

void				*ft_memchr(const void *s, int c, size_t n);

int					ft_memcmp(const void *s1, const void *s2, size_t n);

void				*ft_memalloc(size_t size);

void				ft_memdel(void **ap);

char				*ft_strnew(size_t size);

void				ft_strdel(char **as);

void				ft_strclr(char *s);

void				ft_striter(char *s, void (*f) (char *));

void				ft_striteri(char *s, void (*f) (unsigned int, char *));

char				*ft_strmap(char const *s, char (*f)(char));

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int					ft_strequ(char const *s1, char const *s2);

int					ft_strnequ(char const *s1, char const *s2, size_t n);

char				*ft_strsub(char const *s, unsigned int start, size_t len);

char				*ft_strjoin(char const *s1, char const *s2);

char				*ft_strtrim(char const *s);

char				**ft_strsplit(char const *s, char c);

char				*ft_itoa(int n);

void				ft_putendl(char const *s);

void				ft_putnbr(int n);

void				ft_putchar_fd(char c, int fd);

void				ft_putstr_fd(char const *s, int fd);

void				ft_puterror(char const *s);

void				ft_putendl_fd(char const *s, int fd);

void				ft_putnbr_fd(int n, int fd);

char				**ft_mal_double_tab(char **tab, size_t l, size_t i);

void				ft_print_double_tab(char **tab, size_t l, size_t i);

t_list				*ft_lstnew(void const *content, size_t content_size);

int					ft_strlentil(const char *s, char c, size_t i);

void				*ft_realloc(void *ptr, size_t size, size_t size_actual);

char				*ft_strcut(char *s, int start, int end);

char				*ft_str_endcut(char *s, int size);

char				*ft_str_endcut_until(char *s, char c);

void				check_malloc(void *ptr, char *s);
#endif

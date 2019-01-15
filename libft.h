/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: storchbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 19:31:11 by pcollio-          #+#    #+#             */
/*   Updated: 2019/01/11 16:59:02 by storchbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h> //DELETE
#include <string.h> //DELETE
#include <ctype.h> //DELETE
#include <stdio.h> //DELETE

/* ***** Part 1 - Libc functions ***** */
int			ft_atoi(const char *str);
void	*ft_bzero(void *s, size_t n);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr (const void *str, int c, size_t n);
int		ft_memcmp(const void *one, const void *two, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t nb);
void	*ft_memset(void *a, int val, size_t num);
char		*ft_strcat(char *dest, const char *src);
char	*ft_strchr(const char *str, int c);
int			ft_strcmp(const char *str1, const char *str2);
char		*ft_strcpy(char *dest, const char *src);
// char		*ft_strdup(char *src);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
size_t		ft_strlen(const char *str);
// char		*ft_strncat(char *dest, char *src, size_t n);
// int			ft_strncmp(const char *str1, const char *str2, size_t n);
// char		*ft_strncpy(char *dest, const char *src, size_t n);
// char		*ft_strnstr(const char *s1, const char *s2, size_t n);
//*ft_strrchr
// char		*ft_strstr(const char *s1, const char *s2);
// int			ft_toupper(int c);
// int			ft_tolower(int c);
/* ***** Part 2 - Libc functions ***** */
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_striter(char *s, void (*f)(char *));
void	ft_strclr(char *s);

// ft_striter
// ft_striteri
// ft_strmap
// ft_strmapi
// ft_strequ
// ft_strnequ
// ft_strsub
// ft_strjoin
// ft_strtrim
// ft_strsplit
// ft_itoa
// ft_putchar
// ft_putstr
// ft_putendl
// ft_putnbr;
// ft_putchar_fd
// ft_putstr_fd
// ft_putendl_fd
// ft_putnbr_fd

/* ***** Part 3 - Bonus part ***** */
//ft_lstnew
//ft_lstdelone
//ft_lstdel
//ft_lstadd
//ft_lstiter
//ft_lstmap

#endif
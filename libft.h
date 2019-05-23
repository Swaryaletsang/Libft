/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 11:20:52 by atau              #+#    #+#             */
/*   Updated: 2019/05/23 12:50:14 by atau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void        ft_putchar(char c);
void        ft_putstr(char const *str);
void        ft_putnbr(int n);
size_t		ft_strlen(const char *str);
void        *ft_memset(void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void        *ft_memcpy(void *dest, const void *src, size_t n);
int         ft_isalpha(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_atoi(char *str);
int			ft_isprint(int c);
int			ft_strcmp(const char *str1, const char *str2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dest, const char *src, size_t n);
char		*ft_strcat(char *str1, char *str2);
char		*ft_strncat(char *s1, char *s2, size_t n);
char        *ft_strchr(const char *s, int c);
char        *ft_strrchr(const char *s, int c);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 11:20:52 by atau              #+#    #+#             */
/*   Updated: 2019/05/20 16:21:17 by atau             ###   ########.fr       */
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
int         ft_strlen(char *str);
void        *ft_memset(void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void        *ft_memcpy(void *dest, const void *src, size_t n);
int         ft_isalpha(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
#endif

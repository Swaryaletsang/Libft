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
#endif
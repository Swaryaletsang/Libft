# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atau <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 11:28:02 by atau              #+#    #+#              #
#    Updated: 2019/06/08 14:41:19 by atau             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#_*_Makefile_*_
NAME= libft.a
SOURCE= ./ft_putchar.c	\
		./ft_putstr.c	\
		./ft_strlen.c	\
		./ft_memset.c	\
		./ft_putnbr.c	\
		./ft_bzero.c	\
		./ft_memcpy.c	\
		./ft_isalpha.c	\
		./ft_tolower.c	\
		./ft_toupper.c	\
		./ft_isascii.c	\
		./ft_isdigit.c	\
		./ft_isalnum.c	\
		./ft_atoi.c		\
		./ft_isprint.c	\
		./ft_strcmp.c	\
		./ft_strcpy.c	\
		./ft_strncpy.c	\
		./ft_strncmp.c	\
		./ft_strcat.c	\
		./ft_strncat.c	\
		./ft_strchr.c	\
		./ft_strrchr.c	\
		./ft_memcmp.c	\
		./ft_memchr.c	\
		./ft_putchar_fd.c \
		./ft_putendl.c	\
		./ft_putendl_fd.c \
		./ft_putnbr_fd.c  \
		./ft_putstr_fd.c  \
		./ft_strclr.c	\
		./ft_strequ.c	\
		./ft_strnequ.c	\
		./ft_memalloc.c	\
		./ft_memdel.c	\
		./ft_strnew.c	\
		./ft_strdel.c	\
		./ft_strdup.c	\
		./ft_memmove.c	\
		./ft_striter.c	\
		./ft_striteri.c	\
		./ft_strmap.c	\
		./ft_strmapi.c	\
		./ft_strsub.c	\
		./ft_memccpy.c	\
		./ft_isspace.c	\
		./ft_strlcat.c	\
		./ft_strjoin.c	\
		./ft_strtrim.c	\
		./ft_strstr.c	\
		./ft_strnstr.c	\
		./ft_strsplit.c	\
		./ft_itoa.c	
CC= gcc
FLAGS= -Wall -Werror -Wextra


all: $(NAME)

$(NAME): 
	$(CC) -c $(FLAGS) $(SOURCE)
#the following line insert the object files and header file into the static library libft.a
	ar -rcv $@ *.o libft.h

clean:
	rm -f *.o a.out
fclean: clean
	rm -rf $(NAME)
re: fclean all

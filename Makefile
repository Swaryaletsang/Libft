# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atau <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 11:28:02 by atau              #+#    #+#              #
#    Updated: 2019/05/20 16:24:32 by atau             ###   ########.fr        #
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

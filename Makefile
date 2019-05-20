#_*_Makefile_*_
NAME= libft.a
SOURCE= ./ft_putchar.c	\
		./ft_putstr.c	\
		./ft_strlen.c	\
		./ft_memset.c	\
		./ft_putnbr.c	
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

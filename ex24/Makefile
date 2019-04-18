# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mleticia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/11 14:02:51 by mleticia          #+#    #+#              #
#    Updated: 2019/04/06 15:04:53 by mleticia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c \
	   ./srcs/ft_swap.c

HEADER = ./includes

all: $(NAME)

$(NAME):
	gcc -I $(HEADER) -c $(SRCS)
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib $(NAME)

clean:
	rm -f ft_putchar.o ft_putstr.c ft_strcmp.o ft_strlen.o ft_swap.o
	rm -f *.*~

fclean: clean
	rm -f $(NAME)

re: fclean all

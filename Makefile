# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anajmi <anajmi@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/26 17:36:50 by anajmi            #+#    #+#              #
#    Updated: 2021/11/28 16:32:26 by anajmi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

SRC =	\
	./ft_printf.c				\
	./libft/ft_strlen.c			\
	./libft/ft_putchar.c		\
	./libft/ft_putstr.c			\
	./libft/ft_putendl.c		\
	./libft/ft_putnbr.c			\
	./libft/ft_putnbr_usi.c		\
	./libft/ft_putnbr_base.c	\
	./libft/ft_nbr_length.c		\

OBJS = $(SRC:.c=.o)

.PHONY : all
all : $(NAME)

$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)

.PHONY : clean
clean :
	rm -f $(OBJS) $(OBBS)

.PHONY : fclean
fclean : clean
	rm -f $(NAME)

.PHONY : re
re : fclean all

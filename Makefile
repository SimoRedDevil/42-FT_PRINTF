# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-yous <mel-yous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 00:51:45 by mel-yous          #+#    #+#              #
#    Updated: 2022/11/10 21:41:39 by mel-yous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = ft_itoa.c ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putstr.c ft_putunbr.c ft_strlen.c ft_putptr.c ft_putunbr_base.c
OBJS = ft_itoa.o ft_printf.o ft_putchar.o ft_puthex.o ft_putnbr.o ft_putstr.o ft_putunbr.o ft_strlen.o ft_putptr.o ft_putunbr_base.o

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $<
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

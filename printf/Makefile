# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/15 17:28:20 by trpham            #+#    #+#              #
#    Updated: 2024/11/22 13:06:20 by trpham           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c \
		ft_putchar_fd.c \
		ft_putnbr_fd.c \
		ft_puthex_fd.c \
		ft_putnbr_unsigned.c \
		ft_putptr_fd.c \
		ft_putstr_fd.c

OBJECT = $(SRCS:%.c=%.o)

NAME = libftprintf.a

all: $(NAME)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECT)
	ar rcs $(NAME) $^

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/15 17:28:20 by trpham            #+#    #+#              #
#    Updated: 2024/11/19 12:25:57 by trpham           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c


OBJECT = $(SRCS:%.c=%.o)

NAME = libftprintf.a

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECT)
	ar rcs $(NAME) $^

clean:
	rm -f $(OBJECT)

fclean:
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
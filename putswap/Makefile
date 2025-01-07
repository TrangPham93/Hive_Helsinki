# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/13 10:30:26 by trpham            #+#    #+#              #
#    Updated: 2025/01/07 13:43:03 by trpham           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc 
CFLAGS = -Wall -Wextra -Werror

SRCS = push_swap.c

OBJS = $(SRCS:%.c=%.o)

NAME = libftpushswap.a

LIBFT_NAME = ./libft/libft.a
LIBFT_PATH = ./libft

all: $(LIBFT_NAME) $(NAME)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT_NAME):
	@make -C $(LIBFT_PATH)

$(NAME): $(LIBFT_NAME) $(OBJS)
	ar rcs $(NAME) $^ 

clean:
	@make clean -C $(LIBFT_PATH)
	rm -f $(OBJS)

fclean: clean
	@make fclean -C $(LIBFT_PATH)
	rm -f  $(NAME)

re: fclean all

.PHONY: all clean fclean re


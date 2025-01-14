# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/13 10:30:26 by trpham            #+#    #+#              #
#    Updated: 2025/01/13 18:14:36 by trpham           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc 
CFLAGS = -Wall -Wextra -Werror

SRCS = push_swap.c \
		swap.c

OBJS = $(SRCS:%.c=%.o)

NAME = push_swap #create executable instead of static library

LIBFT_NAME = libft.a
LIBFT_PATH = ./libft

all: $(LIBFT_NAME) $(NAME)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT_NAME):
	@make -C $(LIBFT_PATH)

$(NAME): $(OBJS) $(LIBFT_PATH)/$(LIBFT_NAME)
	$(CC) $(CFLAGS) $^ -o $@
#	ar rcs $(NAME) $^ 

clean:
	@make clean -C $(LIBFT_PATH)
	rm -f $(OBJS)

fclean: clean
	@make fclean -C $(LIBFT_PATH)
	rm -f  $(NAME)

re: fclean all

.PHONY: all clean fclean re


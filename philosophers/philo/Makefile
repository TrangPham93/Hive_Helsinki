# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/17 15:39:22 by trpham            #+#    #+#              #
#    Updated: 2025/06/25 21:42:41 by trpham           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = main.c \
		validate_input.c \
		validate_input2.c \
		helper_split.c \
		helper_split2.c \
		helper_libft.c \
		helper.c \
		helper2.c \
		routine.c \
		init.c \
		monitor.c \
		fork.c \
		to_delete.c
		
OBJS = $(SRCS:%.c=%.o)

NAME = philo

HEADER = philo.h

all: $(NAME)

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $@
	@echo "philo is built successfully"
	
clean:
	@rm -f $(OBJS)
	@echo "removed objects successfully"

fclean: clean
	@rm -f $(NAME)
	@echo "remove philo successfully"

re: fclean all

.PHONY: all clean fclean re
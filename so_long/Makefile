# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/13 10:30:26 by trpham            #+#    #+#              #
#    Updated: 2025/03/05 19:16:14 by trpham           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc 
CFLAGS = -Wall -Wextra -Werror -g

SRCS = main.c \
		maps.c \
		maps_helper1.c \
		maps_helper2.c \
		image_render.c \
		maps_helper3.c \
		player.c \
		helper.c

OBJS = $(SRCS:%.c=%.o)

NAME = so_long

LIBFT_DIR = ./libft
LIBFT_NAME = $(LIBFT_DIR)/libft.a

HEADERS = so_long.h

# MLX configuration
MLX_DIR = ./mlx
MLX_LIB = $(MLX_DIR)/libmlx.a
MLX_FLAGS = -L$(MLX_DIR) -lmlx -L/usr/lib/X11 -lXext -lX11 -lm -lz
MLX_REPO = https://github.com/42Paris/minilibx-linux.git

	
all: $(MLX_DIR) $(NAME)

$(MLX_DIR):
	@echo "Mlx library doesn't exit. Clone now!!"
	@git clone $(MLX_REPO) mlx;

# Contains the X11 and MLX header files
INCLUDES = -I$(MLX_DIR) -I$(LIBFT_DIR) 

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@ 

$(NAME): $(OBJS) $(LIBFT_NAME) $(MLX_LIB)
	$(CC) $(CFLAGS) $^ -o $@ $(MLX_FLAGS)

$(LIBFT_NAME):
	@make -C $(LIBFT_DIR)

$(MLX_LIB):
	@make -C $(MLX_DIR)

clean:
	@make clean -C $(LIBFT_DIR)
	@make clean -C $(MLX_DIR)
	rm -f $(OBJS)

fclean: clean
	@make fclean -C $(LIBFT_DIR)
	rm -f  $(NAME)

re: fclean all

.PHONY: all clean fclean re

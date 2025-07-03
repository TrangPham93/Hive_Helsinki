# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/13 10:30:26 by trpham            #+#    #+#              #
#    Updated: 2025/07/03 14:30:42 by trpham           ###   ########.fr        #
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

HEADERS = cub3d.h

# MLX configuration
MLX_DIR = ./mlx42
MLX_LIB = $(MLX_DIR)/build/libmlx42.a
MLX_FLAGS = -L$(MLX_DIR)/build -lmlx42 -lglfw -ldl -pthread -L/usr/lib/X11 -lXext -lX11 -lm -lz 
MLX_REPO = https://github.com/codam-coding-college/MLX42.git

	
all: $(MLX_DIR) $(NAME)

$(MLX_DIR):
	@echo "Mlx42 library doesn't exit. Clone now!!"
	@git clone $(MLX_REPO) mlx42;

# Contains the X11 and MLX header files
INCLUDES = -I$(MLX_DIR)/include -I$(LIBFT_DIR) 

%.o: %.c $(HEADERS)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@ 

$(NAME): $(OBJS) $(LIBFT_NAME) $(MLX_LIB)
	@$(CC) $(CFLAGS) $^ -o $@ $(MLX_FLAGS)
	@echo "so_long is built successfully"

$(LIBFT_NAME):
	@make -C $(LIBFT_DIR)

$(MLX_LIB):
	@cmake -B $(MLX_DIR)/build -S $(MLX_DIR)
	@cmake --build $(MLX_DIR)/build

clean:
	@make clean -C $(LIBFT_DIR)
	@make clean -C $(MLX_DIR)/build
	@rm -f $(OBJS)

fclean: clean
	@make fclean -C $(LIBFT_DIR)
	@rm -f  $(NAME)

re: fclean all

.PHONY: all clean fclean re

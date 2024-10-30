# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 15:05:22 by trpham            #+#    #+#              #
#    Updated: 2024/10/30 15:18:13 by trpham           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



# Define the compiler
CC = cc

# Define the flags for compiler
CFLAGS = -Wall -Wextra -Werror

# Define the source folder
SRC_DIRS := ./libft

# Find all the .c files in source folder
#SRCS := $(shell find $(SRC_DIRS) -name '*.c')
SRCS = some_file.c hello.c

# Define the object name
NAME = libft.a

# The default target
all: $(NAME)

# Rule to create the target executable
$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

# Rule to run the output
run: $(OBJECT)
	./$(OBJECT)



# Clean: removes the output of other targets
clean:
	rm -f all
	
# Fclean: remove all generrated files
fclean: clean
	rm -f $(NAME)
	
# Rebuild the project
re: fclean all

.PHONY: all clean fclean run re
	
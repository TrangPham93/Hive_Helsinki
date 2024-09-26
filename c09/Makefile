# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 10:41:29 by trpham            #+#    #+#              #
#    Updated: 2024/09/25 12:59:36 by trpham           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Define the compiler
CC = cc

# Define the flags for the compiler
CFLAGS = -Wall -Wextra -Werror

# Define the target name


# Define the source file
SRC_DIRS := ./srcs
SRC := $(wildcard *.c)

# The default target
all: $(TARGET)

# Rule to create the target executable
$ (TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

# Rule to run the program with arguments
run: $(TARGET)
	./$(TARGET) $(args)

# Full clean up: remove all generated files
fclean:
	rm -f $(TARGET)

# Rebuild the project
re: fclean all

.PHONY: all clean fclean re


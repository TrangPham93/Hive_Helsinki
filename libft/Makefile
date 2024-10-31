# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 15:05:22 by trpham            #+#    #+#              #
#    Updated: 2024/10/31 11:47:46 by trpham           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



# Define the compiler
CC = cc

# Define the flags for compiler
CFLAGS = -Wall -Wextra -Werror

# Define the source folder
SRC_DIR = sources

# Find all the .c files in source folder, store their path in the SRCS variable
 SRCS := $(wildcard $(SRC_DIR)/*.c)
# SRCS = $(SRC_DIR)/somefile.c $(SRC_DIR)/hello.c


# Define the build directory where object files and the lilbrary will be stored
BUILD_DIR = build

# Create a list of object file paths in the build directory, corresponding to source file
OBJECT = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRCS))
# could also write $(OBJECT:.c = .o)


# Define the library name, .a is a static library, which mean the files are combined at compiling time
NAME = libft.a

# The default target
all: $(BUILD_DIR) $(NAME)

# If BUILD_DIR not exist, create one
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)


# Rule to create the .c files to .o files
# Compile or assemble the source files, but do not link. The linking stage simply is not done.
# The ultimate output is in the form of an object file for each source file.
# $@ is the name of the target being generated, and $< the first prerequisite
# -o file Place the primary output in file file, If -o is not specified, the default is to put an executable file in a.out

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@ 

# Create the actual library
# 
$(NAME): $(OBJECT)
	ar rcs $@ $^


# Clean: removes the output of other targets
clean:
	rm -rf $(BUILD_DIR)
	
# Fclean: remove all generrated files
fclean: clean
	rm -f $(NAME)
	
# Rebuild the project
re: fclean all

.PHONY: all clean fclean re
	
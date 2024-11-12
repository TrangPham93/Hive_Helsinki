# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 15:05:22 by trpham            #+#    #+#              #
#    Updated: 2024/11/12 18:18:06 by trpham           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



# Define the compiler
CC = cc

# Define the flags for compiler
CFLAGS = -Wall -Wextra -Werror

# Find all the .c files in source folder, store their path in the SRCS variable
SRCS := $(wildcard *.c)

# Create a list of object file paths in the build directory, corresponding to source file
OBJECT = $(SRCS:%.c=%.o)

OBJECT_BONUS = 

# Define the library name, .a is a static library, which mean the files are combined at compiling time
NAME = libft.a


# The default target
all:  $(NAME)

# Rule to create the .c files to .o files
# Compile or assemble the source files, but do not link. The linking stage simply is not done.
# The ultimate output is in the form of an object file for each source file.
# $@ is the name of the target being generated, and $< the first prerequisite
# -o file Place the primary output in file file, If -o is not specified, the default is to put an executable file in a.out

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

# Create the actual library
# ar maintain archive libraries, which is a collection of files, typically object files.
#  create a new library, add members to an existing library, delete members from a library,
#  extract members from a library, and print a table of contents for a library.
#  -r Replaces or adds file to archive.
#  -c Suppresses the message that is normally printed when ar creates a new archive file
#  -s Regenerates the external symbol table regardless of whether the command modifies the archive.
#  -rcs rcs can be seen to mean replace, create, sort

$(NAME): $(OBJECT)
	ar rcs $@ $^

# Clean: removes the output of other targets
clean:
	rm -f $(OBJECT)

# Fclean: remove all generrated files
fclean: clean
	rm -f $(NAME)

# Rebuild the project
re: fclean all

# Bonus rules
# ar -u : If you would like to insert only those
# of the files you list that are newer than existing members of the same names
# only use with ar -r

# .PHONY: bonus
# bonus: $(BONUS:%.c=%.o): $(BONUS)
#	$(CC) $(CFLAGS) -c $< -o $@
#	ar rcs 
.PHONY: all clean fclean re



